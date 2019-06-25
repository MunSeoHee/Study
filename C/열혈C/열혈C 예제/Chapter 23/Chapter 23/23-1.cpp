#include "stdafx.h"
#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void SwapPoint(Point *pos1, Point *pos2)
{
	int tempx, tempy;

	tempx = (*pos1).xpos;
	(*pos1).xpos = (*pos2).xpos;
	(*pos2).xpos = tempx;

	tempy = (*pos1).ypos;
	(*pos1).ypos = (*pos2).ypos;
	(*pos2).ypos = tempy;
}

int main(void)
{
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };

	SwapPoint(&pos1, &pos2);

	printf("%d %d \n%d %d", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
}