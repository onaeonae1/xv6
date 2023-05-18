#define ARR_SIZE 11

int arr[ARR_SIZE] = {10,20,25,30,35,40,45,50,55,60,65};
int get_random_value(int v){
  int idx = (v * 199999) % ARR_SIZE; 
  // int idx = sys_uptime();
  // idx = idx % ARR_SIZE;
  return arr[idx];
}

