#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "13.h"
#include "13_string.h"


int main(){
  // string_array = create_13_string();
  char* const string_array_shortened[100];
  int value_array[100];
  unsigned long sum = 0;
  for (int i = 0; i < 100; i++){
    strncpy(string_array_shortened[i], string_array[i], 13);
  }
  //char* value_string[100] = string_array_shortened;
    for (int i = 0; i < 100; i++){
      value_array[i] = atoi(string_array_shortened[i]);
      printf("value is %d for i = %d\n",value_array[i], i);
    }
  return(0);
}
 
