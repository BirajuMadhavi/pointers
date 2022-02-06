#include <stdio.h>
void swap(int*,int*);
int main() {
    int a=2,b=3;
    printf("Before swapping a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping a=%d,b=%d\n",a,b);
    return 0;
}
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
