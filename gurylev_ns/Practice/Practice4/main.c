#include <stdio.h>
#include <locale.h>
#define N 10

int barcode(int shtr[])
{
	int i, s;
	setlocale(LC_CTYPE, "Russian");
	printf("������� �������� �����-��� �� 100 �� 109: \n");
	do
	{
		scanf_s("%d", &s);
	} while (s < 100 || s > 109);
	for (i = 0; i < N; i++)
	{
		shtr[i] == s;
		return i;
	}
}

void DescriptionProduct(char product[][100], int d[], int p[], float c[], int b)
{
	int i;
	setlocale(LC_CTYPE, "Russian");
	printf("���������� � ��������: \n");
	for (i = 0; i < 10; i++)
	printf("%c", product[b][i]);
	printf(" \n");
	printf("����: %d \n", p[b]);
	printf("������: %0.0f \n", d[b]);
	system("pause");
	return 0;
}

void check(char product[][100], int p[], float d[], int v[], float price)
{
	int i, j;

	printf("----------����� ����������---------- \n");
	printf("��� ����� ��� ���� ����� 603034, ������������� ���, �.�.�������� \n");
	printf("��� 972108628 \n");
	printf("�� ��� 00000000000018780");
	printf("�� 9999078900003693 \n");
	printf("���� ���            www.nalog.ru \n");

	for (i = 0; i < N; i++)
	{
		if (v[i] != 0)
		{
			printf("������������ ��������: \n");
			for (j = 0; j < 10; j++)
			{
				printf("%c", product[i][j]);
			}
			printf(" \n");
			printf("��������� 1 ��.: %d ���. \n", p[i]);
			printf("���������: %d \n", v[i]);
			printf("������: %0.0f \n", d[i]);
			printf("���� �� �������: %.2f  \n", (p[i] + (p[i] * d[i]) / 100.0) * v[i]);
		}
	}
	printf("--------------------");
	printf("���� � ������: %.2f \n", price);
	printf("--------------------");
	system("pause");
	return 0;
}
float sum(int p[], float d[], int b)
{
	int i;
	float sum = 0.0;
	for (i = 0; i < N; i++)
	{
		sum = (p[b] * d[b]) / 100.0 + p[b];
	}
	return sum;
}
void main()
{
	int s[N] = { 100, 101, 102, 103, 104, 105, 106, 107, 108, 109 };
	char product[N][100] = { "������", "����", "��������", "���������", "���", "���������", "������", "�����-���������", "���������", "�������" };
	int p[N] = { 2000, 6000, 10000, 30000, 1000, 2500, 1500, 3850, 5000, 1250 };
	float d[N] = { 10, 15, 5, 20, 35, 25, 40, 50, 30, 45 };
	int number;
	int b;
	float price = 0;
	int shtr[] = { 0 };
	setlocale(LC_CTYPE, "rus");
	printf("1 - ���� ��������� ���� \n");
	printf("2 - ������ ��������� ���� \n");
	scanf_s("%d", &number);
	switch (number)
	{
	case 1:
	{
		b = barcode(s);
		shtr[b] = shtr[b] + 1;
		DescriptionProduct(product, s, p, d, b);
		price += sum(p, d, b);
		break;
	}
	case 2:
	{
		check(product, p, d, shtr, price);
		break;
	}
	}
}
