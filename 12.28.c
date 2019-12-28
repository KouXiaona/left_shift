#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

/*1.实现一个函数，可以左旋字符串中的k个字符。
ABCD左旋一个字符得到BCDA 2  1 
ABCD左旋两个字符得到CDAB*/
/*思路：首先定义一个字符串；
         定义左旋N的字符
		 左旋实现的函数（将要左旋的个数的值先保存起来，然后剩下的左旋，最后将保存的值放到最后。就可以完成左旋）
		 */


void left_move(char a[], int key, int len)
{
	for (int i = 0; i < key; ++i)
	{
		int j = 0;
		char tmp = a[0];
		for (j = 0; j < len; ++j)
		{
			a[j] = a[j + 1];
		}
		a[len - 1] = tmp;
	}

}


int main()
{
	char a[] = "ABCDEFGHIJK";
	int key;
	scanf("%d", &key);		//输入需要左旋 k 个字符
	int len = strlen(a);		//给出字符串长度
	left_move(a, key, len);
	for (int i = 0; i < len; ++i)		//打印左旋后的字符串
	{
		printf("%c ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;

}
