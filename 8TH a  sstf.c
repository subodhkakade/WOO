#include<stdio.h>
#include<stdlib.h>
int main()
{
	int RQ[100],i,n,initial,TotalHeadMoment=0,count=0;
	printf("\n Enter no. of request");
	scanf("%d",&n);
	printf("\n Enter the request sequence ");
	for(i=0;i<n;i++)
	
		scanf("%d",&RQ[i]);
	
	printf("Enter the initial head position");
	scanf("%d",&initial);
	
	while(count!=n)
	{
		int min=1000,index,d;
		for(i=0;i<n;i++)
		{
			d=abs(RQ[i]-initial);
			if(min>d)
			{
				min=d;
				index=i;
			}
		}
		TotalHeadMoment=TotalHeadMoment+min;
		initial=RQ[index];
		RQ[index]=1000;
		count++;
	}
	printf("%d:",TotalHeadMoment);
}
