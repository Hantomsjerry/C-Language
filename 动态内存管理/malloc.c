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
		printf("û�з����ڴ�");
		
	}
	else
	{
		strcpy(charp, "��ö�̬�ڴ�");
	}

	printf("%s\n", charp);
	printf("%s\n",charArray);
	
	charp = (char*)realloc(charp,200*sizeof(char));

	if (charp==NULL)
	{
		printf("�����ڴ�ʧ��");
	}
	else
	{
		strcat(charp, "�����ڴ�ɹ�");
	}
	printf("%s\n",charp);

	free(charp);

	return 0;
}