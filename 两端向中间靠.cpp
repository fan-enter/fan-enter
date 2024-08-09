#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	char arr1[]={"Welcome to home"};
	char arr2[]={"***************"};
	int left=0;
	char right=strlen(arr1)-1;
	while(left<right)
	{
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		left++;
		right--;
		printf("%s",arr2);
		Sleep(1000);
		system("cls");
	}
	printf("Welcome to home");
	return 0;
}
