#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int main(int argc, char **argv){
  if(argc >2){
    printf("Must only be one word.\n");
    exit(0);
  }
  int input;
  for(input = 0; input < strlen(argv[1]); ++input){
  }

  printf("Length is %d\n", input);
  //
  int x= 0;
  int check =0;
  int i =1;
  //
  while(1 >0){
    if(argv[1][x] ==argv[1][input -i]){
      printf("check %d verified\n", x+1);
      ++check;
      if(check>=input/2){
        printf("input/2: %d\n", input/2);
        printf("Palindrome!!\n");
        break;
      }
    }
    else{
      printf("Not palindrome!\n");
      break;
    }
    ++i,++x;
  }

}
