#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main()
{
	int x = 1, y = 1000, n = 1, a, p = 1, type;
	int i = 0;
	char vvod = '=';
	setlocale(LC_ALL, "Russian");
	printf("����� ���������� � ���� ������ �����\n");
	printf("�������� ����� ���� 1 ��� 2:\n");
	scanf("%d", &type);
	srand((unsigned int)time(0));
	if (type == 1)
	{
		a = x + rand() % y;
		printf("��������� ������� ����� �� 1 �� 1000, ���������� ��� ��������:\n");
		while (1)
		{
			i++;
			printf("������� �����, ������� ��������� ������\n");
			scanf("%d", &a);
			if (a > n)
			{
				printf("���������� ����� ������, ����������� ���������� ������\n");
				p++;
			}
			else if (a < n)
			{
				printf("���������� ����� ������, ����������� ���������� ������\n");
				p++;
			}
			else
			{
				printf("����������, �� ������� ���������� �����! ���-�� �������: %d\n", p);
				break;
			}
		}
		printf("���������� �������: %d \n", i);
	}
	else if (type == 2)
	{
		n = rand() * (y - x) / RAND_MAX + x;
		printf("��������� ������� �������� ���� �����: %d\n", n);
		while (1)
		{
			scanf("%d", &vvod);
			if (vvod == '<')
			{
				y = n;
				n = rand() * (y - x) / RAND_MAX + x;
				printf("%d", n);
				p++;
			}
			else if (vvod == '>')
			{
				x = n;
				n = rand() * (y - x) / RAND_MAX + x;
				printf("%d \n", n);
				p++;
			}
			else if (vvod == '=')
			{
				printf("��������� ������ �����!!! ���-�� �������: %d\n", p);
				return;
			}
		}
	}
}