#include<stdio.h>
#include<string.h>

#include<assert.h>
void* my_memmove(void*dest ,const void*src,size_t count)
{
	void* ret=dest;
	assert(dest!=NULL);
	assert(src!=NULL);
	if(dest<src)
	{
		//从前向后拷贝
		while(count--)
		{
			*(char*)dest=*(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		//从后往前拷贝
		while(count--)
		{
			*((char*)dest+count)=*((char*)src+count);

		}
	}
	return ret;
}
int main()
{
	int arr3[]={1,2,3,4,5,6,7,8,9,10};
	my_memmove(arr3,arr3+2,20);

	return 0;
}
