#include <stdio.h>

int main()
{
	int num;
	scanf("%d",&num);
	int a=1,b=1,current=1;
	char select = 'b';
	
	for(int i = 1; i < num; i++)
	{	
		if(select == 'b' && b == current)
		{
			b++;
			select = 'a';
			current++;
			continue;
		}
		else if(select == 'a' && a == current)
		{
			a++;
			select = 'b';
			current++;
			continue;
		}
		if(select == 'b')
		{
			b++;
			a--;
		}
		else
		{
			a++;
			b--;
		}
	}
	printf("%d/%d",a,b);
	
	return 0;
}
