#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//斐波那契的两种写法
//int F(int n)
//{
//	
//	if (n == 1 || n == 2)
//		return 1;
//	else
//	return F(n - 1) + F(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = F(n);
//	printf("%d", ret);
//	return 0;
//
//}
//递归
//int F(int n )
//{
//	int a = 1, b = 1, c = 1;
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
//	int n = 0;
//	scanf("%d", &n);
//	int ret = F(n);
//	printf("%d", ret);
//	return 0;
//
//}
//求n的k次方
int S(int n,int k)
{
	
	if (k == 0)
		return 1;
	else if (k == 1)
		return n;
	else
		return  n * S(n, k - 1);
	

}
int main()
{
	int n = 0;
	int k = 0;
	printf("输入数字和立方数\n");
	scanf("%d %d", &n,&k);
	int r = S(n, k);
	printf("%d", r);
	return 0;
}