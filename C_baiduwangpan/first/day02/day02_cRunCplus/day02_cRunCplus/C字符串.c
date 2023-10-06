#include<stdio.h>




void test_day02()
{

	//不指定长度，没有0结束符,有多少个元素就有多长
	char buff[] = { 'a','b','c' };
	printf("%s\n", buff);//输出乱码

	//指定长度，后面没有赋值得元素，自动补0；例如 int a[100]={0},就可以将数组a全部初始化为0
	char buff1[100]= { 'a','b','c' };
	printf("%s\n", buff1);//输出正确

	//所有元素都为0
	char buff3[100] = { 0 };

	//char buff4[2] = {'1','2','3'};//数组越界

	char buff5[100] = { '1','a','b','0','7' };
	printf("%s\n", buff5);//输出: 1ab07    //注意：'0' 不是0，0才是'\0'
	char buff6[100] = { '1','a','b',0,'7' };
	printf("%s\n", buff6);//输出: 1ab    //注意：字符串以'\0'(0)结束

	//使用字符串初始化，常用；默认添加\0结尾，所以buff8的长度是字符串长度+1
	char buff8[] = "abaiadhai";
}


