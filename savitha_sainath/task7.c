// Program for task 7
#include <stdio.h>

int CountNeuralValues (int *values, int numValues)
{
    int temp,count=0;
    for(int i = 0;i<numValues-1;++i)
    {
        if(values[i]==0)
              break;
        temp = values[i];
        for(int j=1+i;j<numValues;j++)
        {
          if(temp+values[j]==0)
            {
                values[j]=0;
                count++;
                break;
            }
        }
    }
    return count;
}

int main()
{
	int valuesA[7] = {-2, -4, 1, 4, -3, 2, -1};
	int valuesB[5] = {-11, -11, 11, 23, -23};
	int valuesC[7] = {50, 50, -50, 40, 60, -50, -40};

	int result1, result2, result3;

	result1 = CountNeuralValues(valuesA,7);
	result2 = CountNeuralValues(valuesB,5);
	result3 = CountNeuralValues(valuesC,7);

	printf("%d %d %d\n", result1, result2, result3);
	return 0;
}