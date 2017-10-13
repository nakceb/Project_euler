#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char string[] = "hello";
char string_array[2][20] = {"hello","2000000000"};
int main(){
  printf("string is %s\n",string);
  //printf("string_array is %s %s\n", string_array[0], string_array[1]);
  unsigned long value = atoi(string_array[1]);
  printf("value is %lu\n", value);
  return(0);
}
 
