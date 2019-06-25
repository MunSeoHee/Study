#include "stdafx.h"
#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;


typedef struct ractangle
{
	Point dot1;
	Point dot2;

}Ractangle;

int area(Ractangle * rac)
{
	int col, row;
	col = (*rac).dot2.xpos - (*rac).dot1.xpos;
	row = (*rac).dot2.ypos - (*rac).dot1.ypos;

	return col * row;
}

/*void GetDot(Ractangle * rac)
{
	getchar();
	scanf_s("%d", (*rac).dot1.xpos);
	getchar();
	scanf_s("%d", (*rac).dot1.ypos);
	getchar();
	scanf_s("%d", (*rac).dot2.xpos);
	getchar();
	scanf_s("%d", (*rac).dot2.ypos);
	getchar();
}*/

void print(Ractangle * rac)
{
	printf("%d\n", (*rac).dot1.xpos);
	printf("%d\n", (*rac).dot1.ypos);
	printf("%d\n", (*rac).dot2.xpos);
	printf("%d\n", (*rac).dot2.ypos);
}

int main(void)
{
	Ractangle rac = { {0,0},{10,10} };
	//GetDot(&rac);
	printf("≥–¿Ã : %d\n", area(&rac));
	print(&rac);
}