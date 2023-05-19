#include "types.h"
#include "stat.h"
#include "user.h"

int arr[10000]= {0,};

int main(int argc, char** argv){
	int startPid = getpid();
	printf(1, "==============TEST(%d)====================\n", startPid);
	for(int i=0; i<10; i++){
		int p = fork();
	  	if(p>0){
			int pid = getpid();
			//setTicketSeed(i+1);
			printf(1, "\n");
			printf(1, "child pid -> %d \n", pid);
			printf(1, "\n");
			//int randomValue = getRandomTicket();
			//setticket(randomValue);
			//printf(1, "my new ticket is %d \n", getticket());
			arr[pid] = pid;
			wait();
			exit();
		}
	}
	
	wait();
	exit();
	return 0;
}	
