#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int search(int i,int b,int arr[])
//{
//	int left = 0;
//	int right = i - 1;
//	while (left <= right)
//	{  int mid = (left+right)/2;
//	if (b < arr[mid])
//		right = mid - 1;
//	else if (b > arr[mid])
//		left = mid + 1;
//	else
//		return mid;
//		
//		}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 20,21,22,23,24,25,26,27,28,29,30 };
//    int b = 21;
//	int i = sizeof(arr) / sizeof(arr[0]);
//	int a = search(i,b,arr);
//	if (b == arr[a])
//		printf("找到了，下标是：%d\n", a);
//	else
//		printf("找不到");
//
//	return 0;
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\n", n % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d\n", &a);
//	print(a);
//	return 0;
//}
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr+1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "";
//	int b=my_strlen(arr);
//	printf("%d\n", b);
//	return 0;
//}
//int factorial(int x)
//{
//	for(;x>1;)
//		return x * factorial(x - 1);
//	if (x == 0)
//		return 1;
//	else if (x < 0)
//		printf("请输入大于0的整数");
//
//}
//int main()
//{
//	int a = 0;
//	int ret = 0;
//	scanf("%d\n", &a);
//	ret = factorial(a);
//	printf("%d\n", ret);
//	return 0;
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d\n", &a, &b, &c);
//		if (a < b)
//			a = b;
//		else if (c > b)
//			b=c;
//		printf("a=%d,b=%d,c=%d\n", a, b, c);
//	return 0;
////}
//int main()
//{
//	printf("%d\n", sizeof(char));
//	return 0;
//}
//void bubble_sort(int arr[],int sz)
//{
//	int j = 0;
//	for (j = 0; j < sz - 1; j++)
//	{
//		int flag = 1;
//		int i = 0;
//		for (i = 0; i < sz - 1-j; i++)
//		{
//			if (arr[i]>arr[i+1])
//			{
//				int tmp = 0;
//				tmp = arr[i + 1];
//				arr[i+1]=arr[ i];
//				arr[i] = tmp;
//				int flag = 0;
//
//			}
//
//		}
//		if (0 == flag)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {2,5,1,3,11,7,9,8};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = 0;
//	bubble_sort(arr, sz);
//	for (a = 0; a < sz ; a++)
//		printf("%d\n", arr[a]);
//	return 0;
//}
//int common_divisor(int x, int y)
//{
//	int c = x > y ? x : y;
//	int b = x < y ? x : y;
//	if (c % b != 0)
//	{
//		 
//		while (c % b != 0)
//		{
//			int z = c % b;
//			c = b;
//			b = z;
//		}
//		
//		return b;
//	}
//	else
//		return b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d\n", &a, &b);
//	printf("%d\n",common_divisor(a, b));
//
//	return 0;
//}
//int main()
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		int a = 2;
//		while (i % a != 0 && a < i + 1)
//		{
//			a++;
//			if (a == i)
//				printf("%d  ", i);
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 11;
//	printf("A类数是： ");
//	for (i = 11; i <= 20; i++)
//	{
//		int ret = 0;
//		int b = 0;
//		int c = i;
//		while (b <= 5)
//		{
//			if (c & 1 == 1)
//				ret++;
//			b++;
//			c = c >> 1;
//		}
//		if (ret > 2)
//			printf("%d ", i);
//	}
//		printf("B类数是： ");
//			for (i = 11; i <= 20; i++)
//			{
//				int ret = 0;
//				int b = 0;
//				int c = i;
//				while (b <= 5)
//				{
//					if (c & 1 == 1)
//						ret++;
//					b++;
//					c = c >> 1;
//				}
//				if(ret<=2)
//					printf("%d ", i);
//			}
////	return 0;
//void sort(int x, int* count1, int* count2)
//{
//	while (x)
//	{
//		if (x & 1 == 1)
//			(*count1)++;
//		else
//			(*count2)++;
//		x = x >> 1;
//	}
//}
//int main()
//{
//	printf("A类数有： ");
//	for (int i=11; i <= 20; i++)
//	{
//		int count1 = 0;
//		int count2 = 0;
//		sort(i, &count1, &count2);
//		if (count1 >= count2)
//			printf("%d  ",i);
//	}
//	printf("\nB类数有： ");
//	for (int i = 11; i <= 20; i++)
//	{
//		int count1 = 0;
//		int count2 = 0;
//		sort(i, &count1, &count2);
//		if (count1 < count2)
//			printf("%d  ",i);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 2,6,9,8,7,3 };
//	int ret = 0;
//	int target;
//	scanf("%d\n", &target);
//	int i = sizeof(arr) / sizeof(arr[0]);
//	for (int a = 0; a < i-1; a++)
//	{
//		int b = a + 1;
//		while (b < i)
//		{
//			if (arr[a] + arr[b] == target)
//			{
//				int ret = 1;
//				printf("数组中两数的下标是：%d  %d", a, b);
//			}
//			b++;
//		}
//	}
//	if (ret != 1)
//		printf("输入的数不能在找到数组中两数之和");
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d\n", &num);
//	char ch = (char)num;
//	printf("%c\n", ch);
//	
//	return 0;
// }
//int sort(int x)
//{
//	if (x < 0)
//		printf("false");
//	else
//	{
//		int a = 0;
//		while (x > a)
//			a = x % 10;
//
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d\n", &num);
//	int ret = sort(num);
//	return 0;
//}
//char* my_strcpy(char* ,const char* )
//char* (*pf)(char* ,const char* )=my_strcpy
// char* (* pfArr[4])(char* ,const char* )={}
//int main()
//{
//	int a[4] = { 1,2,3,4};
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}习题
//int DIVIDUAL(int x, int y)
//{
//	return x / y;
//}
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{ 
//	int x = 0;
//	int y= 0;
//	scanf("%d%d", &x, &y);
//	int ret = ADD(x,y);
//	printf("%d\n", ret);
//	return 0;
////}
//int main()
//{
//	char arr[] = "SHIT!Sold OFF!";
//	int i = 0;
//	while (arr[i])
//	{
//		if (islower(arr[i]))
//		{
//			arr[i]=toupper(arr[i]);
//			
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
////}
//int main()
//{
//	float arr1[] = { 3.14,2.2,6.5,7.7,8.4,3.0,5.2,7.8 };
//	float arr2[8];
//	memcpy(arr2, arr1, sizeof(arr1));
//	memmove(arr1+3, arr1 , 20);
//	int i = 0;
//	for (i = 0; i < 8; i++)
//	{
//		printf("%f\n", arr1[i]);
//	}
//	for (i = 0; i < 8; i++)
//	{
//		printf("%f\n", arr2[i]);
//	}
//	return 0;
////}
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	char* ret = dest;
//	if (dest < src)
//	{
//		while (num--)
//			*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num )= *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 0,3,4,5,2,7,8,6,9,11 };
//	my_memmove(arr+3,arr,20 );
//	for (int i = 0; i < 10; i++)
//		printf("%d\n", arr[i]);
//	return 0;
//}
//int main()
//{
//	int i, j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int sort(int x, int y, int z)
//{
//	int c = 0;
//	if (x > y)
//		c++;
//	if (x > z)
//		c++;
//	if (y > z)
//		c++;
//	int b = c % 2;
//	if (b == 0)
//		return 1;
//	else
//		return -1;
//
//
//}
//int main()
//{
//	int arr[3][3] = { 3,4,5,6,8,10,9,11,12 };
//	int j = 0;
//	int sum = 0;
//	
//	for (j = 0; j < 3; j++)
//	{
//		int a = 0;
//		a = 3 - j - 1;
//        int b =0;
//		b = 3 - j - a;
//		int ret = sort(j, a, b);
//		if (ret == -1)
//		{
//			sum = arr[0][j] * arr[1][b] * arr[2][a]-arr[0][j] * arr[1][a] * arr[2][b];
//		}
//		else
//		{
//			sum = arr[0][j] * arr[1][a] * arr[2][b] - arr[0][j] * arr[1][b] * arr[2][a];
//
//		}
//
//	}
//	printf("%d", sum);
//	
//		
//	
//
//	return 0;
//}
//int my_sort(int x,int y)
//{
//	int a, b;
//		b = 0;
//		for (a = 1; a <= (x > y ? y : x); a++)
//		{
//			if (x % a == 0)
//				b += a;
//			if (y == b)
//				return 1;
//
//		}
//	
//		if(y!=b)
//			return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d,%d",&a,&b);
//	if (my_sort(a,b) == my_sort(b,a)&&my_sort(a,b)!=0)
//		printf("%d和%d为亲密数。", a, b);
//	else
//		printf("%d和%d不是亲密数。", a, b);
//	return 0;
//}