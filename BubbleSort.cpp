#include<stdio.h>

int main()
{
	int array[5];
	int n,i,j;
	
	printf("enter the number of elements");
	scanf("%d",&n);
	
	printf("Enter  elements\n");
	for( i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	
	
	printf("The numbers you entered are as follows:");
	for( i=0;i<n;i++)
	{
		printf("%d\n",array[i]);
	}
	
	printf("\n");
	printf("Bubble Sort");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		
		{
			if(array[j]>array[j+1])
			{
				int temp;
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
				
			}
		}
	}
	
	printf("After Bubble sort:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}

	
	
	return 0;
}
