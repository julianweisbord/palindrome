#include "stdio.h"
#include "string.h"

int main(int argc, char **argv){

  int input;
  for(input = 0; input <strlen(argv[1]); ++input){

  }
  printf("Length is %d\n", input);
  int x,check = 0;
  int i =1;
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
