#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

/*1.ʵ��һ�����������������ַ����е�k���ַ���
ABCD����һ���ַ��õ�BCDA 2  1 
ABCD���������ַ��õ�CDAB*/
/*˼·�����ȶ���һ���ַ�����
         ��������N���ַ�
		 ����ʵ�ֵĺ�������Ҫ�����ĸ�����ֵ�ȱ���������Ȼ��ʣ�µ���������󽫱����ֵ�ŵ���󡣾Ϳ������������
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
	scanf("%d", &key);		//������Ҫ���� k ���ַ�
	int len = strlen(a);		//�����ַ�������
	left_move(a, key, len);
	for (int i = 0; i < len; ++i)		//��ӡ��������ַ���
	{
		printf("%c ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;

}
