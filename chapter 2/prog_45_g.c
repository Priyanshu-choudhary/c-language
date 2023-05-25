#include<stdio.h>>
#include<conio.h>
#include<math.h>
int main()
{
	float x, y, r, theta;
	
	printf("Enter the x and y coordinates : ");
	scanf("%f%f", &x, &y);
	r = sqrt(x*x + y*y);
	theta = atan(y/x);
	printf("\nCoordinates in polar form : %.2f(cos(%.2f) + i.sin(%.2f))", r, theta, theta);
	
	getch();
	return 0;
}
