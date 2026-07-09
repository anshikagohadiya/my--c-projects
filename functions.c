to find the sum
-----------------
#include<stdio.h>
int sum(int x,int y,int z)
{
	int a;
	a=x+y+z;
	return a;
}
void main()
{
	int t;
	t=sum(100,200,500);
	printf("%d\n",t);
}

to find the max value
---------------------
#include<stdio.h>

int max(int x,int y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
void main()
{
	int t;
	t=max(55,33);
	printf("%d\n",t);
}

to check the char is true or false
-----------------------------------
#include<stdio.h>
int isupper(char ch)
{
	if(ch>='A'&&ch<='Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	int k;
	k=isupper('a');
	printf("%d\n",k);
}


to convert the lwrcase in upper
---------------------------------
#include<stdio.h>
int toupper(char ch)
{
	if(ch>='a'&&ch<='z')
	{
		return ch-32;
	}
	else
	{
		return ch;
	}
}
void main()
{
	int t;
	t=toupper('a');
	printf("%c\n",t);
}

to find out the sum of first n numbers
---------------------------------------
#include<stdio.h>

int sum(int n)
{
	int s=0,i=1;
	while(i<=n)
   {
   	s=s+i;
   	i++;
   }
   	return s;
}
void main()
{
	int t;
	t=sum(50);
	printf("%d\n",t);
	t=sum(100);
	printf("%d\n",t);
}
to print table of any number by using fn
----------------------------
#include<stdio.h>

void table(int n)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%dx%d=%d\n",n,i,n*i);
	}
}
void main()
{
	table(20);
}


1.to reverse the num by using fn
---------------------------
#include<stdio.h>

int rev(int n)
{
	int r,s=0;
	while(n){
	r=n%10;
	s=s*10+r;
	n=n/10;
}
	return s;
}
void main()
{
	int t;
	t=rev(12345);
	printf("%d\n",t);
	t=rev(54321);
	printf("%d\n",t);
}

2.to count digits by using fn
-------------------------

#include<stdio.h>

int countdigit(int n)
{
	int c=0,r;
	while(n)
	{
		r=n%10;
		c=c+1;
		n=n/10;
	}
	return c;
}
void main()
{
	int t;
	t=countdigit(12345);
	printf("%d\n",t);
}

3.find out the sum of digits by using fn
-------------------------------------

#include<stdio.h>

int sumdigit(int n)
{
	int s=0,r;
	while(n)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	return s;
}
void main()
{
	int t;
	t=sumdigit(12345);
	printf("%d\n",t);
}

4.decimal to binary by using fn
-----------------------------
#include<stdio.h>

int decimaltobinary(int n)
{
	int r,s=0,p=1;
	while(n)
	{
	 r=n%2;
	 s=s+(r*p);
	 p=p*10;
	 n=n/2;
	}
	return s;
}
void main ()
{
	int t;
	t=decimaltobinary(25);
	printf("%d\n",t);
}

5.binary to decimal by using fn
------------------------------

#include<stdio.h>

int binarytodecimal(int n)
{
	int r,s=0,p=1;
	while(n)
	{
	 r=n%10;
	 s=s+(r*p);
	 p=p*2;
	 n=n/10;
	}
	return s;
}
void main ()
{
	int t;
	t=binarytodecimal(11001);
	printf("%d\n",t);
}

6.to check whether the no. is armstrong or not by using fn
-----------------------------------------------------------
#include<stdio.h>

int isarmstrong(int n)
{
	int s=0,r,m;
	m=n;
	while(n)
	{
	r=n%10;
	s=s+r*r*r;
	n=n/10;
	}
	if(s==m)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	int t;
	t=isarmstrong(153);
	printf("%d\n",t);
}

7.to check whether the no. is perfect or not by using fn
---------------------------------------------------------

#include<stdio.h>

int isperfect(int n)
{
	int s=0,r,p=1;
	while(n)
	{
	r=n%10;
	s=s+r;
	p=p*r;
	n=n/10;
	}
	if(s==p)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	int t;
	t=isperfect(22);
	printf("%d\n",t);
}

8.to check whether the no. is prime or not by using fn
---------------------------------------------------------
#include<stdio.h>

int isprime(int n)
{
	int i=2;
    if(n<=1)
	{
	return 0;
	}
	while (i<n)
	{
		if(n%i==0)
		{
			return 0;
		}
		i++;
	}
	return 1;
}
void main()
{
	int t;
	t=isprime(7);
	printf("%d\n",t);
}


#include<stdio.h>

void range(int min,int max,int d)
{
	int i;
	for(i=min;i<=max;i=i+d)
	{
		printf("%d,",i);
	}
}
void main()
{
	range(10,100,10);
}
