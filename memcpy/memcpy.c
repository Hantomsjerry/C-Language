#include<stdio.h>  
#include<string.h>

//============memcpy=======================
int main01()
{
	const char str[50] = "WWW.baidu.com";
	char cDest[50];

	//memcpy(cDest, str, strlen(str)+1);//一定要+1，字符串最后是\0

	//memcpy(cDest, str + 4, 5);
	//cDest[5] = '\0';//不加\0,就不会结束

	memcpy(cDest, str + 4, 10);

	printf("cDest=%s\n", cDest);

	return 0;
}
//=============memmove===================
int main02()
{
	const char dest[] = "oldstring";
	const char src[] = "newstrong";
	printf("dest=%s\tsrc=%s\n",dest,src);

	memmove(dest, src, 2);

	printf("dest=%s\tsrc=%s\n", dest, src);

	return 0;
}
//=============memset======================
#pragma warning(disable:4996)
int main()
{
	char str[50];

	strcpy(str, "hello world");

	puts(str);

	memset(str, 66, 5);//中间是ASII码；

	puts(str);

	return 0;
}