#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>


/*ˮ�ɻ���-----------------------------------*/
//int main() {
//	for (int i = 100; i <= 999; i++) {
//		int a = 0;
//		int aa = 0;
//		int b = 0;
//		int c = 0;
//		a = i / 100;//��λ��
//		aa = i % 100;
//		b = aa / 10;//ʮ��λ
//		c = i % 10;//��λ
//		int total = (a * a * a) + (b * b * b) + (c * c * c);
//		if (total == i) {
//			printf("%d\n", i);
//		}
//	}
//}

/*a+aa+aaa... �ĺ�---------------------------*/
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

/*��������-----------------------------------*/
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
//		printf("��(%d)���µ�������Ϊ��(%d)\n", n, a3);
//	}
//
//	return 0;
//}

/*n�Ľ׳�------------------------------------*/
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

/*1��n�Ľ׳˵ĺ�-----------------------------*/
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

/*��������-----------------------------------*/
/*001*/
//int main() {
//	int num;
//	scanf("%d", &num);
//	int arr[] = { 1, 3 , 5 , 7 , 9 , 11 };
//	int n = 5 / 2;
//	for (; ;) {
//		if (arr[n] == num)
//		{
//			printf("�����ֵ����Ϊ%d\n", n);
//			break;
//		}
//		else if (arr[n] > num )
//		{
//			n = n / 2;
//			continue;
//		}
//		else if (arr[5] == num)
//		{
//			printf("�����ֵ����Ϊ%d\n", 5);
//			break;
//		}
//		else
//		{
//			n = (n + 5) / 2;
//		}
//	}
//	return 0;
//}
/*002*///���հ棺��
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
/*003*///���䣺���ú���ʵ��
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
//}//(���飬�������� �� ���鳤��)
//
//int main()
//{
//	int arr[] = { 2,4,5,8,9,23,44,67,89,92,95,98,99,102 };
//	int num;
//	printf("������Ҫ���ҵ�����:\n");
//	scanf("%d", &num);
//	int arr_length = sizeof(arr) / sizeof(arr[0]);
//	int n = lookup(arr , num, arr_length);
//	printf("�����ֵ����Ϊ%d\n", n);
//	return 0;
//}

/*����ַ������˵��м�-----------------------*/ 
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

/*��������Ϸ---------------------------------*/
/*001Ϊѧϰ����*/
//int main() {
//	int num = 35;
//	int num_input;
//	for (int i = 1;;i++)
//	{
//		if (i == 1)
//		{
//			printf("�²¿�������֣�����0��С��l00����ʲô: )\n");
//		}
//		else 
//		{
//			printf("�ٲ�һ�ΰ�:p\n");
//		}
//		scanf("%d", &num_input);
//		if (num_input == num)
//		{
//			printf("�¶���ร��������\n");
//			printf("��һ������%d��\n", i);
//			break;
//		}
//		else if (num_input < num )
//		{
//			printf("��С�˰�������\n");
//		}
//		else
//		{
//			printf("�´��˰�������\n");
//		}
//	}
//	return 0;
//}
/*0002ѧ��ʵ����*/
/*�£���������*/
//void game()
//{
//	int rand_num = (rand() % 100);//��ȡ���ֵ0-100
//	int input = 0;
//	for (int i = 1; ; i++)
//	{	
//		printf("������µ�����:\n");
//		scanf("%d", &input);//�û�����
//		if (input > rand_num)
//		{
//			printf("̫���ˣ�����һ�ΰ�\n");
//		}		
//		else if (input == rand_num)
//		{
//			printf("�ոպã���һ������%d��\n",i);
//			break;	
//		}		
//		else if (input < rand_num)
//		{
//			printf("̫С�ˣ�����һ�ΰ�\n");
//		}
//		else
//		{
//			printf("����ʲô���⣿\n");
//		}
//		//�ж�
//	}
//}
//
//void menu()
//{
//	printf("|+====================================+|\n");
//	printf("|+============��������Ϸ==============+|\n");
//	printf("|+====================================+|\n");
//	printf("|+============ 1. play ===============+|\n");
//	printf("|+============ 0. exit ===============+|\n");
//	printf("|+====================================+|\n");
//}
//
//int main() {
//	srand((unsigned int)time(NULL));//��ȡʱ������õ������
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

/*��ӡ1��300������---------------------------*/
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
//	printf("��ӡ1��3000������\n");
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
/*002����������ܲ�������һ��*/
//void prime(int x, int y)
//{
//	if (x % 2)//x Ϊ����
//	{
//		for (; x <= y; x += 2)//������е���
//	{
//		for (int i = 2; i < x; i++)//�ж��Ƿ�Ϊ����
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
//	else//x Ϊż��
//	{
//		x++;
//		for (; x <= y; x += 2)//������е���
//		{
//			for (int i = 2; i < x; i++)//�ж��Ƿ�Ϊ����
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
////prime ((int)��Χ��ˣ�(int)��Χ�Ҷ�) �оٷ�Χ�ڵ���������
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("��ӡx��y������\n");
//	printf("����x��y\n");
//	scanf("%d", &x);
//	scanf("%d", &y);
//	prime(x, y);
//	return 0;
//}

/*��������-----------------------------------*/
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

/*��ӡ����ÿһλ*/
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