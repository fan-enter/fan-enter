 #include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int h,m,s,k;
	h=8,m=34,s=54;
	printf("\n����������ѭ��,Ҫ������ǿ����ֹ.\n\n");
	printf("���ڵ�ʱ���ǣ�");
	while(1)
	{
		printf("%02d:%02d:%02d:",h,m,s);
		//sleep <windows.h>�еĺ������ò��� 
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
