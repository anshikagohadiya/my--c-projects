1.
#include<stdio.h>
void main()
{
    int x[5];
    int i;
    for(i=0;i<=4;i++)
    {
    	printf("Enter number @ %d:",i);
        scanf("%d,",&x[i]);
    }
    for(i=0;i<=4;i++)
    {
    	printf("%d,",x[i]);
	}
}

2.
#include<stdio.h>
void main()
{
    int x[]={27,80,5,88};
    int i;
    for(i=0;i<=4;i++)
    {
        printf("%d,",x[i]);
    }
}
3.TO CHECK EVEN NUMBERS
-----------------------
#include<stdio.h>
void main()
{
	int x[10],i;
	for(i=0;i<=9;i++)
	{
		printf("Enter number @ %d:",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<=9;i++)
	{
		if(x[i]%2==0)
		{
			printf("%d,",x[i]);
		}
	}
}
4.LINEAR SEARCH
----------------
#include<stdio.h>
void main()
{
	int x[10],i,n;
	for(i=0;i<=9;i++)
	{
		printf("Enter number @ %d:",i);
		scanf("%d,",&x[i]);
	}
	printf("Enter number u want to search:");
	scanf("%d",&n);
	for(i=0;i<=9;i++)
	{
		if(x[i]==n)
		{
			printf("%d,",i);
		}
	}
}
5.FIND SUM
------------

#include<stdio.h>
void main()
{
	int x[10],i,s=0;
	for(i=0;i<=9;i++)
	{
		printf("Enter number @ %d:",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<=9;i++)
{
printf("%d,",x[i]);
s=s+x[i];
	}
	printf("sum:%d",s);
}
6.searching betwwen 20 & 40
----------------------------
#include<stdio.h>
void main()
{
	int x[10],i;
	for(i=0;i<=9;i++)
	{
		printf("Enter value @ %d :",i);
		scanf("%d",&x[i]);
	
	}
	printf("Enters numbers betwwen 20 & 40\n");
	for(i=0;i<=9;i++)
	{
		if(x[i]>=20 && x[i]<=40)
		{
			printf("%d,",x[i]);
		}
	}
}
7.minimum and maximum
----------------------
#include<stdio.h>
void main()
{
	int x[10],i;
	int min,max;
	for(i=0;i<=9;i++)
	{
		printf("Enter value @ %d :",i);
		scanf("%d",&x[i]);
	
	}
	printf("Enter min range and max range\n");
	scanf("%d%d",&min,&max);
	for(i=0;i<=9;i++)
	{
		if(x[i]>=min && x[i]<=max)
		{
			printf("%d,",x[i]);
		}
	}
}
	
8.Input 10 numbers from keyboard and find out the occurance of specified elements.
----------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
    int x[10],i,c=0,n;
    for(i=0;i<=9;i++)
    {
        printf("Enter value @ %d:",i);
        scanf("%d",&x[i]);
    }
    printf("Enter number u want to search:");
    scanf("%d",&n);
    for(i=0;i<=9;i++)
    {
        if(x[i]==n)
        {
            c++;
        }
    }
     printf("%d",c);
}
9.
#include<stdio.h>
void main()
{
    int x[10],i,a=0,b=0,c=0,d=0;
    for(i=0;i<=9;i++)
    {
    	printf("Enter percentage value @ %d:",i);
    	scanf("%d",&x[i]);
	}
	for(i=0;i<=9;i++)
	{
		if(x[i]>=80&&x[i]<=100)
		{
	      a++;
		}
		else if(x[i]>=60&&x[i]<=79)
		{
			b++;
		}
		else if(x[i]>=40&&x[i]<=59)
		{
			c++;
		}
		else if(x[i]>=0&&x[i]<=39)
		{
			d++;
		}
	}
	printf("A grade:%d\nB grade:%d\nC grade:%d\nD grade:%d\n",a,b,c,d);
}
10.
#include<stdio.h>
void main()
{
    int x[10],y[10],i;
    for(i=0;i<=9;i++)
    {
    	printf("Enter value @ %d:",i);
    	scanf("%d",&x[i]);
	}
	for(i=0;i<=9;i++)
	{
		y[i]=x[9-i];
		printf("%d,",y[i]);
	}
}
11.
#include<stdio.h>
void main()
{
    int x[10],y[10],i;
    for(i=0;i<=9;i++)
    {
    	printf("Enter value @ %d:",i);
    	scanf("%d",&x[i]);
 
	}
	for(i=0;i<=9;i++)
	{
		y[i]=x[i];
		printf("%d,",y[i]);
	}
}
12.
#include<stdio.h>
void main()
{
    int x[10],y[10],z[10],i;
    for(i=0;i<=9;i++)
    {
    	printf("Enter value @ x[%d]:",i);
    	scanf("%d",&x[i]);
 
    	printf("Enter value @ y[%d]:",i);
    	scanf("%d",&y[i]);
	}
	for(i=0;i<=9;i++)
	{
		z[i]=x[i]+y[i];
		printf("%d,",z[i]);
	}
}
13.MERGING ARRAY
--------------------
#include<stdio.h>
void main()
{
    int x[5],y[3],z[8],i;
    for(i=0;i<=4;i++)
    {
        printf("Enter value @ x[%d]:",i);
        scanf("%d",&x[i]);
    }
    for(i=0;i<=2;i++)
    {
        printf("Enter value @ y[%d]:",i);
        scanf("%d",&y[i]);
    }
    for(i=0;i<=4;i++)
    {
      z[i]=x[i];
    }
    for(i=0;i<=2;i++)
    {
       z[i+5]=y[i] ;
    }
    for(i=0;i<=7;i++)
    {
        printf("%d,",z[i]);
    }
}
#include<stdio.h>
void main()
{
    int x[5],y[3],z[8],i;
    for(i=0;i<=4;i++)
    {
        printf("Enter value @ x[%d]:",i);
        scanf("%d",&x[i]);
    }
    for(i=0;i<=2;i++)
    {
        printf("Enter value @ y[%d]:",i);
        scanf("%d",&y[i]);
    }
for(i=0;i<=7;i++)
{
    if(i<=4)
    {
        z[i]=x[i];
    }
    else
    {
        z[i]=y[i-5];    }
}
    for(i=0;i<=7;i++)
    {
        printf("%d,",z[i]);
    }
}
15.find the largest no.
----------------------------
#include<stdio.h>
void main()
{
    int x[5],max,i;
    for(i=0;i<=4;i++)
    {
        printf("Enter value @ x[%d]:",i);
        scanf("%d",&x[i]);
    }
    max=x[0];
    for(i=1;i<=4;i++)
    {
        if(x[i]>max)
        {
        max=x[i];
    }
    }
    printf("%d",max);
    }
16.
#include<stdio.h>
void main()
{
    int x[10],y[10],j=0,i;
    for(i=0;i<=9;i++)
    {
        printf("Enter value @ x[%d]:",i);
        scanf("%d",&x[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(x[i]%2==0)
        {
            y[j]=x[i];
            j++;
        }
    }
    for(i=0;i<j;i++)
   { printf("%d,",y[i]);}
}
17. SORTED value in ascending order.
--------------------------------------
#include<stdio.h>
 void main()
 {
     int x[5],i,j,t;
     for(i=0;i<=4;i++)
     {
         printf("Enter value @ %d:",i);
         scanf("%d",&x[i]);
     }
     for(i=0;i<4;i++)
     {
         for(j=0;j<4-i;j++)
         {
             if(x[j]>x[j+1])
             {
                 t=x[j];
                 x[j]=x[j+1];
                 x[j+1]=t;
             }
         }
     }
     printf("Sorted value:\n");
     for(i=0;i<=4;i++)
     {
         printf("%d,",x[i]);
     }
 }
18.SORTED value in decending order.
--------------------------------------
#include<stdio.h>
 void main()
 {
     int x[5],i,j,t;
     for(i=0;i<=4;i++)
     {
         printf("Enter value @ %d:",i);
         scanf("%d",&x[i]);
     }
     for(i=0;i<4;i++)
     {
         for(j=0;j<4-i;j++)
         {
             if(x[j]<x[j+1])
             {
                 t=x[j];
                 x[j]=x[j+1];
                 x[j+1]=t;
             }
         }
     }
     printf("Sorted value:\n");
     for(i=0;i<=4;i++)
     {
         printf("%d,",x[i]);
     }
 }
19.find the largest element.
#include<stdio.h>
 void main()
 {
 int x[5],max,i;
 for(i=0;i<=4;i++)
 {
     printf("Enter value @ %d:",i);
     scanf("%d",&x[i]);
 }
 max=x[0];
 for(i=1;i<4;i++)
 {
     if(x[i]>max)
     {
        max=x[i];
     }
 }
 printf("largest value:%d",max);
 }
                    ARRAYS ASSIGNMENT
                 -----------------------
1.write a c program to read and print elements of array using recursion.
-------------------------------------------------------------------------

#include<stdio.h>
void main()
{
    int i,x[5];
    for(i=0;i<=4;i++)
    {
        printf("Enter value @ %d:",i);
        scanf("%d",&x[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("%d,",x[i]);
    }
}
2.write a c program to find sum of all array elements.
--------------------------------------------------------

#include<stdio.h>
void main()
{
    int i,x[5],s=0;
    for(i=0;i<=4;i++)
    {
        printf("Enter value @ %d:",i);
        scanf("%d",&x[i]);
    }
    for(i=0;i<=4;i++)
    {
        s=s+x[i];
    }
    printf("%d",s);
}

3.write a c program to find maximum and minimum element in an array.
----------------------------------------------------------------------
#include<stdio.h>
void main()
{
  int x[10],i,min,max;
  for(i=0;i<=9;i++)
  {
      printf("Enter value @ %d:",i);
      scanf("%d",&x[i]);
  }
  printf("Enter min range & max range:");
  scanf("%d%d",&min,&max);
  for(i=0;i<=9;i++)
  {
      if(x[i]>=min&&x[i]<=max)
      {
          printf("%d,",x[i]);
      }
  }
}

4.write a c program to find second largest element in an array.
----------------------------------------------------------------
#include<stdio.h>
 void main()
 {
 int x[5],max,i,s;
 for(i=0;i<=4;i++)
 {
     printf("Enter value @ %d:",i);
     scanf("%d",&x[i]);
 }
 if(x[0]>x[1])
 {
     s=x[1];
     max=x[0];
 }
 else
 {
      s=x[0];
     max=x[1];
 }
 for(i=2;i<=4;i++)
 {
     if(x[i]>max)
     {
         s=max;
        max=x[i];
     }
     else if(x[i]>s&&x[i]!=max)
     {
         s=x[i];
     }
 }
 printf("largest value:%d\n",max);
 printf("second largest value:%d",s);
 }

5.write a c program to copy all elements from an array to another array.
-------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
    int x[5]={1,2,3,4,5},y[5],i;
    for(i=0;i<=4;i++)
    {
        y[i]=x[i];
    }
    for(i=0;i<=4;i++){
    printf("%d,",y[i]);}
}
6.write a c program to print all unique elements in the array.
------------------------------------------------------------------
#include<stdio.h>
void main()
{
    int x[]={89,90,90,102,102,102,145,197,200,200,200,200,230};
    int i,j,t,c=0;
    for(i=0;i<=12;)
    {
        c=0;
        t=x[i];
        while(t==x[i])
    {
        c++;
        i++;
    }
    if(c==1)
    {
        printf("%d=%d\n",t,c);
    }
    }
}
7.write a c program to print all negative elements in an array.
-------------------------------------------------------------------
#include<stdio.h>
void main()
{
  int x[5]={10,-5,-8,-9,11};
  int i;
    for(i=0;i<=4;i++)
    {
        if(x[i]<0)
        {
            printf("Negative elements:%d\n",x[i]);
        }
    }
}
8.write a c program to count total number of even and odd elements in an array.
----------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
 int x[10],i,e=0,o=0;
 for(i=0;i<=9;i++)
 {
     printf("Enter value @ %d:",i);
     scanf("%d",&x[i]);
 }
 for(i=0;i<=9;i++)
 {
     if(x[i]%2==0)
     {
         e++;
     }
     else
     {
         o++;
     }
 }
 printf("Total even numbers:%d\n",e);
 printf("Total odd numbers:%d\n",o);
}
9.write a c program to count total number of negative elements in an array.
------------------------------------------------------------------------------
 #include<stdio.h>
void main()
{
 int x[10],i,c=0;
 for(i=0;i<=9;i++)
 {
     printf("Enter value @ %d:",i);
     scanf("%d",&x[i]);
 }
 for(i=0;i<=9;i++)
 {
     if(x[i]<=0)
     {
         c++;
     }
 }
 printf("Negative numbers:%d\n",c);
}
10. write a c program to count total number of duplicate elements of an array.
----------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
    int x[]={89,90,90,102,102,102,145,197,200,200,200,200,230};
    int i,j,t,c=0;
    for(i=0;i<=12;)
    {
        c=0;
        t=x[i];
        while(t==x[i])
    {
        c++;
        i++;
    }
    if(c>1)
    {
        printf("%d=%d\n",t,c);
    }
    }
}
11.write a c program to count frequency of each element in an array.
---------------------------------------------------------------------
#include<stdio.h>
void main()
{
    int x[]={12, 13,15,15,20,20,25,25,30,30};
    int i,j,t,c=0;
    for(i=0;i<=9;)
    {
        c=0;
        t=x[i];
        while(t==x[i])
    {
        c++;
        i++;
    }
        printf("%d=%d\n",t,c);
    }
}
12.write a c program to delete all duplicate elements from an array.
------------------------------------------------------------------------
#include <stdio.h>
int main() {
    int x[100], n, i, j, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(x[i] == x[j]) {
                  for(k = j; k < n - 1; k++) {
                    x[k] = x[k + 1];
                }
                n--;
                j--;      
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
}
13.write a c program to merge two array to third array.
--------------------------------------------------------
#include<stdio.h>
void main()
{
    int x[5],y[3],z[8],i;
    for(i=0;i<=4;i++)
    {
        printf("Enter value @ x[%d]:",i);
        scanf("%d",&x[i]);
    }
    for(i=0;i<=2;i++)
    {
        printf("Enter value @ y[%d]:",i);
        scanf("%d",&y[i]);
    }
for(i=0;i<=7;i++)
{
    if(i<=4)
    {
        z[i]=x[i];
    }
    else
    {
        z[i]=y[i-5];    }
}
    for(i=0;i<=7;i++)
    {
        printf("%d,",z[i]);
    }
}

#include<stdio.h>
void main()
{
 int x[10],y[8],z[18],i;
 for(i=0;i<=9;i++)
 {
     printf("Enter value @ x[%d]:",i);
     scanf("%d",&x[i]);
 }
 for(i=0;i<=7;i++)
 {
     printf("Enter value @ y[%d]:",i);
     scanf("%d",&y[i]);
 }
 for(i=0;i<=17;i++)
 {
    if(i<=9)
    {
        z[i]=x[i];
    }
    else
    {
        z[i]=y[i-10];
    }
 }
    for(i=0;i<=17;i++)
    {
        printf("%d,",z[i]);
    }
}
14.write a c program to find reverse of an array.
--------------------------------------------------
#include<stdio.h>
void main()
{
int x[5]={11,12,13,14,15};
int i,j=5;
for(i=j-1;i>=0;i--)
{
    printf("%d,",x[i]);
}
}
15.write a c program to put even and odd elements of array in two separate array.
----------------------------------------------------------------------------------
#include <stdio.h>
int main() {
    int x[100], even[100], odd[100];
    int n, i, e = 0, o = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    for(i = 0; i < n; i++) {
        if(x[i] % 2 == 0) {
            even[e] = x[i];
            e++;
        } else {
            odd[o] = x[i];
            o++;
        }
    }
    printf("\nEven elements are:\n");
    for(i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }
    printf("\nOdd elements are:\n");
    for(i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }
}
16.write a c program to insert an element from array.
--------------------------------------------------------
#include<stdio.h>
void main()
{
    int x[10],i,n,p;
    for(i=0;i<=8;i++)
    {
        printf("Enter value @ x[%d]:",i);
        scanf("%d",&x[i]);
    }
 
    printf("Enter no.u want to Insert:");
    scanf("%d",&n);
 
    printf("Enter the position:");
    scanf("%d",&p);
 
    for(i=8;i>=p;i--)
    {
        x[i+1]=x[i];
    }
    x[p]=n;
    for(i=0;i<=9;i++)
    {
        printf("%d,",x[i]);
    }
}
17.write a c program to delete an element from array.
------------------------------------------------------
#include<stdio.h>
void main()
{
    int x[10],i,p;
    for(i=0;i<=9;i++)
    {
        printf("Enter value @ x[%d]:",i);
        scanf("%d",&x[i]);
    }
 
    printf("Enter the position:");
    scanf("%d",&p);
 
    for(i=p;i<=8;i++)
    {
        x[i]=x[i+1];
    }
    for(i=0;i<=8;i++)
    {
        printf("%d,",x[i]);
    }
}
