#include<stdio.h>
void bubble_sort(int arr[], int sz)
{
	int  i=0;

	for(i=0;i<sz-1;i++)
	{
		//每一趟冒泡排序
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j] >arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
}
int main()
{
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	//对arr进行排序-排成升序
	//arr是数组，我们对数组进行传参的 时候，实际上传递过去的 是arr首元素
	bubble_sort(arr,sz);
	for(i=0;i<sz;i++)
	{
	printf("%d ",arr[i]);
	}
	return 0;
}
