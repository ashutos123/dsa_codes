
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value for calculating factorial=");
    scanf("%d", &n);
    int j = 2;
    int a[1000] = {0};
    a[0] = 1;
    int len = 1;
    int c = 0, num = 0;
    for(int j=2;j<=n;j++){
        c = 0;
        num = 0;
       for(c=0;c<len;c++){
            a[c] = a[c] * j;
            a[c] = a[c] + num;
            num = a[c] / 10;
            a[c] = a[c] % 10;
        }
        while(num!=0)
        {
            a[len] = num % 10;
            num = num / 10;
            len++;
        }
    }
    len--;
    printf("\n\nFactorial of %d is = ", n);
    while(len >= 0)
    {
        printf("%d", a[len]);
        len--;
    }
}
