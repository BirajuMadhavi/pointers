#include<stdio.h>
void copy(int*,int);
int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    copy(a,n);
}
void copy(int *p,int n)
{
    int b[n];
    int i=0;
    for(i=0;i<n;i++)
    {
        b[i]=*p;
        p++;
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",b[i]);
    }
}
