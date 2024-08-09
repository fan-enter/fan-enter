 #include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int h,m,s,k;
	h=8,m=34,s=54;
	printf("\n本程序是死循环,要结束请强行终止.\n\n");
	printf("现在的时间是：");
	while(1)
	{
		printf("%02d:%02d:%02d:",h,m,s);
		//sleep <windows.h>中的函数，用不起？ 
		if(++s>=60){
			s=0;
			if(++m>=60){
				m=0;
				if(++h>=24)h=0;
				
			}
		} 
		for(k=0;k<=8;k++)printf("%c",8);
	};
	return 0;
}
