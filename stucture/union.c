#include<stdio.h>
union test{
int a;
char b;
float c;

}try;

int main(){
try.a=1233;
printf("union initial try.a value=%d\n",try.a);
printf("union try.b value=%c\n",try.b);
printf("union try.f value=%f\n",try.c);


try.b='A';
printf("union after change try.avalue=%d\n",try.a);
printf("union try.b value=%c\n",try.b);
printf("union try.f value=%f\n",try.c);

return 0;
}
