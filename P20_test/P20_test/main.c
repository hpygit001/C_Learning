
#include <stdio.h> 
extern float PI;//extern ���������ⲿ���ϣ���ȻҲ����ʡ�ԣ���ü���
//extern int Count; //������Ϊ��static����
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
//	//printf("%d", Count); //����
//	
//	int s = Sum(1, 2);
//	return 0;
//}
//
//int Add()
//{
//	static int c = 0;//ʹ��static�����ֲ�����ʱ���ı��˴洢��ʽ��ʹ��ŵ���̬�洢��
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