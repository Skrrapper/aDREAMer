#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//쳲�����������д��
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
//�ݹ�
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
//��n��k�η�
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
	printf("�������ֺ�������\n");
	scanf("%d %d", &n,&k);
	int r = S(n, k);
	printf("%d", r);
	return 0;
}