#include<stdio.h>
int main()
{
	int money=0;
	int total=0;
	int empty=0;
	scanf("%d",&money);
	//买回来的
	total=money;
	empty=total;
	//换回来的
	while(empty>=2)
	{
		total+= empty / 2;
		empty=empty/2 + empty % 2;

	}
	printf("%d\n",total);
	return 0;
}
