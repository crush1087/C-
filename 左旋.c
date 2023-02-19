#include<stdio.h>
#include<string.>
#include<assert.h>
void reverse(char*left,char*right)
{
	assert(left!=NULL);
	assert(right!=NULL);
	while(left<right)
	{
		char tmp=*left;
		*left=*right;
		*right=tmp;
		left++;
		right--;
	}
}
void left_move(char *arr,int k)
{
	assert(arr);
	int len=strlen(arr);
	if(k<=len)
	{
	  reverse(arr,arr+k-1);//逆序左边
	  reverse(arr+k,arr+len-1);//逆序右边
	  reverse(arr,arr+len-1);//逆序整体
	}
	else
		printf("输入错误,输入值大于字符串长度\n");
}
int main()
{
	char arr[256]={0};
	scanf("%s",arr);
	int a=0;
	scanf("%d",&a);
	left_move(arr,a);
	printf("%s\n",arr);
	return 0;
}
