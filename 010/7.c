#include<stdio.h>
#include"7.h"

int main(){
  int nr_of_primes = 0;
  int counter = 2;
  int find_prime_nr = 10001;
  
  while (nr_of_primes != find_prime_nr){
    if (is_prime(counter)){
      nr_of_primes++;
      //printf("the %d'th prime is %d\n", nr_of_primes, counter);
    }
    counter++;
  }
  printf("the %d'th prime is %d\n", nr_of_primes, counter-1);
  
}

_Bool is_prime(int prime){
  for (int i = 2; i < prime; i++){
    if (prime % i == 0){
      return(0);
    }
  }
  return(1);
}
