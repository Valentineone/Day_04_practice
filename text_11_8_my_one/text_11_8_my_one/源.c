#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//3. 
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字， 
//例如：2+22+222+2222+22222 
//int main()
//{
//	int i;
//	int a;
//	int sum = 0;
//	int as;
//	printf("输入a：");
//	scanf("%d", &a);
//	as = a;
//	for (i = 0; i < 5; i++)
//	{
//		sum += a;
//		a = a*10 + as;
//	}
//	printf("a+aa+aaa+aaaa+aaaaa=%d",sum);
//	return 0;
//}
//2.求出0～999之间的所有“水仙花数”并输出。 
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3?，则153是一个“水仙花数”。 
//
//#include <math.h>
//int main()
//{
//	int i;
//	for (i = 0; i < 100; i++)
//	{
//		if (i == pow(i % 10, 2) + pow(i / 10,2))
//		{
//			printf("%d ", i);
//		}
//	}
//	for (i = 100; i < 1000; i++)
//	{
//		if(i==pow(i%10,3)+pow(i/10%10,3)+pow(i/100,3))
//			printf("%d ",i);
//	}
//}


///* 
//在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。 
//例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数： 
//153 = 1^3 + 5^3 + 3^3。 
//370 = 3^3 + 7^3 + 0^3。 
//371 = 3^3 + 7^3 + 1^3。 
//407 = 4^3 + 0^3 + 7^3。 
//*/ 
//
//

//1.在屏幕上输出以下图案： 
//* 
//*** 
//***** 
//******* 
//********* 
//*********** 
//************* 
//*********** 
//********* 
//******* 
//***** 
//*** 
//* 
//
int main()
{
	int i;
	int j;
	int k;
	int n;
	printf("输入菱形最长行的个数：");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = n - i - 1; j > 0; j--)
		{
			printf(" ");
			
		}
		for (k = 0; k < 2 * i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0 ; j < i+1; j++)
		{
			printf(" ");
		}
		for (k = 0; k < 2 * (n-i-2) + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
