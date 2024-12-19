

#include<stdio.h>
void main()
{int arr[]={3,1,6,5,2,4,7,8,9,15};


int l,mid,r,key=15,n=10;
l=0;r=n-1;mid=(l+r)/2;
while(l<=r)
{if(arr[mid]<key)

l=mid+1;
else
if(arr[mid]==key)
{printf("%d found at location %d",key,mid);
break;
}
else
r=mid-1;
mid=(l+r)/2;
}
if(l>r)
printf("%d is not present in the array",key);
return 0;


}

