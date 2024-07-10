#include<stdio.h>
#include<conio.h>
main()
{
	int arr[7]={2,4,5,3,5,9,1};
	int max = -1;
	int i;
	for(i=0;i<8;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	
	}
	printf("largest element : %d",max);
	
}
