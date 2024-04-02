#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
#include <string.h>
#include <math.h>
//void my_sort(int x)
//{
//	int sum = 0;
//	int n = x;
//	if (x < 0)
//		printf("false");
//	else
//	{
//		
//		while (n != 0)
//		{
//			sum = sum * 10 + n % 10;
//			n = n / 10;
//		}
//	}
//	if (sum == x)
//		printf("true  %d是回文数字",x);
//	else
//		printf("false  %d不是回文数字",x);
//}
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	my_sort(a);
//	return 0;
////}
//int main()
//{
//	int k = 2, i = 2, m; 
//	m = (k += i *= k++); 
//		printf("y = % d, % d\n", m, i);
//	return 0;
//}
//int main()
//{
//	char arr[3] = { 0 };
//	int sum=0;
//	int ret;
//	scanf("%s", arr);
//	ret = strlen(arr);
//
//	for (; ret >= 0; ret--)
//	{
//		int flag=0;
//		switch (arr[ret])
//		{
//		case 'I':flag = 1; break;
//		case 'V':flag = 5; break;
//		case 'X':flag = 10; break;
//		case 'L':flag = 50; break;
//		case 'C':flag = 100; break;
//		case 'D':flag = 500; break;
//		case 'M':flag = 1000; break;
//		}
//		sum += flag;
//	}
//	printf("sum=%d\n", sum);
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	for (; i < 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//void game()
//{
//	int flag = rand() % 100 + 1;
//	int guess;
//	printf("******猜字游戏*******\n");
//	printf("*请输入一个0-100数字*\n");
//		while (1)
//		{
//			scanf("%d", &guess);
//			if (guess>flag)
//				printf("猜大了！\n");
//			else if (guess<flag)
//				printf("猜小了！\n");
//			else
//			{
//				printf("恭喜你！猜对了！\n");
//				break;
//			}
//		}
//
//
//
//}
//void menu()
//{
//	printf("******猜字游戏*******\n");
//	printf("**1.play 0.exti******\n");
//	printf("*********************\n");
//
//
//}
//int main()
//{
//	int input; 
//	int flag = 0;
//	srand((unsigned int)time(NULL));
//		do
//		{
//			menu();
//			scanf("%d", &input);
//			switch (input)
//			{
//			case 1:
//				game();
//				break;
//			case 0:
//				break;
//			default:
//				printf("输入错误，请重新输入数值。\n");
//				break;
//			}
//		} while (input);
//	return 0;
//}
//int my_strlen(char* p)
//{
//	if (*p != '\0')
//		return 1 + my_strlen(1 + p);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdefghijklmnopqrstuvwsyz";
//	int ret = my_strlen(arr);
//	int a = strlen(arr);
//	printf("%d %d", ret, a);
//	return 0;
//}
//void num_split(int x)
//{
//	if (x > 9)
//	{
//		num_split(x / 10);
//		printf("%d  ", x % 10);
//	}
//	else
//		printf("%d  ",x);
//}
//int main()
//{
//	int flag = 56204;
//	num_split(flag);
//	return 0;
//}
//int Face(int x)
//{
//	int ret = 1;
//	if (x <= 1)
//		return 1;
//	else
//		return x * Face(x - 1);
//}
//int main()
//{
//	int n,sum;
//	scanf("%d", &n);
//	sum = Face(n);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib1(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n,ret,ret1;
//	scanf("%d", &n);
//	ret=Fib(n);
//	ret1 = Fib1(n);
//	printf("%d  %d", ret1,ret);
//
//	return 0;
//}
//int binary_count(int x)
//{
//	int i = 0;
//	int count=0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((x >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int a, b,i,num1,num2;
//	int ret, flag;
//	scanf("%d%d%d%d", &a, &b,&ret,&flag);
//	printf("before:ret=%d,flag=%d\n", ret, flag);
//	ret = flag ^ ret;
//	flag = ret ^ flag;
//	ret = flag ^ ret;
//	num1 = binary_count(a);
//	num2 = binary_count(b);
//	printf("a的二进制位1的个数为：%d\n", num1);
//	printf("b的二进制位1的个数为：%d\n", num2);
//	printf("after:ret=%d,flag=%d\n", ret, flag);
//	return 0;
//}
//int main()
//{
//	int i, sum;
//	sum = 1;
//	
//	for (i = 1; i <= 9; i++)
//	{
//		sum=(sum +1)* 2 ;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int i,n,sum,ret;
//	sum = 0;
//	scanf("%d", &n);
//	for (i = 1,ret=1; i <= n; i++)
//	{
//		ret *= i;
//		printf("%d!=%d\n", i, ret);
//		sum += ret;
//	}
//	printf("1!+2!+...+%d!=%d\n", n,sum);
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	struct Stu s1 = { "CARROT",18,"202311240145" };
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s", s1.id);
//
//	return 0;
//}
//void initial(int arr[], int x)
//{
//	int i;
//	for (i = 0; i < x; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void reverse(int arr[], int x)
//{
//	int  right, left;
//	for (left=0,right=x-1; left<right;left++,right--)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//	}
//}
//void print(int arr[], int x)
//{
//	int i;
//	for (i = 0; i < x; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void arr_swap(int arr[], int arr0[],int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr0[i];
//		arr0[i] = arr[i];
//		arr[i] = tmp;
//	}
//}
//int main()
//{
//	int arr[] = { 1,3,5,7,9};
//	int arr0[] = { 2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	arr_swap(arr, arr0,sz);
//	reverse(arr,sz);
//	print(arr, sz);
//	initial(arr, sz);
//	return 0;
//}
//int main()
//{
//	int m, n,count;
//	count = 0;
//	scanf("%d%d", &m, &n);
//	int ret = m ^ n;
//	/*for (i = 0,count=0; i < 32; i++)
//	{
//		if (((m>>i) & 1) == 1)
//			count++;
//		
//	}
//	printf("%d\n", count);*/
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	printf("%d", count);
//}
//int main()
//{
//	int n;
//	int count = 0;
//	scanf("%d", &n);
//	while(n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
////}
//void print(int m)
//{
//	int i;
//	printf("%d的二进制偶数位的情况为： ",m);
//	for (i = 0; i < 32;i+=2)
//	{
//		if ((m >> i) & 1 == 1)
//			printf("1 ");
//		else
//			printf("0 ");
//	}
//	printf("\n");
//	printf("%d的二进制奇数位的情况为： ",m);
//	for (i = 1; i < 32; i += 2)
//	{
//		if ((m >> i) & 1 == 1)
//			printf("1 ");
//		else
//			printf("0 ");
//	}
//}
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}
//int factorial(int n)
//{
//	if (n > 1)
//		return n * factorial(n - 1);
//	else 
//		return 1;
//
//}
////void number_split(int x)
////{
////	if (x > 9)
////	{
////		number_split(x / 10);
////		printf("%d ", x % 10);
////	}
////	else
////		printf("%d ", x);
////}
//int main()
//{
//	int ret,n;
//	scanf("%d", &n);
//	ret = factorial(n);
//	//number_split(n);
//	//printf("\n");
//	printf("%d\n", ret);
//
//	return 0;
//}
//int my_strlen(char arr[],int i)
//{
//	//int count = 0;
//	/*while (arr[i] != '\0')
//	{
//		count++;
//		i++;
//	}*/
//	if (arr[i] != '\0')
//		return 1 + my_strlen(arr, i + 1);
//	else
//		return 0;
//
//	//return count;
//}
//void reverse_str(char arr[], int sz, int i)
//{
//	if (i < sz)
//	{
//		char ret = arr[i];
//		arr[i] = arr[sz];
//		arr[sz] = ret;
//		reverse_str(arr, sz - 1, i + 1);
//
//	}
//}
//int main()
//{
//	char arr[] = "fedcba";
//	int i=0;
//	int sz = my_strlen(arr,i);
//	printf("%d\n", sz);
//	reverse_str(arr, sz-1,i);
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
//int spilt_sum(int n)
//{
//	if (n > 9)
//		return n % 10 + spilt_sum(n / 10);
//	else
//		return n;
//}
//int Pow(int x,int k)
//{
//	if (k)
//		return x * Pow(x, k - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n,k;
//	scanf("%d%d", &n,&k);
//	int flag = Pow(n,k);
//	int ret = spilt_sum(n);
//	printf("ret=%d flag=%d", ret,flag);
//	return 0;
//}
//int count(int i)
//{
//	if (i)
//		return 1 + count(i / 10);
//	else
//		return 0;
//}
//int my_sort(i)
//{
//	int a = i;
//	int sum = 0;
//	int n = count(i);
//	//printf("%d ", n);
//	while (i)
//	{
//		sum += (int)pow(i % 10, n);
//		i=i / 10;
//	}
//	if (sum == a)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i;
//	for (i = 1; i <= 200; i++)
//	{
//		if (my_sort(i) == 1)
//			printf("%d ",i);
//	}
//	return 0;
//}