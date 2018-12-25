#include <stdio.h>
#include <locale.h>

void main()
{
	float w, d, h, m1, m2, m3, m4, m5, m, n;
	float tdvp, tdsp, twood, dvp, dsp, wood; //��������� � �������
	setlocale(LC_ALL, "Russian");

	tdvp = 0.005f;
	tdsp = 0.015f;
	twood = 0.001f;

	printf("������� ��������� ��������� ��� (��/�^3)\n");
	scanf_s("%f", &dvp);

	printf("������� ��������� ��������� ��� (��/�^3)\n");
	scanf_s("%f", &dsp);

	printf("������� ��������� ��������� ��������� (��/�^3)\n");
	scanf_s("%f", &wood);

	setlocale(LC_ALL, "Russian");
	printf("������ ����� (�� 180 �� 220 (��))");
	scanf_s("%f", &h);
	if ((h < 180) || (h > 220))
	{
		printf("������� �������� ������");
		return;
	}
	printf("������ ����� (�� 80 �� 120 (��))");
	scanf_s("%f", &w);
	if ((w < 80) || (w > 120))
	{
		printf("������� �������� ������");
		return;
	}
	printf("������� ����� (�� 50 �� 90 (��))");
	scanf_s("%f", &d);
	if ((d < 50) || (d > 90))
	{
		printf("������� �������� �������");
		return;
	}

	h /= 100.0f;
	w /= 100.0f;
	d /= 100.0f;

	//������ �����
	m1 = ((h - 2 * 0.015) * (w - 2 * 0.015) * tdvp * dvp);     //������ ������     
	m2 = (2 * (h - 2 * 0.015) * (d - 0.005) * tdsp * dsp);     //��������   
	m3 = (2 * (w - 2 * 0.015) * (d - 0.005) * tdsp * dsp);     //������� � ������ ������   
	m4 = ((h - 2 * 0.015) * (w - 2 * 0.015) * twood * wood);   //�����
	m5 = (h - 2 * 0.015) / (0.4 + 0.015) * (w - 2 * 0.015) * (d - 0.005) * 0.02f * tdsp;  //�����

	//����� �����
	m = m1 + m2 + m3 + m4 + m5;
	printf("����� ����� (��) %.3f\n", m);
}

