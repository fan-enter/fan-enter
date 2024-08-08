#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=17;
	int flag=0;
	int left=0;
	int se=sizeof(arr)/sizeof(arr[0]);
	int right=se-1;
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(arr[mid]<k)
		{
			left=mid+1;
		}
		else if(arr[mid]>k)
		{
			right=mid-1;
		}
		else
		{
			printf("找到了，小标为%d\n",mid);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("没找到"); 
	}
	return 0;
 } 
