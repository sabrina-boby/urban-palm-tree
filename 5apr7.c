#include<stdio.h>
int main()
{
    char a[30]="sabrina ",b[]="akter boby";
    int i=0,count=0,j=0;

    while(a[i]!='\0')
    {
        i++;
        count++;
    }

    while(a[j]!='\0')
    {
        a[count+j]=b[j];
        j++;
    }
    printf("a = %s\n",a);
}
