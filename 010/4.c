#include<stdio.h>
#include"4.h"
//#include<math.h>

int main(){
  int x = 999;
  int y = 999;
  int mult = x*y;
  printf("first mult is: %d\n", mult); 

  // int a = get_digit(mult);
  //_Bool bool=is_palin(mult)
  // printf("is_mult: %d , mult %d", is_mult(mult), mult);
  /* printf("printing is_palin %d\n",is_palin(x*y)); */

  while (is_mult(mult) == 0 || is_palin(mult) == 0){ 
    mult--;
    if (is_palin(mult) == 1){
      printf("is_mult(mult) is: %d\n", is_mult(mult));  
      printf("is_palin(mult) is: %d\n", is_palin(mult));
      printf("mult is: %d\n", mult); 
      
    }
  } 

  printf("is_mult(mult) is: %d\n", is_mult(mult));  
  printf("is_palin(mult) is: %d\n", is_palin(mult));
  printf("mult is: %d\n", mult); 
    
    

    
  /* while (is_palin(x*y) == 0){ */
  /*   is_palin(x*y); */
  /*   x--; */
  /*   if (x == 1){ */
  /*     y--; */
  /*     x=999; */
  /*     printf("here"); */
  /*   } */
  /*     printf("%d\n",is_palin(x*y)); */

  /* } */
  /* printf("largest palindrome might be: %d\n",is_palin(x*y)); */

  
  return(0);
}

_Bool is_palin(int num){
  int num_in=num;
  int pal = 0;
  /* printf("here"); */
  int num_of_digits = get_digit(num);
  int mult = 1;
  int temp = 0;
  /* printf("num of digits are: %d\n", get_digit(num)); */
  //get 10^num_of_digits
  for (int i=1; i < num_of_digits; i++){
    mult *= 10;
  }

  //printf("%d\n", num % 10 );
  for (int i = 0; i < num_of_digits; i++){
    temp = num % 10;
    num /= 10;
    
    pal += mult * temp;
    /* printf("temp: %d, i: %d\n", temp, i); */
    mult /= 10;
  }
  /* printf("pal: %d, num: %d\n", pal, num_in); */
  return(pal==num_in);
}

int get_digit(int num){
  int counter = 1;
  while (num != 1 && num !=0){
    num /= 10;
    counter++;
    
  }
  if (num==0){
    return(counter - 1);
  }
  return(counter);
}

_Bool is_mult(int x){
  int input = x;
  int counter1=999;
  int counter2=999;
 jump_line:;
  while (x % counter1 != 0 && counter1 != 1){
    counter1--;
  }
  /* printf("place 1, counter1 = %d counter 2 = %d\n",counter1, counter2); */
  if (counter1 == 1){
    return(0);
  }
  x /= counter1;
  while (x % counter2 != 0 && counter2 != 1){
    counter2--;
  }
    printf("place 2, counter1 = %d counter 2 = %d\n",counter1, counter2);   
  if (counter2 == 1){
    counter1--;
    counter2=999;
    goto jump_line;
  }
  if ((x / counter2) == 1){
    return(1);
  }
  return(0);
}
