#include "types.h"
#include "stat.h"
#include "user.h"

int main (void){
  printf(1,"the read system call has been called %d times \n",countrd());
  exit();
}
