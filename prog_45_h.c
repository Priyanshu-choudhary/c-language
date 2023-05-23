#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float ang;
    
    printf("\nEnter the angle in degree : ");
    scanf("%f", &ang);
    
    ang = ang*((22.0/7.0)/180.0);
    
    sum = cos(ang) + sin(ang);
    
    if(sum == 1)
        printf("\nTheir sum is one.");
    else
        printf("\nTheir sum is not one");
    
    printf("%f", ang);
    return 0;
}
