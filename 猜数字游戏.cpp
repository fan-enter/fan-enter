#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
void menu()
 {
 	printf("***��ѡ��***\n");
	printf("***1,����Ϸ***\n");
	printf("***0,������Ϸ***\n"); 
 }
void game()
 {
 	srand((unsigned)time(NULL));
 	int p=rand()%100+1;
 	int count=5;
 	int q=0;
 	do
 	{
 		printf("��һ����5�λ��ᣬ�㻹ʣ%d�λ���\n",count);
 		printf("��������Ҫ�µ�����>");
 		scanf("%d",&q);
	 if(q<p)
	 {
	 	printf("���С��\a\n");
		 }
	 else if(q>p)
	 {
	 	printf("��´���\a\n");
		}
	 else 
	 {
	 	printf("��ϲ��¶��ˣ�������%d",q);
	 	break;
		 }	
		 count--;
		 if(count==0)
		 {
		 	printf("���մ���%d ",p);
		  } 
 }while (count!=0);
}
int main()
{
	int h=0;
	do
	{
		menu();
		scanf("%d",&h);
		switch(h)
		{
			case 1:
		{	
			game();
			break; 
		}
		case 0:
		{
			printf("�˳���Ϸ");
			break; 
		}
		default:
		{
			printf("�����������������"); 
		}
		}
		h--;
	}while(h);
	return 0;
}



 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
