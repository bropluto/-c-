//#include <stdio.h>
//int main()
//{
//	double a, b;
//	puts("请输入两个实数");
//	printf("实数1：");
//	scanf_s("%lf", &a);
//	printf("实数2：");
//	scanf_s("%lf", &b);
//	printf("两数和为：%f\n", a + b);
//	printf("两数差为：%f\n", a - b);
//	printf("两数积为：%f\n", a * b);
//	printf("两数商为：%f\n", a / b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double a;
//	puts("请输入一个实数");
//	scanf_s("%lf", &a);
//	printf("您输入的实数为：%f", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	puts("请输入两个整数");
//	printf("整数1：");
//	scanf_s("%d", &a);
//	printf("整数2：");
//	scanf_s("%d", &b);
//	printf("平均数为：%f\n", (double)(a + b) / 2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	puts("请输入两个整数");
//	printf("整数1：");
//	scanf_s("%d", &a);
//	printf("整数2：");
//	scanf_s("%d", &b);
//	printf("a是b的%lf%%\n", (double)a/b*100);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int shengao;
//	double tizhong;
//	printf("请输入您的身高：");
//	scanf_s( "%d",&shengao);
//	tizhong = (shengao - 100)*0.9;
//	printf("您的标准体重为：%3.1fkg\n", tizhong);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("请输入一个整数判断是否可以与5整除：");
//	scanf_s("%d", &a);
//	if (a % 5)
//		puts("不能整除");
//	else
//		puts("可以整除");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("请输入一个整数判断是否为奇数：");
//	scanf_s("%d", &a);
//	if (a % 2)
//		puts("奇数");
//	else
//		puts("偶数");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a,b;
//	printf("请输入两个整数：");
//	scanf_s("%d%d", &a,&b);
//	if (a%b)
//		puts("b不是a的约数");
//	else
//		puts("b是a的约数");
//	return 0;
//}
#include <stdio.h>
int main()
{
	int a;
	printf("请输入一个整数：");
	scanf_s("%d", &a);
	if (a%10==5)
		puts("该整数个位数为5");
	else
		puts("该整数个位数不为5");
	return 0;
}