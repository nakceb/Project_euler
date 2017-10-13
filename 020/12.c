#include <stdio.h>
#include "12.h"
//answer is at x = 12375

int main(){
  int x = 10000;
  int sum = 0;
  int denoms = 0;
  int max = 0;
  // printf("enter x'th starting triangel number you want");
  //scanf("%d",&x);
  while(denoms < 500){
    x += 1;
    sum = triangle_number(x);
    printf("the x'th trinagle number %d\n",x);
    denoms = num_of_denom(sum);
    if (denoms > max)
      max=denoms;
    printf(" sum is %d\n",sum);
    printf("MAX encountered value was %d",max);
  }
  printf("The First tringle value to be over 500 is %d",sum);
  return(0);
}

//Finds the value for the x'th triangle number
unsigned long triangle_number(int x){
  unsigned long sum = 0;
  for (int i = 0; i <= x; i++){
    sum += i;
  }
  return(sum);
}

int num_of_denom(unsigned long x){
  int num_of_denoms = 0;
  for (int i = 1; i < x; i++){
    if (x % i == 0){
      num_of_denoms +=1;
    }
  }
  return(num_of_denoms);
}
 
