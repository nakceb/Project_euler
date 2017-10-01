#include<stdio.h>
#include"5.h"

int constant = 20;
int multiple = 20;

int main(){
  while(dividable(multiple, constant) != 1){
    multiple++;
  }
  printf("The multiplication of the factos are %d\n", multiple);
  return(0);
}

_Bool dividable(int this, int all_of_these){
  for (int i = 1; i <= all_of_these; i++){
    if (this % i != 0){
      return(0);
    }
  }
  return(1);
}
