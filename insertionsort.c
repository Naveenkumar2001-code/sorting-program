#include<stdio.h>
#define n 7
int main()
{
	int arr[n]={10,5,3,6,7,2,1};
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		printf("\n show the array elements: %d",arr[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		printf("\n temp = %d",temp);
		printf("\n j = %d",j);
		while((temp<=arr[j])&&(j>=0))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
		printf("\n arr[j+1]= %d",arr[j+1]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n sorted array elements  %d",arr[i]);
	}
	return 0;
}
