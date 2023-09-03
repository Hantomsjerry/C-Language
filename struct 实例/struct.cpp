#include<stdio.h>
#include<string.h>

struct Student
{
	int num;
	char name[20];
	char sex;
	float score;
	int age;
	char adress[20];

};

void PrintStruct(struct Student* pstudent)
{
	printf("%d\n", pstudent->age);
	printf("name:%s",pstudent->name);
}
int main()
{

	/*struct Student student;
	student.num = 1;
	student.age = 19;
	student.score = 96.1;
	student.sex = 'M';
	strcpy_s(student.name, "李四");
	strcpy_s(student.adress, "陕西");

	printf("num=%d\n", student.num);
	printf("name:%s\n", student.name);
	printf("sdress:%s\n", student.adress);*/

	//===============结构体指针实例==========================
	/*struct Student stu;
	struct Student* pstudent = &stu;

	pstudent->num = 1;
	pstudent->age = 19;
	strcpy_s(pstudent->name,"王五");

	printf("%d\n",pstudent->num);
	printf("%s",pstudent->name);*/

	//=================结构体指针形参=========================
	struct Student stu;
	stu.age = 19;
	strcpy_s(stu.name, "i love you");

	PrintStruct(&stu);



	return 0;
}