#include <stdio.h>
#include <locale.h>
#include <math.h>
void main ()
{
	float w, d, h, m1, m2, m3, m4, m5, m, n;
    float tdvp, tdsp, twood, dvp, dsp, wood; //�������
	

	dvp=820;
	dsp=650;
	wood=700;
	tdvp=0.5;
	tdsp=1.5;
	twood=1;
	setlocale (LC_CTYPE,"rus");
	printf("������ ����� (�� 180 �� 220)");
	scanf("%f", &h);
	if ((h < 180) || (h > 220))
	{
		printf("������� �������� ������");
		return;
	}
	printf("������ ����� (�� 80 �� 120)");
	scanf("%f", &w);
	if ((w < 80) || (w > 120))
	{
		printf("������� �������� ������");
	    return;
	}
	printf("������� ����� (�� 50 �� 90)");
	scanf("%f", &d);
	if ((d < 50) || (d > 90))
	{
		printf("������� �������� �������");
		return;
	}

	//���������� �����
	n=(h/40);
	//������ �����
	m1 = (h * w * tdvp * dvp) / 1000000;     //������ ������     
	m2 = (2 * h * d * tdsp * dsp) / 1000000; //��������   
	m3 = (2 * w * d * tdsp * dsp) / 1000000; //������� � ������ ������   
	m4 = (h * w * twood * wood) / 1000000;   //�����
	m5 = (n * (d * w * tdsp) / 1000000);     //�����
	//����� �����
    printf("����� ����� (��)");
	scanf("%f", &m);
	m = m1 + m2 + m3 + m4 + m5;
	return;
}

