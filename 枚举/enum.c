#include<stdio.h>

enum Day
{
	Monday = 1,
	Tuesday,
	Wedensday,
	Thuursday,
	Friday,
	Saturday,
	Sunday,
};

enum Year
{
	Spring,//��һ����Ĭ��Ϊ�㡣
	Summer=2,
	Autumn,
	Winter,
};

int main()
{
	enum Day day;
	enum Year year;
	day = Sunday;

	printf("%d\n",day);
	printf("%d\n", Winter);
	printf("%d", Spring);

	return 0;
}