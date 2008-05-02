#include<mpi.h>
#include<stdio.h>

#define msg_size 256

double *workarray;
#define ARRSIZE 2
#define NWORKITER 0
#define NITER 5000

void do_work(){
  for(int iter = 0; iter<NITER;iter++){
    for(int i=0;i<ARRSIZE;i++){
      workarray[i] = 0.5 * workarray[(i*7) % ARRSIZE] +  0.5 * workarray[(i*11) % ARRSIZE];
    }
  }
}



int main(int argc, char ** argv){
	  int rank;            /* process id */
	  int np;                /* number of processes */

	  char message_s[msg_size], message_r[msg_size];  /* storage for the message */
	  
	  MPI_Status status;    /* return status for receive */
	  	  
	  MPI_Init( &argc, &argv );
	  
	  workarray = new double[ARRSIZE];

	  MPI_Comm_rank( MPI_COMM_WORLD, &rank );
	  MPI_Comm_size( MPI_COMM_WORLD, &np );

	  
	  MPI_Barrier(MPI_COMM_WORLD); 


	  for(int i=0;i<NITER;i++){
	    if(rank % 2 == 0) {
	      MPI_Send(message_s, msg_size, MPI_CHAR, rank+1, 0, MPI_COMM_WORLD);
	      MPI_Recv(message_r, msg_size, MPI_CHAR, rank+1, 0, MPI_COMM_WORLD, &status); 
	    } else {
	      MPI_Recv(message_r, msg_size, MPI_CHAR, rank-1, 0, MPI_COMM_WORLD, &status); 
	      MPI_Send(message_s, msg_size, MPI_CHAR, rank-1, 0, MPI_COMM_WORLD);
	    }
	    
	    
	    do_work();

	    if(i > NITER/2){
	      MPI_Barrier(MPI_COMM_WORLD);
	    }
	    
	  }
	  
	  
	  MPI_Barrier(MPI_COMM_WORLD); 
	  
	  MPI_Finalize();

	return 0;
}
