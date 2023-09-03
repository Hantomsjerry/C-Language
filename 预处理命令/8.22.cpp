#include<stdio.h>

#define pi 3.14
#define CIRCLE(r,L,S,V) L=2*pi*r ;S=pi*r*r;V=4/3*pi*r*r*r
//#define LETTER 1

/*#define MAX(a,b) (a>b)?a:b
#include <stdio.h>*/
//=========比较大小=======
/*int main()
{
	float x, y, max;
	
	printf("input two num:");
	scanf_s("%f%f",&x,&y);
	
	max = MAX(x, y);
	printf("max is %.3f",max);
	
	return 0;
}*/
/*=======================*/
//#define NUM ok
//int main()
//{
//	struct stu
//	{
//		int num;
//		char* name;
//		char sex;
//		float score;
//	}*ps;
//	ps = (struct stu*)malloc(sizeof(struct stu));
//	ps->num = 102;
//	ps->name = "ZhangPeng";
//	ps->sex = 'M';
//	ps->score = 62.5;
//#ifdef NUM
//	printf("Number=%d\nScore=%f\n",ps->num,ps->score);
//#else
//	printf("Name=%s\nSex=%c\n",ps->name,ps->sex);
//#endif // NUM
//	free(ps);
//
//
//	return 0;
//}
/*=============================================*/
int main()
{
	//==========circle===========
	/*float A, S, V;
	int r =2;
    CIRCLE(2, A, S, V);

	printf("%.2f\t%.2f\t%.2f\t",A,S,V);

	return 0;*/
	//===========选择性编译================
	char str[20] = "C Language";
	char c;

	int i = 0;

	while ((c=str[i])!='\0')
	{
		i++;
#if LETTER
		if (c>='a'&&c<='z')
		{
			c = c - 32;
		}
#else
		if (c>='A'&& c<='Z')
		{
			c = c + 32;
		}
#endif // LETTER
		printf("%c",c);
	}
	printf("\n");
	return 0;
}