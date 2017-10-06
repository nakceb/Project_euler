#include <stdio.h>
#include "../general/is_prime"

unsigned long sum = 2;
int main(){

  for (int i = 3; i < 2000000; i++){
    if (is_prime(i)){
	sum += i;
      }
    if (i % 100000 == 0){
      printf("working... \n");
    }
  }
      printf("sum of the first 2 million primes is  %lu\n", sum); 
    return(0);

}
