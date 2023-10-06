
#include <stdio.h> 
extern float PI;//extern 用来声明外部符合，当然也可以省略；最好加上
//extern int Count; //报错，因为用static修饰
//int Add();
//extern int Sum(int, int);
//int main() 
//{
//
//	//printf("%f", PI);
//
//	/*for (int i = 0; i < 3; i++)
//	{
//		Add();
//	}*/
//
//	//printf("%d", Count); //报错
//	
//	int s = Sum(1, 2);
//	return 0;
//}
//
//int Add()
//{
//	static int c = 0;//使用static声明局部变量时，改变了存储方式！使其放到静态存储区
//	printf("%d\n", c);
//	c++;
//
//	return c;
//}

struct student
{
	char Name[30];
	int Age;
	float Score;


};
typedef struct student Student;

int main() {

	struct  student s1 = {"hpy",100,98.7};

	Student s2 = s1;

	Student* p1 = &s1;
	printf("%s\n", s1.Name);
	printf("%s\n", s2.Name);
	printf("%s\n", p1->Name);




	return 0;
}