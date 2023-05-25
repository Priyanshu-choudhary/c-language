#include <stdio.h>

char returnString(char[2]);

int main(){
char a[]="A1";
returnString(a);
}

char returnString(char b[]){
printf("your string=%s",b);

return 0;
}
