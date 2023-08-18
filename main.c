#include <stdio.h>
#include <stdlib.h>

int main()
{  long n;
    int i=0;
 printf("enter a number");
scanf("%ld",&n);
    do{
         i++;
    n=n/10;
    }while(n!=0);
     printf("i=%d\n",i);
    return 0;
}
