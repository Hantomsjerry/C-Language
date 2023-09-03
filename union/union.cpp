#include<stdio.h>

#pragma warning(disable : 4996)

union Data
{
	char c;
	int a;
	float i;
};

struct Person
{
	int num;
	char name[10];
	char sex;
	char job;
	union PersonData
	{
		int class1;
		char position[10];
	}personData;
};

int main()
{
	/*===============*/
	//union Data data1;
	//data1.a = 10;
	//data1.c = 'c';
	//data1.i = 10.32;
	//
	//printf("%d\n", data1.a);
	//printf("%.2f\n",data1.i);
	////printf("%d\n",data1.a);
	/*=================*/
	struct Person person[2];
	for (size_t i = 0; i < 2; i++)
	{
		//================================
		//printf("");
		scanf_s("%d,%s,%c,%c",&person[i].num,person[i].name,&person[i].sex,&person[i].job);
		/*if (person[i].job=='s')
		{
			scanf("%d",&person[i].personData.class1);
		}if (person[i].job=='t')
		{
			scanf("%s", person[i].personData.position);
		}*/
	}
	for (size_t i = 0; i < 2; i++)
	{


		printf("%d %s %c %c", person[i].num, person[i].name, person[i].sex, person[i].job);
		/*if (person[i].job == 's')
		{
			printf("%d %s %c %c %d", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].personData.class1);
		}
		if (person[i].job == 't')
		{
			printf("%d %s %c %c %s", &person[i].num, person[i].name, &person[i].sex, &person[i].job, person[i].personData.position);
		}*/
	}

	return 0;
}