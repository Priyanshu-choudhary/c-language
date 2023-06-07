#include<stdio.h>
#include<string.h>
struct mystructure{
char name[6];
int rollno;
int class;
//bool result; 
};

int main(){

struct mystructure si;

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


return 0;
}
