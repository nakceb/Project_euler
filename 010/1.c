#include <stdio.h>

int main(){
  //array with multiples that should be summed
  int mult[] = {3,5};

  //sumation of all numbers devidable by 3 or 5
  int sum = 0;

  //sum until end value
  int end_value = 1000;

  for (int i=1; i< end_value; i++){
    //    printf("i: %u",i);
    for (int j=0;j<sizeof(mult)/sizeof(mult[0]);j++){
      if (i % mult[j] == 0){
	sum+=i;
	//printf("i: %u mult[j] = %u\n",i, mult[j]);
       break;
      }
    }
  }

printf("sum: %d ", sum);
  return(0);
}
