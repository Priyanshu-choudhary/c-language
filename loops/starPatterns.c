#include<stdio.h>
void leftstar(void);
void rightstar(void);
void peramid(void);

int main(){
rightstar();
//leftstar();
peramid();

return 0;
}

void peramid(){
 
 int n=0,i=0,k=1,j=0,i1=0;
 printf("enter star size:");
 scanf("%d",&n);
 
 for(k;k<=n;k++){

	for(i;(i<(n-k));i++){  //left
	 printf(" ");	
	}
	i=0;
	for(j;(j<(k));j++){
         printf("*");
 	}  
	j=0;                   //left
	 
 
	 
	for(i1;i1<k-1;i1++){   //right
	 printf("*");	
	}i1=0;                //right
	
printf("\n");
}
}



void rightstar(void){
int n=0,i=0,k=0;
 printf("enter star size:");
 scanf("%d",&n);

for(k;k<=n;k++){
	
	for(i;i<k;i++){
	 printf("*");	
	}
	i=0;
printf("\n");
}

}




void leftstar(void){

int n=0,i=0,k=0,j=0;
 printf("enter star size:");
 scanf("%d",&n);
for(k;k<n;k++){
	
	for(i;(i<(n-k));i++){
	 printf(" ");	
	}
	i=0;
	for(j;(j<(k));j++){
         printf("*");
 	}  
	j=0;
printf("\n");

}}
