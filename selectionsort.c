#include<stdio.h>
#define n 7
int main()
{
	int arr[n]={10,5,3,6,7,2,1};
	int i,j,pos,swap;
	/*for(i=0;i<n;i++)
	{
	printf("\n show the unsorted array elements: %d ",arr[i]);
}
	for(i=0;i<n-1;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[pos]>arr[j])
			{
				pos=j;
			}
		}
		if(pos!=i)
		{
			swap=arr[pos];
			arr[pos]=arr[i];
			arr[i]=swap;
			printf("\n this is swapping element: %d",arr[i]);
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n %d \t",arr[i]);
	}
	return 0;*/
	
 printf("\n****************** another method***********************\n");
 for(i=0;i<(n-1);i++)
 {
 	for(j=i+1;j<n;j++)
 	{
 		if(arr[i]<arr[j])
 		{
 			swap=arr[i];
 			arr[i]=arr[j];
 			arr[j]=swap;
		 }
	 }
 }
 for(i=0;i<n;i++)
 {
 	printf("\n %d",arr[i]);
 }
}
