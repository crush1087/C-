#include<stdio.h>
#include<string.>
int is_left_move(char*str1,char*str2)
{
	int len1=strlen(str1);
	int len2=strlen(str2);
	if(len1!=len2)
		return 0;
	//在str1字符串中追加一个str1字符串
	strncat(str1,str1,len1);
	//strstr找字串
	char *ret=strstr(str1,str2);
	if(ret==NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char arr1[30]="abcdef";
	char arr2[]="cdef";
	int ret=is_left_move(arr1,arr2);
	if(ret==1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("NO\n");
	}

	return 0;
}
