//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	puts("��������������");
//	printf("����a:");
//	scanf_s("%d", &a);
//	printf("����b:");
//	scanf_s("%d", &b);
//	printf("����c:");
//	scanf_s("%d", &c);
//	if (a == b&&b == c)
//		printf("�����������\n");
//	else if (a==b||a==c)
//		printf("���������\n");
//	else
//		printf("�������������\n");
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
//	if (a - b && b - a <=10)
//		printf("���ǵĲ�ֵС�ڵ���10\n");
//	else
//		printf("���ǵĲ�ֵ���ڵ���11\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num;
//	puts("������һ������");
//	scanf_s("%d", &num);
//	switch (num % 3){
//	case 0:puts("�����ܱ�3������\n");break;
//	case 1:puts("��������3����Ϊ1��\n"); break;
//	case 2:puts("��������3����Ϊ2��\n"); break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	printf("������һ��������");
//	scanf_s("%d",&num);
//	switch (num%2)
//	{
//	case 0:
//		printf("����Ϊż��");
//		break;
//	case 1:
//		puts("����Ϊ����");
//		break;
//
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int month;
	puts("�������·ݣ�");
	scanf_s("%d", &month);
	switch (month)
	{
	case 3:
	case 4:
	case 5:
		printf("%d��Ϊ����\n",month);
		break;
	case 6:
	case 7:
	case 8:
		printf("%d��Ϊ�ļ�\n", month);
		break;
	case 9:
	case 10:
	case 11:
		printf("%d��Ϊ�＾\n", month);
		break;
	case 12:
	case 1:
	case 2:
		printf("%d��Ϊ����\n", month);
		break;
	default:
		puts("���ã��������");
	}
	return 0;
}