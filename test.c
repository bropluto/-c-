//#include <stdio.h>
//int main()
//{
//	double a, b;
//	puts("����������ʵ��");
//	printf("ʵ��1��");
//	scanf_s("%lf", &a);
//	printf("ʵ��2��");
//	scanf_s("%lf", &b);
//	printf("������Ϊ��%f\n", a + b);
//	printf("������Ϊ��%f\n", a - b);
//	printf("������Ϊ��%f\n", a * b);
//	printf("������Ϊ��%f\n", a / b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double a;
//	puts("������һ��ʵ��");
//	scanf_s("%lf", &a);
//	printf("�������ʵ��Ϊ��%f", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	puts("��������������");
//	printf("����1��");
//	scanf_s("%d", &a);
//	printf("����2��");
//	scanf_s("%d", &b);
//	printf("ƽ����Ϊ��%f\n", (double)(a + b) / 2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	puts("��������������");
//	printf("����1��");
//	scanf_s("%d", &a);
//	printf("����2��");
//	scanf_s("%d", &b);
//	printf("a��b��%lf%%\n", (double)a/b*100);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int shengao;
//	double tizhong;
//	printf("������������ߣ�");
//	scanf_s( "%d",&shengao);
//	tizhong = (shengao - 100)*0.9;
//	printf("���ı�׼����Ϊ��%3.1fkg\n", tizhong);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("������һ�������ж��Ƿ������5������");
//	scanf_s("%d", &a);
//	if (a % 5)
//		puts("��������");
//	else
//		puts("��������");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("������һ�������ж��Ƿ�Ϊ������");
//	scanf_s("%d", &a);
//	if (a % 2)
//		puts("����");
//	else
//		puts("ż��");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a,b;
//	printf("����������������");
//	scanf_s("%d%d", &a,&b);
//	if (a%b)
//		puts("b����a��Լ��");
//	else
//		puts("b��a��Լ��");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("������һ��������");
//	scanf_s("%d", &a);
//	if (a%10==5)
//		puts("��������λ��Ϊ5");
//	else
//		puts("��������λ����Ϊ5");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	puts("��������������");
//	printf("����a��");
//	scanf_s("%d", &a);
//	printf("����b��");
//	scanf_s("%d", &b);
//	if (a == b)
//		printf("a��b���\n");
//	else
//		printf("a������ں�С��b\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b, c, max,MAX;
//	puts("����������������");
//	printf("����a��");
//	scanf_s("%d", &a);
//	printf("����b��");
//	scanf_s("%d", &b);
//	printf("����c��");
//	scanf_s("%d", &c);
//	/*max = a;*/
//	/*if (b > max)
//		max = b;
//	if (c > max)
//		max = c;*/
//	max = (a > b) ? a : b;
//	MAX = (max > c) ? max : c;
//	printf("�������нϴ����Ϊ��%d\n", MAX);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	puts("����������������");
//	printf("����a��");
//	scanf_s("%d", &a);
//	printf("����b��");
//	scanf_s("%d", &b);
//	printf("���ǵĲ��ǣ�%d\n", (a > b)?a - b:b - a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b, c,d, max,MAX,MMAX;
//	puts("�������ĸ�������");
//	printf("����a��");
//	scanf_s("%d", &a);
//	printf("����b��");
//	scanf_s("%d", &b);
//	printf("����c��");
//	scanf_s("%d", &c);
//	printf("����c��");
//	scanf_s("%d", &d);
//	/*max = a;*/
//	/*if (b > max)
//		max = b;
//	if (c > max)
//		max = c;*/
//	max = (a > b) ? a : b;
//	MAX = (max > c) ? max : c;
//	MMAX = (MAX > d) ? MAX : d;
//	printf("�ĸ����нϴ����Ϊ��%d\n", MMAX);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b,x;
//	puts("����������������");
//	printf("����a��");
//	scanf_s("%d", &a);
//	printf("����b��");
//	scanf_s("%d", &b);
//	if (a > b)
//		printf("���ǵĲ�Ϊ��%d\n", x=a - b);
//	else
//		printf("���ǵĲ�Ϊ��%d\n", x=b - a);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int a, b, c, min;
	puts("����������������");
	printf("����a��");
	scanf_s("%d", &a);
	printf("����b��");
	scanf_s("%d", &b);
	printf("����c��");
	scanf_s("%d", &c);
	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	printf("�������н�С����Ϊ��%d\n", min);
	return 0;
}