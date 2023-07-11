#include<stdio.h>
#include<math.h>

int main(void)
{
	//============利用海伦公式计算三角形面积==============
	/*float a;
	float b;
	float c;
	float p;
	float aera;
    printf("请输入程序的三条边长:");
	
	scanf_s("%f,%f,%f",&a,&b,&c);
	p = 0.5 * (a+b+c);
	aera = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("a=%f,b=%f,c=%f,p=%f\n",a,b,c,p);
	
	printf("aera=%f",aera);*/
	
	//===键盘输入一个大写字母改用小写输出以及它的ASII码===
	/*char c1;
	char c2;
	c1 = getchar();
	
	printf("大写：%c,ASII码：%d\n",c1,c1);
	c2 = c1 + 32;
	printf("小写：%c,ASII码：%d\n",c2,c2);*/

	//=======一元二次方程求根（delta大于零的情况下）=======
	/*float a;
	float b;
	float c;

	float x1;
	float x2;

	float p;
	float q;
	float delta;

	printf("请输入程序的a,b,c:");//可省略
	scanf_s("%f,%f,%f",&a,&b,&c);
	delta = b * b - 4 * a * c;
	p = -b / (a*2);
	q = sqrt(delta) / (2*a);
	x1 = p + q;
	x2 = p - q;

	printf("x1=%f\n",x1);
	printf("x2=%f\n",x2);*/
   //==============循环控制实例====================================================
   
	//===========用if语句和goto语句构成循环=================
	/*/int i = 2;
	int sum = 1;

loop:if (i<=100)
{
	sum = sum + i;
	i++;
	goto loop;
}
printf("sum=%d\ni=%d\n",sum,i);//i必等于101    */
	//===========for语句====================================
	/*int sum=0;
	for (int i = 0; i <=100; i++)
	{
		sum = sum + i;
	}
	printf("sum=%d\n",sum);*/
	//==============do while语句============================
	/*int i = 0;
    int sum = 0;

	do
	{
		sum = sum + i;
		i++;
	} while (i <= 100);

	printf("%d\n",sum);*/

	//==========while语句===================================
	/*int i = 0;
	int sum = 0;

	while (i<=100)
	{
		sum = sum + i;
		i++;
	}
	printf("%d\n",sum);*/
	//===========break语句==================================
    /*  int a = 10;
	while (a < 15)
	{
		printf("a的值:%d\n", a);
		a++;

		if (a > 12)
		{
			break;
		}

	}           */
	//==========continue语句================================
    /*    int n;
	for (n = 10; n <= 20; n++)
	{
		if (n % 3 == 0)
		{
			continue;
		}
		printf("n=%d\n",n);
	}*/
	//==========某浩强（我不懂）============================================
    /*int i = 1;
	int a = (++i) + (++i);
	printf("a=%d\n",a);*/


	return 0;
}