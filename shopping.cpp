#include <stdio.h>

int main()
{
	int x;
	int n;
	int a,b,sum=0;
	scanf("%d\n",&x);
	scanf("%d\n",&n);
	
	for (int i = 0; i<n; i++)
	{
		scanf("%d %d",&a,&b);
		sum += (a*b);
	}
	if(sum == x)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
