#include<stdio.h>
int day(int y,int x)
{
	int arr1[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int z=arr1[x];
	if(x=2&&y%4==0&&y%100!=0||y%400==0)
	{
		z+=1;
		return z;
	}
	return z;
}
int main()
{
	int y=0,x=0;
	printf("���������·�> ");
	scanf("%d %d",&y,&x);
	int d=day(y,x);
	printf("%d��%d����%d�� ",y,x,d);
	return 0;
 } 
