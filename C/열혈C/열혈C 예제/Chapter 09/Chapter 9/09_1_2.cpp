#include <stdio.h>

float ColToFah(float col)
{
	return 1.8*col + 32;
}

float FahToCol(float fah)
{
	return (fah - 32) / 1.8;
}

int main(void)
{
	float col, fah;

	printf("���� �µ��� �Է��Ͻÿ� : ");
	scanf("%f", &col);
	printf("%f\n", ColToFah(col));

	printf("ȭ�� �µ��� �Է��Ͻÿ� : ");
	scanf("%f", &fah);
	printf("%f\n", FahToCol(fah));
}