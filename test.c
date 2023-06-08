//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	puts("请输入三个整数");
//	printf("整数a:");
//	scanf_s("%d", &a);
//	printf("整数b:");
//	scanf_s("%d", &b);
//	printf("整数c:");
//	scanf_s("%d", &c);
//	if (a == b&&b == c)
//		printf("三个数都相等\n");
//	else if (a==b||a==c)
//		printf("两个数相等\n");
//	else
//		printf("三个数都不想等\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	puts("请输入两个整数：");
//	printf("整数a：");
//	scanf_s("%d", &a);
//	printf("整数b：");
//	scanf_s("%d", &b);
//	if (a - b && b - a <=10)
//		printf("他们的差值小于等于10\n");
//	else
//		printf("他们的差值大于等于11\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num;
//	puts("请输入一个数：");
//	scanf_s("%d", &num);
//	switch (num % 3){
//	case 0:puts("该数能被3整除。\n");break;
//	case 1:puts("该数除于3余数为1。\n"); break;
//	case 2:puts("该数除于3余数为2。\n"); break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数：");
//	scanf_s("%d",&num);
//	switch (num%2)
//	{
//	case 0:
//		printf("该数为偶数");
//		break;
//	case 1:
//		puts("该数为奇数");
//		break;
//
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int month;
	puts("请输入月份：");
	scanf_s("%d", &month);
	switch (month)
	{
	case 3:
	case 4:
	case 5:
		printf("%d月为春季\n",month);
		break;
	case 6:
	case 7:
	case 8:
		printf("%d月为夏季\n", month);
		break;
	case 9:
	case 10:
	case 11:
		printf("%d月为秋季\n", month);
		break;
	case 12:
	case 1:
	case 2:
		printf("%d月为冬季\n", month);
		break;
	default:
		puts("您好！输入错误。");
	}
	return 0;
}