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

	printf("섭씨 온도를 입력하시오 : ");
	scanf("%f", &col);
	printf("%f\n", ColToFah(col));

	printf("화씨 온도를 입력하시오 : ");
	scanf("%f", &fah);
	printf("%f\n", FahToCol(fah));
}