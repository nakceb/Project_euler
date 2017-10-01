#include<stdio.h>
#include"3.h"
unsigned long int current_prime = 2;
unsigned long int find_factor_of = 600851475143;



int main(){
  while(find_factor_of!=1){ 
    if (find_factor_of % current_prime == 0){ 
      find_factor_of = find_factor_of / current_prime; 
      printf("prime: %lu\n", current_prime); 
      current_prime = 2; 
  	} 
    else{ 
      current_prime = get_next_prime(current_prime); 
      } 
   }
  //printf("next prime %lu\n", get_next_prime(11));
  
  return(0);
}

_Bool is_prime(unsigned long int prime ){
  for (int i = 2; i < prime; i++){
    if (prime % i == 0){
      return(1);
    }
  }
  return(0);
}

unsigned long int  get_next_prime(unsigned long int prev){
  prev++;
  while(is_prime(prev) == 1){
    prev++;
  }
  return(prev);
}
