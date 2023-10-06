
#include <stdio.h>

//导入其它文件的变量
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
//	//a = 10;//不能修改,因为a 是常变量
//
//	//int Nums[a] = {0};//错误，在声明数组时，长度必须是常量
//	//int Nums2[MAX] = { 0 };//正常，#define MAX 100 ，MAX是常量
//
//	//int Nums3[N1] = { 0 };//正常，枚举也是常量
//
//	printf("%d", MAX);
//
//
//	return 0;
//}

//字符串
//字符串的结束标志是 \0
#include <string.h>
int main()
{
	char str1[]  = "abc";
	char str2[] = {'a','b','c'};

	printf("%s\n", str1);//输出 abc
	printf("%s\n", str2);//输出 乱码，因为str2没有\0

	//strlen 字符串长度测量函数，它是以\0 标志作为字符串结束的
	
	printf("%d\n", strlen(str1));//输出 3
	printf("%d\n", strlen(str2));//输出 不确定，因为没有\0

	int nums[10] = { 1 };
	return 0;
}