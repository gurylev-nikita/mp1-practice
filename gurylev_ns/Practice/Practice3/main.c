#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main()
{
	int x = 1, y = 1000, n = 1, a, p = 1, type;
	char vvod = '=';
	srand(time(NULL));
	setlocale(LC_CTYPE, "rus");
	printf ("����� ���������� � ���� ������ �����\n");
	printf ("�������� ����� ���� 1 ��� 2:\n");
	scanf ("%d", &type);

	if (type == 1);
	{
		a = x + rand() % y;
		printf ("��������� ������� ����� �� 1 �� 1000, ���������� ��� ��������:\n");
		while (1)
		{
			printf ("������� �����, ������� ��������� ������\n");
			scanf ("%d", &a);
			if ( a > n)
			{
				printf ("���������� ����� ������, ����������� ���������� ������\n");
				p++;
			}
			else if (a < n)
			{
				printf ("���������� ����� ������, ����������� ���������� ������\n");
				p++;
			}
			else
			{
				printf ("����������, �� ������� ���������� �����! ���-�� �������: %d\n", p);
				break;
			}
		}
	}
	if (type == 2);
	{
		n = rand() * (y - x) / RAND_MAX + x;
		printf ("��������� ������� �������� ���� �����: %d\n", n);
		while (1)
		{
			scanf ("%d", &vvod);
			if (vvod == '<')
			{ y = n;
			n = rand() * (y - x) / RAND_MAX + x;
			printf ("%d", n);
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
			printf ("��������� ������ �����!!! ���-�� �������: %d\n", p);
			return;
			}
		}
	}
}