#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float l1,l2,g1,g2, D;
	
	printf("\nEnter (two) the values of lattitude : ");
	scanf("%f%f", &l1, &l2);
	
	printf("\nEnter (two) the values of longitude : ");
	scanf("%f%f", &g1, &g2);
	
	D = 3963*acos(sin(l1)*sin(l2) + cos(l1)*cos(l2)*cos(g2-g1));
	
	printf("\nDistance : %f", D);
	
	getch();
	return 0;
}
