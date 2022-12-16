#include<stdio.h>
#include<string.h>
#define N 1000
int n; 
struct Student//定义结构体 
{
	char name[20];
	char number[30];
	int score1;
	int score2;
	int score3;
	int score4;
	int score5;//int score[5]
	int total;
};
struct Student a[N];

void input()//自定义函数（输入学生的个数和他们的姓名，学号，成绩） 
{

	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",&a[i].name);
	    scanf("%s",&a[i].number);
	    scanf("%d",&a[i].score1);
	    scanf("%d",&a[i].score2);
	    scanf("%d",&a[i].score3);
	    scanf("%d",&a[i].score4);
	    scanf("%d",&a[i].score5);
	    a[i].total=a[i].score1+a[i].score2+a[i].score3+a[i].score4+a[i].score5;
	}
	
}
void disp()//输出 
{

	for(int i=0;i<n;i++)
	printf("%s %s total=%d\n",a[i].name,a[i].number,a[i].total);
}

void mysort()//根据成绩排序名次 
{
	struct Student t;
	for(int i=0;i<n-1;i++)
	    for(int j=1;j<n-i;j++)
	        if(a[j].total>a[j-1].total)
	        {
	        	t=a[j];
	        	a[j]=a[j-1];
	        	a[j-1]=t;
			}
}

int main()
{
	
	input();
	mysort();
	disp();
	 
	return 0;
}
