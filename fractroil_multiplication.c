#include <stdio.h>
int fractroial(int);
int main (void)

{  	int a;

	printf("enter a number=");
	scanf("%d",&a);
    fractroial(a);
	return 0;
	
}
	
int fractroial(int n){
 int r=1;
 printf("fractroial of %d is ",n);

 for(;n>0;n--){
	r=r*n;
	}
	printf("%d",r);
	return r;
	}
	
