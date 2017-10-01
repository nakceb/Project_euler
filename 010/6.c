#include <stdio.h>
#include "6.h"

int multiple = 100;
int main(){
  printf("the diff is %d\n", sum_squared(multiple)-squared_sum(multiple));
  return(0);
}

int squared_sum(int mult){
  int sum = 0;
  for (int i = 1; i <= mult; i++){
    sum+=i*i;
  }
  return(sum);
}

int sum_squared(int mult){
  int sum = 0;
  for (int i = 1; i <= mult; i++){
    sum+=i;
  }
  return(sum*sum);
}
