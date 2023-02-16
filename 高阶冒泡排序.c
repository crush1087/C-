#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
};
void qsort(void *base,
	       size_t num,
		   size_t width,
		   int(*cmp)(const void* e1,const void *e2)
		   );
int cmp_int(const void*e1,const void* e2)
{
	//比较两个整型值
	return *(int*)e1 - *(int*)e2;
}
void text1()
{
	int arr[10]={1,4,7,2,5,8,3,6,9,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]), cmp_int);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int cmp_float(const void*e1,const void* e2)
{
	//比较两个整型值
	return ((int)(*(float*)e1 - *(float*)e2));
}
void text2()
{
	float f[]={9.0,8.0,7.0,6.0,5.0,4.0};
	int sz=sizeof(f)/sizeof(f[0]);
	qsort(f,sz,sizeof(f[0]), cmp_float);
		int j=0;
	for(j=0;j<sz;j++)
	{
		printf("%f ",f[j]);
	}
	printf("\n");
}
int cmp_stu_by_age(const void*e1,const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void*e1,const void* e2)
{
	//比较名字-比较两个字符串，字符串比较不能直接用大于小于等于来比较
	//用strcmp比较函数
	return strcmp(((struct Stu*)e1)->name ,((struct Stu*)e2)->name);
}
void text3()
{
	struct Stu s[3]={{"张三",26},{"李四",22},{"王二",27}};
	int sz=sizeof(s)/sizeof(s[0]);
	qsort(s,sz,sizeof(s[0]), cmp_stu_by_name);
}
int main()
{
	text1();
	text2();
	text3();
	//bubble_sort(arr,sz);
	return 0;
}
