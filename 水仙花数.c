#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>
int main()
{
	int i=0;
	for(i=0;i<100000;i++)
	{
		//判断是否为水仙花数
		//1.计算i的位数，n位数
		int n=1;
		int tmp=i;
		int sum=0;
		int a=0;
		while(tmp/=10)
		{
			n++;
		}
		//2.计算i的每一位的n次方之和 sum
		tmp=i;
		while(tmp)
		{
			a=tmp%10;
			sum=sum + pow ((double)a,n);
			tmp/=10;
		}
		//3.比较i==sum
		if(i==sum)
		{
			printf("%d  ",i);
		}
	}
	return 0;
}
