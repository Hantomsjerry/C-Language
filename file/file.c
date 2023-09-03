#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

struct Student
{
	int num;
	char name[100];
	int age;
	float sorce;
};

int main()
{
	/*=============基础======================*/
	/*FILE* filep;

	filep = fopen("test.txt","w+");

	fprintf(filep, "世界\n");
	fputs("这是一个测试文件。",filep);

	fclose(filep);*/
	/*===========fgets========================*/
	/*FILE* fp ;
	char charBuffer[200];

	fp=fopen("test.txt","r");

	fscanf(fp, "%s", charBuffer);
	printf("1:%s\n",charBuffer);

	fgets(charBuffer,200,fp);
	printf("2:%s\n",charBuffer);

	fgets(charBuffer, 200, fp);
	printf("3:%s\n",charBuffer);

	fgets(charBuffer, 200, fp);
	printf("4:%s\n", charBuffer);*/
	/*==============fgetc=====================*/
	/*FILE* fp;
	char MyChar;
	fp = fopen("test.txt", "rt");

	if (fp==NULL)
	{
		puts("文件读取失败");
		exit(0);
	}
	while ((MyChar=fgetc(fp))!=EOF)//逐个字符进行读取直到结尾
	{
		putchar(MyChar);
	}

	fclose(fp);*/
	/*===========ferror=======================*/
	/*FILE* fp;
	char ch;
	fp = fopen("test.txt", "rt");

	if (fp==NULL)
	{
		puts("文件读取失败");
		exit(0);
	}
	while ((ch=fgetc(fp))!=EOF)
	{
		putchar(ch);
	}
	printf("\n");

	if (ferror(fp))
	{
		puts("读取错误");
	}
	else
	{
		puts("success");
	}

	fclose(fp);*/
	/*===============fgets=========================*/
	/*FILE* fp;

	char str[100];
	fp = fopen("test.txt", "rt");

	if (fp == NULL)
	{
		puts("读取失败");
		exit(0);
	}
	while (fgets(str, 100, fp) != NULL)
	{
		printf("%s", str);
	}

	fclose(fp);*/
	/*=======================================*/
	/*FILE* fp;

	char str[200] = { 0 };
	char temp[100];

	fp = fopen("test.txt", "at+");

	if (fp==NULL)
	{
		puts("读取失败");
		exit(0);
	}

	printf("请输入一个string:");
	gets_s(temp,100);

	strcat(str, temp);

	fputs(str, fp);//运行后看看test.txt;

	fclose(fp);*/
	/*==============读与写的函数==============*/
	/*int a[5];
	int b[5];
	FILE* fp;
	int size = sizeof(int);
	fp = fopen("test.txt", "rb+");

	if (fp == NULL)
	{
		puts("读取失败");
		exit(0);
	}
	for (size_t i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}

	fwrite(a, size, 5, fp);
	rewind(fp);
	fread(b, size, 5, fp);

	for (size_t i = 0; i < 5; i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\n");

	fclose(fp);*/
	/*==============fseek====================*/
	FILE* fp;
	struct Student boys[3];
	struct Student boy;
	struct Student* pBoy;
	pBoy = boys;

	fp = fopen("test.txt", "wb+");

	if (fp == NULL)
	{
		puts("不能打开该文件");
		getch();
		exit(1);
	}
	
	printf("请输入学生的相关数据：\n");

	for (size_t i = 0; i < 3; i++)
	{
		scanf("%s %d %d %f", pBoy->name, &pBoy->num, &pBoy->age, &pBoy->sorce);
		pBoy++;
	}
	fwrite(boys, sizeof(struct Student), 3, fp);
	fseek(fp, sizeof(struct Student), SEEK_SET);
	fread(&boy, sizeof(struct Student), 2, fp);

	printf("%s %d %d %.1f", boy.name, boy.num, boy.age, boy.sorce);

	/*hanmeng 001 20 100
      wumingyan 002 19 100
      li 003 19 99*/

	return 0;
}