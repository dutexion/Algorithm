#include <stdio.h>

int main()
{
	int num,stu,gen,pap,h;
	int arr[200];
	
	scanf("%d",&num);
	
	for(int i = 0; i < num; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	scanf("%d",&stu);
	
	for(int i = 0; i < stu; i++)
	{
		scanf("%d %d",&gen,&pap);
		
		if(gen == 1)
		{
			h = 1;
			while(pap*h-1 < num)
			{
				arr[pap*h-1] = !arr[pap*h-1];
				h++;
			}
		}
		else
		{
			h = 0;
			while(arr[pap-h-1] == arr[pap+h-1] && (pap-h-1 >= 0 && pap+h-1 < num))
			{
				if(h == 0)
				{
					arr[pap-h-1] = !arr[pap-h-1];
					h++;	
					continue;
				}
				arr[pap-h-1] = !arr[pap-h-1];
				arr[pap+h-1] = !arr[pap+h-1];
				h++;		
			}
		}
	}
	
	h = 1;
	
	for(int i = 0; i < num; i++)
	{
		if(i == 20*h)
		{
			printf("\n");
			h++;
		}
		printf("%d ",arr[i]);
	}
	return 0;
}
