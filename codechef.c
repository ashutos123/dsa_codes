int main(void) {
int x,y,t,i;
printf("enter the   no of test case \n");
scanf("%d",&t);
for(i=0;i<t;i++)
{printf("enter the prices of cabs \n");
scanf("%d%d",&x,&y);
if(x>y)
printf("second \n");
else
printf("first \n");}

	return 0;
}
