// Program for Task 8
#include<stdio.h>

void DartBoard(char *board, int width, int height){
  for(int i=0;i<height;i++){
    for(int j=0;j<width+1;j++){
      if(((i==0 || i==height-1) && (j<width)) || (j==0 || j==width-1)){
        board[i*(width+1)+j]='#';
      }
      else if(j==width){
        board[i*(width+1)+j]='\n';
      }
      else if((i==height/2 || i==(height-1)/2)&&(j==width/2 || j==(width-1)/2))
        board[i*(width+1)+j]='O';
      else
        board[i*(width+1)+j]=' ';
    }
  }
  board[height*(width+1)]='\0';
  }

  int main()
  {
	  char board1[100];
	  char board2[100];
	  char board3[100];
	  DartBoard(board1, 5, 5 );
	  printf("%s\n", board1);
	  DartBoard(board2, 6, 6 );
	  printf("%s\n", board2);
	  DartBoard(board3, 6, 5 );
	  printf("%s\n", board3);
	  return 0;
  }
