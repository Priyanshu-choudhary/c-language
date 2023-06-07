#include<stdio.h>
#include<string.h>
struct mystructure{
char name[6];
int rollno;
int class;
//bool result; 
}si;

struct test{
int a;
int b;
char c;
float f;
}t={11,22,'A',3.14};

int main(){

//struct mystructure si;

strcpy(si.name,"yadi");
si.rollno=1260;
si.class=13;

printf("%s\n",si.name);
printf("%d\n",si.class);
printf("%d\n",si.rollno);

printf("values changed\n");
struct mystructure si1={"yadi2",32,22};

printf("%s\n",si1.name);
printf("%d\n",si1.class);
printf("%d\n",si1.rollno);

printf("structure test=\n");
printf("%d  %d  %c  %f",t.a,t.b,t.c,t.f);


return 0;
}
