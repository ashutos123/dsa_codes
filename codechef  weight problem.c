#include <stdio.h>

int main(void) {
	int t,w,x,y,z;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d%d%d%d",&w,&x,&y,&z);
if((w==x || w==y || w==z) || (w==x+y || w==y+z || w==x+z) )
	    printf("yes \n");
	    else
	    printf("no \n");

	}
	return 0;
}
