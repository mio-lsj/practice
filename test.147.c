# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	double* d[5];
//	double *(*pd)[5] = &d;//pd����һ������ֵ
//	int arr[10] = { 1,2,3,4,5 };
//	int (*parr)[10] = &arr;//parr����һ������ָ��,������ÿ��Ԫ�ض���int
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//	return 0;
//}

//��������������Ԫ�صĵ�ַ��������2������
//1.sizeof���������� �� ��������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));
//	}
//	return 0;
//}

//p��������ָ��
void print(int (*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);//��ά�������������ʾ��Ԫ�صĵ�ַ
	//��ά�������Ԫ����  ��һ��

	return 0;
}

//int (*parr3[10])[5]  �������ָ�������
//�������ܹ����10������ָ�룬ÿ������ָ���ܹ�ָ��һ������
//����5��Ԫ�أ�ÿ��Ԫ����int����
//�൱�� parr[10]={a1,a2,a3...a10}
//����һ��a1 Ϊ int(*a1)[5]