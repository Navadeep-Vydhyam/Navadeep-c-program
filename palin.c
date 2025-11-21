#include<stdio.h>
void main()
{
	int n,r,rev=0,t,i;
	printf("enter n value");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
	r=n%10;
	rev=rev*10+r;
	n=n/10;	
	}
	if(t==rev)
	printf("it is palindrome");
	else
	printf("not a palindrome");
}
