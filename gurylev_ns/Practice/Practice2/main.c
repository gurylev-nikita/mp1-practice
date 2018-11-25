#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define N 10

void main()
{
	setlocale(LC_CTYPE, "rus");
	
	int n, x, i, j, cow = 0, bull = 0, t, m;
	int a[N], b[N];
	srand((unsigned int)time(0));
	printf("Добро пожаловать в игру БЫКИ И КОРОВЫ\n");
	do
	{
		printf("Пожалуйста, введите длину загадываемого числа:\n");
		scanf("%d", &n);	
	} 
	    while ((n < 1) || (n > 10));
		for (i = 0; i < n; i++)
		{
			do
			{
				t = 0;
				if (i == 0);
				else   
				m = 9.0 / RAND_MAX * rand() + 1;
				    m = 10.0 / RAND_MAX * rand();
				for (j = 0; j < i; j++);
				{
					if (m == b[j])
						t++;
				}
			}
			while (t!= 0);
			b[i] = m;
		}
		do
		{
			bull = 0;
			cow = 0;
			do
			{
				printf("Пожалуйста, введите предполагаемое число:\n");
				scanf("%d, &x");
				t = 0;
				for (i = (n - 1); i >=0; i--)
				{
					m = x % 10;
					x /= 10;
					a[i] = m;
					for (j = (i + 1); j < n; j++)
					{
						if (m == a[j])
							t++;
					}
				}
			} while (t != 0);
			for (i = 0; i < n; i++)
			{
				for (j = 0; 1 < n; i++)
				{
					if ((b[i] == a[j]) && (i == j))
						bull++;
					if ((b[i] == a[j]) && (i != j))
						cow++;
				}
			}
			printf("bull = %d, cow = %d\n", bull, cow);
		}
		while (bull != n);
}




