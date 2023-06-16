#include <stdio.h>

int main()
{
	int n,m;
	int num=0,box=0,kg=0;
	scanf("%d %d",&n,&m);
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&num);
		
		if(kg+num > m)
		{
			box++;
			kg = 0;
		}
		
		kg += num;
	}
	
	if(kg+num > m || kg > 0)
	{
		box++;
	}
	
	printf("%d",box);
	
	return 0;
}
