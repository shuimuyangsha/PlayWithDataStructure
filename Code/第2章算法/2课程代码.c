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

	int i, sum = 0, n = 100;	/* ִ��1�� */
	for(i = 1; i <= n; i++)	/* ִ����n+1�� */
	{
		sum = sum + i;			/* ִ��n�� */
	}
	printf("%d", sum);			/* ִ��1�� */

}

void test4() {
	int sum = 0, n = 100;		/* ִ��һ�� */
	sum = (1 + n) * n / 2;		/* ִ��һ�� */
	printf("%d", sum);			/* ִ��һ�� */

}

void test5() {
	int i, j, x = 0, sum = 0, n = 100;	/* ִ��һ�� */
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			x++;						/* ִ��n��n�� */
			sum = sum + x;
		}
	}
	printf("%d", sum);					/* ִ��һ�� */


}

void test6() {
	int sum = 0, n = 100;		/* ִ��һ�� */
	sum = (1 + n) * n / 2;		/* ִ��һ�� */
	printf("%d", sum);			/* ִ��һ�� */


}

void test7() {
	int sum = 0, n = 100;		/* ִ��1�� */
	sum = (1 + n) * n / 2;			/* ִ�е�1�� */
	sum = (1 + n) * n / 2;			/* ִ�е�2�� */
	sum = (1 + n) * n / 2;			/* ִ�е�3�� */
	sum = (1 + n) * n / 2;			/* ִ�е�4�� */
	sum = (1 + n) * n / 2;			/* ִ�е�5�� */
	sum = (1 + n) * n / 2;			/* ִ�е�6�� */
	sum = (1 + n) * n / 2;			/* ִ�е�7�� */
	sum = (1 + n) * n / 2;			/* ִ�е�8�� */
	sum = (1 + n) * n / 2;			/* ִ�е�9�� */
	sum = (1 + n) * n / 2;			/* ִ�е�10�� */
	printf("%d", sum);		    /* ִ��1�� */


}

void test8() {

	//int i,n = 100;
	//for (i = 0; i < n; i++)
	//{
	//	/* ʱ�临�Ӷ�ΪO(1)�ĳ��������� */
	//}


	//int count = 1;
	//while (count < n)
	//{
	//	count = count * 2;
	//	/* ʱ�临�Ӷ�ΪO(1)�ĳ��������� */
	//}


	//int i, j;
	//for (i = 0; i < n; i++)
	//{
	//	for (j = 0; j < n; j++)
	//	{
	//		/* ʱ�临�Ӷ�ΪO(1)�ĳ��������� */
	//	}
	//}

	//int i, j;
	//for (i = 0; i < m; i++)
	//{
	//	for (j = 0; j < n; j++)
	//	{
	//		/* ʱ�临�Ӷ�ΪO(1)�ĳ��������� */
	//	}
	//}

	//int i, j;
	//for (i = 0; i < n; i++)
	//{
	//	for (j = i; j < n; j++)  /* ע��j = i������0 */
	//	{
	//		/* ʱ�临�Ӷ�ΪO(1)�ĳ��������� */
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
	//		/* ʱ�临�Ӷ�ΪO(1)�ĳ��������� */
	//	}
	//}

	//n++;  						/* ִ�д���Ϊ1 */
	//function(n);	 			/* ִ�д���Ϊn */
	//int i, j;
	//for (i = 0; i < n; i++)		/* ִ�д���Ϊn��n */
	//{
	//	function(i);
	//}
	//for (i = 0; i < n; i++)		/* ִ�д���Ϊn(n + 1)/2 */
	//{
	//	for (j = i; j < n; j++)
	//	{
	//		/* ʱ�临�Ӷ�ΪO(1)�ĳ��������� */
	//	}
	//}

}


int main() {	//�����

	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	//test8();


}
