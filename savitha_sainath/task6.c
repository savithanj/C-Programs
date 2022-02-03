// Program for task 6 made simple
#include <stdio.h>

void SwapAdjacent(char *words){
  char t;
  for(int i=0;words[i+1];i+=2){
    t=words[i];
    words[i]=words[i+1];
    words[i+1]=t;
  }
}

int main() {
    char s1[20] = "buy 2 get 1 free!";
	char s2[50] = "special festival offers";
	char s3[50] = "we are open!";
    SwapAdjacent(s1);
	SwapAdjacent(s2);
	SwapAdjacent(s3);
    printf("%s\n%s\n%s\n",s1,s2,s3);
    return 0;
}