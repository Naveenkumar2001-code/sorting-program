#include<stdio.h>
#define n 7
int main()
{
	int arr[n]={10,5,3,6,7,2,1};
	int i,j,swap;
	for(i=0;i<n;i++)
	{
	printf("\n \t show the unsorted array elemmwnts: %d",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				swap=arr[i];
				arr[i]=arr[j];
				arr[j]=swap;		
			}
				printf("\n swapping the element: %d",arr[j]);
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n \t soreted array elements: %d",arr[i]);
	}
	return 0;
}
