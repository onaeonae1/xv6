#include "types.h"
#include "defs.h"

int sys_hello(void){
  
  char* str;
  argstr(0, &str);
  return hello(str);
}
int hello(char *str){
  cprintf("hello %s \n", str);
  return 0;
}
