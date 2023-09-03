#include<stdio.h>
#include<string.h>

#include<malloc.h>
#pragma warning(disable : 4996)

int main()
{
	char charArray[10];
	char* charp;

	strcpy(charArray, "hello!");

	charp = (char*)malloc(500 * sizeof(char));

	if (charp==NULL)
	{
		printf("没有分配内存");
		
	}
	else
	{
		strcpy(charp, "获得动态内存");
	}

	printf("%s\n", charp);
	printf("%s\n",charArray);
	
	charp = (char*)realloc(charp,200*sizeof(char));

	if (charp==NULL)
	{
		printf("分配内存失败");
	}
	else
	{
		strcat(charp, "分配内存成功");
	}
	printf("%s\n",charp);

	free(charp);

	return 0;
}