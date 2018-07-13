#include <stdio.h>
#include <stdlib.h>

//Binary digital conversion

int main()
{
    int n, dec=0, j=1, nsave, rem, d;
    printf("Enter the binary number: ");
    scanf("%d", &n);

    nsave=n;

    while(n>0)
    {
        rem=n%10;
        d=rem*j;
        dec+=d;
        j*=2;
        n/=10;
    }

    printf("The decimal number was %d and it's conversion is %d \n", nsave,dec);
    return 0;
}
