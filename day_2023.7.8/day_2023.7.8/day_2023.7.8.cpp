#include<stdio.h>
#include<math.h>

int main(void)
{
	//============���ú��׹�ʽ�������������==============
	/*float a;
	float b;
	float c;
	float p;
	float aera;
    printf("���������������߳�:");
	
	scanf_s("%f,%f,%f",&a,&b,&c);
	p = 0.5 * (a+b+c);
	aera = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("a=%f,b=%f,c=%f,p=%f\n",a,b,c,p);
	
	printf("aera=%f",aera);*/
	
	//===��������һ����д��ĸ����Сд����Լ�����ASII��===
	/*char c1;
	char c2;
	c1 = getchar();
	
	printf("��д��%c,ASII�룺%d\n",c1,c1);
	c2 = c1 + 32;
	printf("Сд��%c,ASII�룺%d\n",c2,c2);*/

	//=======һԪ���η��������delta�����������£�=======
	/*float a;
	float b;
	float c;

	float x1;
	float x2;

	float p;
	float q;
	float delta;

	printf("����������a,b,c:");//��ʡ��
	scanf_s("%f,%f,%f",&a,&b,&c);
	delta = b * b - 4 * a * c;
	p = -b / (a*2);
	q = sqrt(delta) / (2*a);
	x1 = p + q;
	x2 = p - q;

	printf("x1=%f\n",x1);
	printf("x2=%f\n",x2);*/
   //==============ѭ������ʵ��====================================================
   
	//===========��if����goto��乹��ѭ��=================
	/*/int i = 2;
	int sum = 1;

loop:if (i<=100)
{
	sum = sum + i;
	i++;
	goto loop;
}
printf("sum=%d\ni=%d\n",sum,i);//i�ص���101    */
	//===========for���====================================
	/*int sum=0;
	for (int i = 0; i <=100; i++)
	{
		sum = sum + i;
	}
	printf("sum=%d\n",sum);*/
	//==============do while���============================
	/*int i = 0;
    int sum = 0;

	do
	{
		sum = sum + i;
		i++;
	} while (i <= 100);

	printf("%d\n",sum);*/

	//==========while���===================================
	/*int i = 0;
	int sum = 0;

	while (i<=100)
	{
		sum = sum + i;
		i++;
	}
	printf("%d\n",sum);*/
	//===========break���==================================
    /*  int a = 10;
	while (a < 15)
	{
		printf("a��ֵ:%d\n", a);
		a++;

		if (a > 12)
		{
			break;
		}

	}           */
	//==========continue���================================
    /*    int n;
	for (n = 10; n <= 20; n++)
	{
		if (n % 3 == 0)
		{
			continue;
		}
		printf("n=%d\n",n);
	}*/
	//==========ĳ��ǿ���Ҳ�����============================================
    /*int i = 1;
	int a = (++i) + (++i);
	printf("a=%d\n",a);*/


	return 0;
}