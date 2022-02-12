#include"stdio.h"

void test1() {
	int i, sum = 0, n = 100;
	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);
}

void test2() {

	int sum = 0, n = 100;
	sum = (1 + n) * n / 2;
	printf("%d", sum);

}

void test3() {

	int i, sum = 0, n = 100;	/* 执行1次 */
	for(i = 1; i <= n; i++)	/* 执行了n+1次 */
	{
		sum = sum + i;			/* 执行n次 */
	}
	printf("%d", sum);			/* 执行1次 */

}

void test4() {
	int sum = 0, n = 100;		/* 执行一次 */
	sum = (1 + n) * n / 2;		/* 执行一次 */
	printf("%d", sum);			/* 执行一次 */

}

void test5() {
	int i, j, x = 0, sum = 0, n = 100;	/* 执行一次 */
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			x++;						/* 执行n×n次 */
			sum = sum + x;
		}
	}
	printf("%d", sum);					/* 执行一次 */


}

void test6() {
	int sum = 0, n = 100;		/* 执行一次 */
	sum = (1 + n) * n / 2;		/* 执行一次 */
	printf("%d", sum);			/* 执行一次 */


}

void test7() {
	int sum = 0, n = 100;		/* 执行1次 */
	sum = (1 + n) * n / 2;			/* 执行第1次 */
	sum = (1 + n) * n / 2;			/* 执行第2次 */
	sum = (1 + n) * n / 2;			/* 执行第3次 */
	sum = (1 + n) * n / 2;			/* 执行第4次 */
	sum = (1 + n) * n / 2;			/* 执行第5次 */
	sum = (1 + n) * n / 2;			/* 执行第6次 */
	sum = (1 + n) * n / 2;			/* 执行第7次 */
	sum = (1 + n) * n / 2;			/* 执行第8次 */
	sum = (1 + n) * n / 2;			/* 执行第9次 */
	sum = (1 + n) * n / 2;			/* 执行第10次 */
	printf("%d", sum);		    /* 执行1次 */


}

void test8() {

	//int i,n = 100;
	//for (i = 0; i < n; i++)
	//{
	//	/* 时间复杂度为O(1)的程序步骤序列 */
	//}


	//int count = 1;
	//while (count < n)
	//{
	//	count = count * 2;
	//	/* 时间复杂度为O(1)的程序步骤序列 */
	//}


	//int i, j;
	//for (i = 0; i < n; i++)
	//{
	//	for (j = 0; j < n; j++)
	//	{
	//		/* 时间复杂度为O(1)的程序步骤序列 */
	//	}
	//}

	//int i, j;
	//for (i = 0; i < m; i++)
	//{
	//	for (j = 0; j < n; j++)
	//	{
	//		/* 时间复杂度为O(1)的程序步骤序列 */
	//	}
	//}

	//int i, j;
	//for (i = 0; i < n; i++)
	//{
	//	for (j = i; j < n; j++)  /* 注意j = i而不是0 */
	//	{
	//		/* 时间复杂度为O(1)的程序步骤序列 */
	//	}
	//}


	//int i, j;
	//for (i = 0; i < n; i++)
	//{
	//	function(i);
	//}


	//void function(int count)
	//{
	//	print(count);
	//}


	//void function(int count)
	//{
	//	int j;
	//	for (j = count; j < n; j++)
	//	{
	//		/* 时间复杂度为O(1)的程序步骤序列 */
	//	}
	//}

	//n++;  						/* 执行次数为1 */
	//function(n);	 			/* 执行次数为n */
	//int i, j;
	//for (i = 0; i < n; i++)		/* 执行次数为n×n */
	//{
	//	function(i);
	//}
	//for (i = 0; i < n; i++)		/* 执行次数为n(n + 1)/2 */
	//{
	//	for (j = i; j < n; j++)
	//	{
	//		/* 时间复杂度为O(1)的程序步骤序列 */
	//	}
	//}

}


int main() {	//后加入

	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	//test8();


}
