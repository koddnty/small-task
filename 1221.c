#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>


/*水仙花数-----------------------------------*/
//int main() {
//	for (int i = 100; i <= 999; i++) {
//		int a = 0;
//		int aa = 0;
//		int b = 0;
//		int c = 0;
//		a = i / 100;//百位数
//		aa = i % 100;
//		b = aa / 10;//十分位
//		c = i % 10;//个位
//		int total = (a * a * a) + (b * b * b) + (c * c * c);
//		if (total == i) {
//			printf("%d\n", i);
//		}
//	}
//}

/*a+aa+aaa... 的和---------------------------*/
//int main() {
//	int a = 0;
//	int b = 0;
//	int number = a;
//	int sum = 0;
//	scanf("%d %d", &a,&b);
//	for (int i = 0; i < b; i++) {
//		//number = a;
//		//for (int i_2 = i ; i_2 > 0; i_2--){
//		number = a + (number * 10/*pow(10, i_2)*/);
//
//
//		sum = number + sum;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

/*兔子数列-----------------------------------*/
//int main() {
//	int n = 0;
//	int a1 = 1;
//	int a2 = 1;
//	int a3 = 1;
//	scanf("%d", &n);
//	for (int i = 3; i <= n; i++) {
//		a3 = a1 + a2;
//		a1 = a2;
//		a2 = a3;
//		printf("第(%d)个月的兔子数为：(%d)\n", n, a3);
//	}
//
//	return 0;
//}

/*n的阶乘------------------------------------*/
//int main() {
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	if (n >= 0) {
//		for (int i = n; i >=1; i--)
//		{
//			sum = sum * i;
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}

/*1到n的阶乘的和-----------------------------*/
//int main() {
//	int n = 0;
//	int num = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 1 ; i <= n; i++) 
//	{
//		num = num * i;
//		sum = num + sum;
//	}
//	printf("%d", sum);
//	return 0;
//}

/*查找数据-----------------------------------*/
/*001*/
//int main() {
//	int num;
//	scanf("%d", &num);
//	int arr[] = { 1, 3 , 5 , 7 , 9 , 11 };
//	int n = 5 / 2;
//	for (; ;) {
//		if (arr[n] == num)
//		{
//			printf("该数字的序号为%d\n", n);
//			break;
//		}
//		else if (arr[n] > num )
//		{
//			n = n / 2;
//			continue;
//		}
//		else if (arr[5] == num)
//		{
//			printf("该数字的序号为%d\n", 5);
//			break;
//		}
//		else
//		{
//			n = (n + 5) / 2;
//		}
//	}
//	return 0;
//}
/*002*///最终版：）
//int main() {
//	int n;
//	scanf("%d", &n);
//	int ppt[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
//	int left = 0;
//	int right = 9;
//	int mid = (left + right) / 2;
//	while (1)
//	{
//		if (ppt[mid] == n)
//		{
//			printf("%d\n", mid);
//			break;
//		}
//		else if (ppt[mid] > n)
//		{
//			right = mid - 1;
//			mid = (left + right) / 2;
//		}
//		else if (ppt[mid] <  n)
//		{
//			left = mid + 1;
//			mid = (left + right) / 2;
//		}
//	}
//	return 0;
//}
/*003*///补充：利用函数实现
//int lookup (int arr[], int num, int arr_length)
//{
//	int left = 0;
//	
//	int right = arr_length;
//	while (1)
//	{
//		int serial = ((left + right) / 2);
//		if (arr[serial] == num)
//		{
//			return serial;
//		}
//		else if (arr[serial] > num)
//		{
//			right = serial - 1;
//		}
//		else if (arr[serial] < num)
//		{
//			left = serial + 1;
//		}
//		else
//		{
//			return -1;
//		}
//	}
//}//(数组，查找数据 ， 数组长度)
//
//int main()
//{
//	int arr[] = { 2,4,5,8,9,23,44,67,89,92,95,98,99,102 };
//	int num;
//	printf("输入你要查找的数字:\n");
//	scanf("%d", &num);
//	int arr_length = sizeof(arr) / sizeof(arr[0]);
//	int n = lookup(arr , num, arr_length);
//	printf("该数字的序号为%d\n", n);
//	return 0;
//}

/*多个字符从两端到中间-----------------------*/ 
//int main() {
//	char arr[] = "helloworlde";
//	char arr2[] = "##############################";
//	int left = 0;
//	int right = strlen(arr) - 1;
//	for(; left <= right; left++, right--) 
//	{
//		arr2[left] = arr[left];
//		arr2[right] = arr[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	return 0;
//}

/*猜数字游戏---------------------------------*/
/*001为学习尝试*/
//int main() {
//	int num = 35;
//	int num_input;
//	for (int i = 1;;i++)
//	{
//		if (i == 1)
//		{
//			printf("猜猜看这个数字（大于0，小于l00）是什么: )\n");
//		}
//		else 
//		{
//			printf("再猜一次吧:p\n");
//		}
//		scanf("%d", &num_input);
//		if (num_input == num)
//		{
//			printf("猜对了喔，你真棒！\n");
//			printf("你一共猜了%d次\n", i);
//			break;
//		}
//		else if (num_input < num )
//		{
//			printf("猜小了啊，笨蛋\n");
//		}
//		else
//		{
//			printf("猜大了啊，笨蛋\n");
//		}
//	}
//	return 0;
//}
/*0002学后实践版*/
/*新：获得随机数*/
//void game()
//{
//	int rand_num = (rand() % 100);//获取随机值0-100
//	int input = 0;
//	for (int i = 1; ; i++)
//	{	
//		printf("输入你猜的数字:\n");
//		scanf("%d", &input);//用户输入
//		if (input > rand_num)
//		{
//			printf("太大了，再试一次吧\n");
//		}		
//		else if (input == rand_num)
//		{
//			printf("刚刚好，你一共试了%d次\n",i);
//			break;	
//		}		
//		else if (input < rand_num)
//		{
//			printf("太小了，再试一次吧\n");
//		}
//		else
//		{
//			printf("你打的什么玩意？\n");
//		}
//		//判断
//	}
//}
//
//void menu()
//{
//	printf("|+====================================+|\n");
//	printf("|+============猜数字游戏==============+|\n");
//	printf("|+====================================+|\n");
//	printf("|+============ 1. play ===============+|\n");
//	printf("|+============ 0. exit ===============+|\n");
//	printf("|+====================================+|\n");
//}
//
//int main() {
//	srand((unsigned int)time(NULL));//获取时间戳并得到随机数
//	menu();
//	int userinput = 0;
//	do {
//		scanf("%d", &userinput);
//		switch (userinput) 
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				break;
//			default:
//				break;
//		}
//	} while ( userinput !=0 || userinput != 1 );
//	return 0;
//}

/*打印1到300的素数---------------------------*/
/*001*/
//int prime(int x)
//{
//	for (int i = 2; i < sqrt(x);i++ )
//	{
//		if ((x % i) == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	printf("打印1到3000的素数\n");
//	for (int i = 1; i <= 30000; i += 2)
//	{
//		int num = prime(i);
//		if (num)
//		{
//			printf("%d\t", i);
//		}
//	}
//	return 0;
//}
/*002差劲，函数功能不独立单一！*/
//void prime(int x, int y)
//{
//	if (x % 2)//x 为奇数
//	{
//		for (; x <= y; x += 2)//穷举所有的数
//	{
//		for (int i = 2; i < x; i++)//判断是否为素数
//		{
//			if ((x % i) == 0)
//			{
//				break;
//			}
//			else
//			{
//				if ((i + 1) == x /*&& i != 3*/)
//				{
//					printf("%d\t", x);
//				}
//					
//			}
//
//		}
//	}
//	}
//	else//x 为偶数
//	{
//		x++;
//		for (; x <= y; x += 2)//穷举所有的数
//		{
//			for (int i = 2; i < x; i++)//判断是否为素数
//			{
//				if ((x % i) == 0)
//				{
//					break;
//				}
//				else
//				{
//					if ((i + 1) == x /*&& i != 3*/)
//					{
//						printf("%d\t", x);
//					}
//
//				}
//
//			}
//		}
//	}
//}
////prime ((int)范围左端，(int)范围右端) 列举范围内的所有素数
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("打印x到y的素数\n");
//	printf("输入x、y\n");
//	scanf("%d", &x);
//	scanf("%d", &y);
//	prime(x, y);
//	return 0;
//}

/*自增函数-----------------------------------*/
//void auto_add(int* i, int n)
//{
//	int sum = *i + n;
//	*i = sum;
//}
//
//int main()
//{
//	int i = 1;
//	int n = 10;
//	auto_add(&i, n);
//	printf("%d\n", i);
//	return 0;
//}
//#include "add.h"
//
//#pragma comment (lib , "test.lib")
//int main()
//{
//	int add(int x, int y);
//	int c = add(10, 23);
//	printf("%d\n",c);
//	return 0;
//}

/*打印数字每一位*/
//int main()
//{
//	int nu1m = 0;
//	scanf("%d", &nu1m);/*
//	char arr[] = { nu1m };
//	int n = strlen(arr);
//	printf("%d\n", n);*/
//	for (int i = 1; i <= 100; i++)
//	{
//		int m = (nu1m % 10);
//		nu1m = (nu1m / 10);
//		printf("%d\t", m);
//	}
//	return 0;
//}