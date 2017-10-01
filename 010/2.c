#include<stdio.h>

int main(){
  unsigned long int prev2 = 1;
  unsigned long int prev1 = 2;
  unsigned long int temp1;
  unsigned long int temp2;
  unsigned long int sum=0;
  unsigned long int end_value = 4000000;

  while (prev1<end_value){
    if (prev1 % 2 == 0){
      sum+=prev1;
    }
    temp1 = prev1 + prev2;
    temp2 = prev1;
    prev1 = temp1;
    prev2 = temp2;
  }
  printf("sum: %u[l]",sum);
  return(0);
}
