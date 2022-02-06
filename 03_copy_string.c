#include<stdio.h>
void copy(char*);
int main()
{
    char a[]="helloworld";
    copy(a);
}
void copy(char *p)
{
    char b[15];
    int i=0;
    while(1)
    {
        b[i]=*p;
        if(b[i]=='\0')
        break;
        p++;
        i++;
    }
    printf("Copied string is %s\nLength of new string is %d",b,i);
}
