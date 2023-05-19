#include "rand.h"

#define ARR_SIZE 11

int ticketArr[ARR_SIZE] = {10,20,25,30,35,40,45,50,55,60,65};
int schedArr[ARR_SIZE] = {100,110,120,130,140,150,160,170,180, 190,200};
int get_random_value(int v){
  int idx = (v * 199999) % ARR_SIZE; 
  // int idx = sys_uptime();
  // idx = idx % ARR_SIZE;
  return ticketArr[idx];
}

unsigned int ticketSeed = 1;
unsigned int schedSeed = 1;
int setTicketSeed(unsigned int seed){
    ticketSeed = seed;
    return ticketSeed;
}
int getRandomTicket(void){
    ticketSeed = ticketSeed * 1103515245 + 12345;
    int idx = (ticketSeed/47) % ARR_SIZE;
    setTicketSeed(++ticketSeed);
    return ticketArr[idx];
}

int setSchedSeed(unsigned int seed){
    schedSeed = seed;
    return schedSeed;
}
int getRandomSched(void){
    schedSeed = schedSeed * 1103515245 + 12345;
    int idx = (schedSeed/47) % ARR_SIZE;
    setSchedSeed(++schedSeed);
    return schedArr[idx];
}

