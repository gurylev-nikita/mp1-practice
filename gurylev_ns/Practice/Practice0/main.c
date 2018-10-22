#include <stdio.h>
#include <math.h>


void main ()
{
	float x1, y1, r1, x2, y2, r2, d;
	scanf("%lf%lf%lf", &x1, &y1, &r1);
	scanf("%lf%lf%lf", &x2, &y2, &r2);
	scanf("%lf", &d);

	if ((r1 == r2) && (x1 == x2) && (y1 == y2))

	{
	
		printf("Circles match");
	
		return;

	}

	if (d == (r1 + r2))

	{
	
		printf("Circles intersect at one point");
	
		return;

	}

	if (d > r1 + r2)

	{
	
		printf("Circles do not intersect");
	
		return;

	}

	if (d>(r1 - r2) && d<(r1 + r2))

	{
	
		printf("Circles intersect at two points");
	
		return;

	}

	if (d > (r1 - r2) && d > (r2 - r1))

	{ 
	
		printf("The circle is in the circle");
	
		return;

	}

	if ((r1 < 0) || (r2 < 0))

	{
	
		printf("Circles do not exist");
	
		return;

	}
}
