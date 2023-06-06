#include <stdio.h>
int fractroial(int);
int main (void)

{  	
    float result,t;
    int b;

	printf("enter no. of term of series you want to add");
	scanf("%d",&b); 
	for(int i=0;i<b;i++){
		
		
    result=(float)i/fractroial(i);
    
    printf("result=%f   ",result);
    printf("fra=%d   ",i);
	printf("fra=%d\n",fractroial(i));
    t=t+result;
}
	printf("sum=%f",t);
return 0;
}
	
int fractroial(int n){
 int r=1;
 //printf("fractroial of %d is ",n);

 for(;n>0;n--){
	r=r*n;
	}
	//printf("%d",r);
	return r;
	}
	
