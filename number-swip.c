#include<stdio.h>
int main (){
	int a,b,s;
	int i=0;
    int no[5];		
	printf("put any number");
	scanf("%d",&a);
	while(a){

	if(a>0){
	b=a%10; //b=4
     }
	a=a*0.1;//a=123.4(123)
	/*
	 b=4,a=123 
	 b=3,a=12
	 b=2,a=1
	 b=1,a=0
	 
	 */ 
	 	no[i]=b;
i++;}
printf("no. of digits=%d\n",i);

for(int j=0;j<i;j++){
printf("%d",no[j]);
s=no[j]+s;

}

printf("    sum of digite=%d ",s);
return 0;
	}
