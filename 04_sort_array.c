#include <stdio.h>
void sort(int *a,int n);
int main() {
    int a[]={1,4,3,5,2};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,n);
    return 0;
}
void sort(int *a,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            a[i]^=a[j]^=a[i]^=a[j];
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
}
