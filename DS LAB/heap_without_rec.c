#include<stdio.h>
#include<stdbool.h>
int main()
{
	int n, h[30],k,j,v,heap=false;
	printf("enter the size :");
	scanf("%d", &n);
	for (int i =0; i<n ;i++)
	{
		scanf("%d", &h[i]);
	}
	for (int i=n/2;i>0;i--)
	{
		k=i;
		v=h[k];
		heap = false;
		while ((!heap) && (2*k) <= n)
		{
			j=2*k;
			if (j < n)
			{
				if(h[j] < h[j+1])
				{
					j = j + 1;
				}
			}
		}
		if (v >= h[j])
		{
			heap = true;
		}
		else
		{
			h[k] = h[j];
			k = j;
		}
		h[k] = v;
		
	}
	for (int i =0; i<n ;i++)
	{
		printf("%d ", h[i]);
	}
}