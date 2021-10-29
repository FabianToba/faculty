#include <stdio.h>

int f[10];

unsigned max(unsigned n)
{
    unsigned num=0,i;
    while(n)
    {
	f[n%10]++;
	n/=10;
    }
    for(i=9;i>=1;i--)
    {
	while(f[i])
	    {
		num=num*10+i;
		f[i]--;
	    }
    }
    return num;
}
int main()
{
    printf("The maximum number is %d\n",max(234));
    printf("%d\n",max(1542));
    printf("%d\n",max(634));
    return 0;
}