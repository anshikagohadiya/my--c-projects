sum of  corresponding elements by pointers and
----------------------------------------------------------------
#include<stdio.h>
#include<malloc.h>
void main()
{
	int *x,*y,*z,i,n;
	printf("How many strings u want to store:");
	scanf("%d",&n);
	x=(int*)malloc(n*sizeof(int));
	y=(int*)malloc(n*sizeof(int));
	z=(int*)malloc(n*sizeof(int));
 for(i=0;i<n;i++)
 {
 	printf("Enter value for x @ %d:",i);
 	scanf("%d",x+i);
 
 	printf("Enter value for y @ %d:",i);
 	scanf("%d",y+i);
 }
 for(i=0;i<n;i++)
 {
 	z[i]=x[i]+y[i];
 	printf("%d,",z[i]);
 }
free(x);
free(y);
free(z);
}

merging
----------------
#include<stdio.h>
#include<malloc.h>
void main()
{
	int *x,*y,*z,i,n,m;
	printf("Enter number @ x:");
	scanf("%d",&n);
	printf("Enter number @ y:");
	scanf("%d",&m);
	x=(int*)malloc(n*sizeof(int));
	y=(int*)malloc(m*sizeof(int));
	z=(int*)malloc((n+m)*sizeof(int));
 for(i=0;i<n;i++)
 {
 	printf("Enter value for x @ %d:",i);
 	scanf("%d",x+i);
 }
 for(i=0;i<m;i++){
 	printf("Enter value for y @ %d:",i);
 	scanf("%d",y+i);
 }
 for(i=0;i<n;i++)
 {
 	z[i]=x[i];
 }
 for(i=0;i<m;i++)
 {
 	z[n+i]=y[i];
 }
for(i=0;i<n+m;i++)
{
	printf("%d,",z[i]);
}
free(x);
free(y);
free(z);
}



->Insertion
-----------------
#include<stdio.h>
#include<malloc.h>
void main()
{
   int *x,i,n,p;
 
   x=(int*)malloc(10*sizeof(int));
 
   for(i=0;i<=8;i++)
   {
   	printf("Enter value @ x[%d]:",i);
   	scanf("%d",x+i);
   }
 
   printf("Enter no u want to insert:");
   scanf("%d",&n);

   printf("Enter position:");
   scanf("%d",&p);
 
   for(i=8;i>=p;i--)
   {
   	*(x+i+1)=*(x+i);
   }
   *(x+p)=n;
   for(i=0;i<=9;i++)
   {
   	printf("%d,",*(x+i));
   }
   free(x);
}

->Deletion
--------------
#include<stdio.h>
#include<malloc.h>
void main()
{
   int *x,i,p;
 
   x=(int*)malloc(10*sizeof(int));
 
   for(i=0;i<=8;i++)
   {
   	printf("Enter value @ x[%d]:",i);
   	scanf("%d",x+i);
   }
 
   printf("Enter position:");
   scanf("%d",&p);
 
   for(i=p;i<=8;i++)
   {
     *(x+i)=*(x+i+1);
   }
   for(i=0;i<=7;i++)
   {
   	printf("%d,",*(x+i));
   }
   free(x);
}

-> Linear search
------------------------
#include<stdio.h>
#include<malloc.h>
void main()
{
   int *x,i,n;
 
   x=(int*)malloc(10*sizeof(int));
 
   for(i=0;i<=9;i++)
   {
   	printf("Enter value @ %d:",i);
   	scanf("%d",x+i);
   }
 
   printf("Enter no. u want to search:");
   scanf("%d",&n);
 
   for(i=0;i<=9;i++)
   {
     if(*(x+i)==n)
     {
	  printf("%d,",i);
	     }
	 }
   free(x);
}

#include<stdio.h>
#include"array.h"
void main()
{
	int x[10],y[3],z[8],i;
	getArray(x,9);
	getArray(y,3);
	putArray(x,9);
	insert(x,9,12,4);
	putArray(x,10);
	del(x,10,3);
	putArray(x,9);
	concat(x,5,y,3,z);
	putArray(z,8);
}

#include<stdio.h>
void getArray(int*x,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter value @ %d:",i);
		scanf("%d",x+i);
	}
}

void putArray(int*x,int n)
{
	int i;
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d,",x[i]);
	}
}

void sort(int*x,int n)
{
   int i,j,t;
   for(i=0;i<n;i++)
   {
   	 for(j=0;j<(n-1)-i;j++)
   	{
   		if(x[j]>x[j+1])
   		{
   			t=x[j];
   			x[j]=x[j+1];
   			x[j+1]=t;
        }
      }
	}
}

void insert(int*x,int n,int value,int p )
{
 int i;
 for(i=n-1;i>=p;i--)
    {
        x[i+1]=x[i];
    }
    x[p]=value;
}

void del(int*x,int n,int p)
{
	int i;
	for(i=p;i<n-1;i++)
   {
      x[i]=x[i+1];
   }
}

void concat(int*x,int n,int*y,int m,int*z)
{
    int i;

    for(i=0;i<n;i++)
    {
        z[i]=x[i];
    }
    for(i=0;i<m;i++)
    {
        z[n+i]=y[i];
    }
}
