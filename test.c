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
#include <stdio.h>
int main()
{
	int a;
	printf("������һ��������");
	scanf_s("%d", &a);
	if (a%10==5)
		puts("��������λ��Ϊ5");
	else
		puts("��������λ����Ϊ5");
	return 0;
}