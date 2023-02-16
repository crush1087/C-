#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Swap(char* buf1,char* buf2,int width)
{
	int i=0;
	for(i=0;i<width;i++)
	{
		char tmp= *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base,int sz,int width,int (*cmp)(void* e1 , void* e2 ))
{
	int i=0;
	//趟数
	for(i=0;i<sz-1;i++)
	{
		//每一趟比较的对数
		int j=0;
		for(j=0;j<sz-1-j;j++)
		{
			//两个元素的比较
			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				//交换
				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
			}
		}
	}
}
int cmp_int(const void*e1,const void* e2)
{
	//比较两个整型值
	return *(int*)e1 - *(int*)e2;
}
void text4()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	//使用bubble_sort的程序员一定知道自己排序的是数据
	//就应该知道如何比较待排序数组中的元素
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);

}
int main()
{
	text4();
	return 0;
}
