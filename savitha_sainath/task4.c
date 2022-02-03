// Program for Task 4
#include<stdio.h>
int NotebookRacksRequired(int delegates,int firstHour,int unusedNotebooks,int notebooksPerRack){
  return ((delegates*(1+firstHour)-unusedNotebooks-1)/notebooksPerRack+1);
}

int main()
{
	printf("Racks Count = %d\n", NotebookRacksRequired(51,1,7,9));
	printf("Racks Count = %d\n", NotebookRacksRequired(24,0,4,13));
	printf("Racks Count = %d\n", NotebookRacksRequired(12,0,0,12));
	return 0;
}