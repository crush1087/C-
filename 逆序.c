#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse(char* str)
{
	assert(str);
	int len = strlen(str);
	char* left=str;
	char* right=str + len - 1;
	while(left<right)
	{
		char tmp= *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[256] = { 0};
	scanf("%s",arr);
	reverse(arr);
	printf("逆序后的字符串：%s\n",arr);
	return 0;
}
