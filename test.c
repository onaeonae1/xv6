#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char** argv){
	printf(1, "==============TEST(%d)====================\n", getpid());
        for(int i=0; i<3; i++){
	  int p = fork();
	  if(p!=0){
            int pid = getpid();
            printf(1, "child pid -> %d with ticket -> %d \n", pid, getticket());
            setticket(20);
            //printf(1, "my new ticket is %d \n", getticket());
	    wait();
            exit();
           }
	}
	wait();
	printf(1, "I'm Parent with pid -> %d \n", getpid());
	exit();
	return 0;
}	
