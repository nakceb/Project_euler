#include<stdio.h>

int sum = 1000;
//int a = b = c = 0;
int main(){

  for(int a = 1; a < 1000; a++){
    for (int b = 1; b < 1000; b++){
      for (int c = 1; c < 1000; c++){
	if (a + b + c == 1000){
	  if(a*a + b*b == c*c){
	    printf("found pythagoras, a = %d, b = %d, c= %d\n",
		   a ,b , c);
	    printf("the product is %d\n", a*b*c);
	  }
	}
	
      }
    }
  }
  


  return(0);
}
