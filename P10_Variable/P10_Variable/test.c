
#include <stdio.h>

//���������ļ��ı���
extern int g_val;
//int main()
//{
//	printf("%d", g_val);
//	return 0;
//}

#define MAX 100

enum  E_NUM
{
	N1=10,
	N2,
	N3
};

//int main()
//{
//	const int a = 0;
//	//a = 10;//�����޸�,��Ϊa �ǳ�����
//
//	//int Nums[a] = {0};//��������������ʱ�����ȱ����ǳ���
//	//int Nums2[MAX] = { 0 };//������#define MAX 100 ��MAX�ǳ���
//
//	//int Nums3[N1] = { 0 };//������ö��Ҳ�ǳ���
//
//	printf("%d", MAX);
//
//
//	return 0;
//}

//�ַ���
//�ַ����Ľ�����־�� \0
#include <string.h>
int main()
{
	char str1[]  = "abc";
	char str2[] = {'a','b','c'};

	printf("%s\n", str1);//��� abc
	printf("%s\n", str2);//��� ���룬��Ϊstr2û��\0

	//strlen �ַ������Ȳ���������������\0 ��־��Ϊ�ַ���������
	
	printf("%d\n", strlen(str1));//��� 3
	printf("%d\n", strlen(str2));//��� ��ȷ������Ϊû��\0

	int nums[10] = { 1 };
	return 0;
}