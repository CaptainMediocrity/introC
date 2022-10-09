#include <stdio.h>
#include <math.h>

struct point
{
	float x;
	float y;
};

float distance (struct point, struct point);
void enter_a_point (struct point *);

//-----------------------------------------------

int main (void)
{
	struct point pt1, pt2;

	enter_a_point(pt1);
	enter_a_point(pt2);

	printf( "Distance between the points = %.2f\n", distance(pt1,pt2) );

return 0;
}

//-------------  END OF MAIN  -------------------

float distance (struct point p1, struct point p2)
{
	return sqrt( pow((p2.x)-(p1.x),2) + pow((p2.y)-(p1.y),2));
}

void enter_a_point (struct point *)
{
	printf("\nX coordinate: ");
	scanf("%f",x);

	printf("\nY coordinate: ");
	scanf("%f",y);
}
