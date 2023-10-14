#include<stdio.h>
void main(){
    int c;
    static int d;
    int a=10,b=20;
    int *p,*q;
    p=&a;
 //   p=&a,&b; this is also store a because = precidence &a
 // p=(&a,&b); this stores b because here comes () its goes L to R 
 // *p=30; this will changes a value 30
    q=&b;
    printf("The value of a=%d\n",a);
    printf("The value of b=%d\n",b);
    printf("The adress of a=%u\n",&a);
    printf("The adress of b=%u\n",&b);
    printf("The value of p=%d\n",p);// the p will be stored adress of a
    printf("The value of q=%d\n",q);// the q will be store adrees of b
    printf("The p pointing value is=%d\n",*p);//the * is indireaction operator
    printf("The q pointing value is=%d\n",*q);
    printf("The adress of p=%u\n",&p); //the pointers will be have adress 
    printf("The adress of q=%u\n",&q);
    printf("%d\n",c); //this is auto type its stores garbage value its store in RAM
     printf("%d",d);//this is static type memory its also store in RAM
}