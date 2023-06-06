#include<stdio.h>
#include<unistd.h>
int main (){

for (int i=0;i<60;i++){
sleep(1);
printf("secounds=%d\n",i);
}
return 0;
}
