//#include<stdio.h>
//#include <string>
#include"stdio.h"
#include"string.h"

int main()
{
	//==========二维数组=============================/**/
	/*int a[][3] =
	{
		{1,1,1},
		{0,0,0},
		{5,5,5}
	};
	printf("%d %d\n",a[1][1],a[0][0]);*/
	/*==============字符数组(高级helloworld)============*/
	//char c[] = {'H','e','l','l','o','W','o','r','l','d','!'};
	//char c[] = "HelloWorld!";
	//char myChar[5];
	//char twoChar[3][5];
	//printf("%c\n", c[0]);
	//for (int i = 0; i < 11; i++)
	//{
	//	printf("%c", c[i]);
	//}
	//printf("");
	/*===========字符数组的引用=========================*/
	//int i, j;
	//char a[][5] = { {'B','A','S','I','C'},{'d','B','A','S','E'} };
	//for ( i = 0; i <=1 ; i++)
	//{
	//	for (j = 0; j <= 4; j++)
	//	{
	//		printf("%c", a[i][j]);
	//		
	//	}
	//	printf("\n");
	//}
	/*===========字符串=================================*/
	//char c[] = "C program";
	//char a[] = { "C program" };

	//char myCharArray[] = "C语言";
	//string myStr = "str";
	/*=============字符串helloworld======================*/
	/*char c[] = "Helloworld!";
	printf("%s", c);*/
	/*=============字符串输入输出=========================*/
    //  #pragma warning(disable : 4996)
	//char st[20];
	//printf("put string:\n");
	//scanf("%s", st);//，scanf输入字符串时不能有空格。
	//printf("%s\n", st);
	/*===============改写上面=============================*/
    //#pragma warning(disable : 4996)
//	char st1[6], st2[6], st3[6], st4[6];
//	printf("input string:\n");
//	scanf("%s%s%s%s", st1, st2, st3, st4);
//	printf("%s %s %s %s\n", st1, st2, st3, st4);
	/*===============puts=========================*/
	/*char c[] = "helloworld!";
	puts(c);*/
	//==============puts and gets==================
	/*char st[15];
	printf("input string:\n");
	gets_s(st);
	puts(st);*/
	/*===============stract====================*/
	/*static char st1[30] = "My name is ";
	char st2[10];
	printf("put your name:\n",st2);
	gets_s(st2);
	strcat_s(st1, st2);
	puts(st1);*/




	return 0;
}