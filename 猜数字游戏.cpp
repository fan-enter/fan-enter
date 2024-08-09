#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
void menu()
 {
 	printf("***请选择***\n");
	printf("***1,玩游戏***\n");
	printf("***0,不玩游戏***\n"); 
 }
void game()
 {
 	srand((unsigned)time(NULL));
 	int p=rand()%100+1;
 	int count=5;
 	int q=0;
 	do
 	{
 		printf("你一共有5次机会，你还剩%d次机会\n",count);
 		printf("请输入你要猜的数字>");
 		scanf("%d",&q);
	 if(q<p)
	 {
	 	printf("你猜小了\a\n");
		 }
	 else if(q>p)
	 {
	 	printf("你猜大了\a\n");
		}
	 else 
	 {
	 	printf("恭喜你猜对了，数字是%d",q);
	 	break;
		 }	
		 count--;
		 if(count==0)
		 {
		 	printf("最终答案是%d ",p);
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
			printf("退出游戏");
			break; 
		}
		default:
		{
			printf("输入错误，请重新输入"); 
		}
		}
		h--;
	}while(h);
	return 0;
}



 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
