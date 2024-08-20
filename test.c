#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("加入闯王，");
//	printf("你愿意与闯王出身入死吗？\n"); 
//	scanf("%d", &input);
//	if (input == "愿意")
//		printf("闯王与你共富贵！");
//	else 
//	    printf("那只好送你去见朱重八了！");
//
//	return 0;
//}   	
int main()
{
	int input = 0 ;
	printf("加入闯王，");
	printf("你愿意与闯王出身入死吗？\n");
	scanf("%d",&input);
	if (input == 1)
		printf("闯王与你共富贵！\n");
	
	else
		printf("那只好送你去见朱重八了！");

	return 0;
}