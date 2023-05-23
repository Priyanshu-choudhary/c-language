#include <stdio.h>
int SumOfDigits(int);
int GetNoOfDigits(int);
int Reverce(int);
int main(){
        int no;  
	printf("input a five digit no: ");
	scanf("%d",&no);
	printf("no of digit: %d\n",GetNoOfDigits(no));
	printf("sum of digit: %d\n",SumOfDigits(no));
	printf("reverce of no: ");
	printf("%d",Reverce(no));
	return 0;
}


int GetNoOfDigits(int a){
	int q;
	for(q=0;a>0;q++){

 		a=a*0.1;
        }
	return q;
}

int SumOfDigits(int a){
	int t=0,digit;
	for(;a>0;){
	        digit= a%10;
 		a=a*0.1;
        t=t+digit;
	}
	return t;
}
int Reverce(int a){
	int t=0,digit;
	while(a>0){

	        digit= a%10;
		a=a/10;
	        printf("%d",digit);

	}
	printf("\nzero after this");
	return 0;
}



