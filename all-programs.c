1.find binary to decimal
----------------------
#include<stdio.h>
void main()
{
	int n,r,s=0,p=1;
	printf("Enter number:"); 25
	scanf("%d",&n);
	while(n)
	{
		r=n%2;
		s=s+(r*p);
		p=p*10;
		n=n/2;

	}
		printf("%d",s);

}
s=0,1,1,1001
p=1,10,100,1000,10000
n=25,12,6,3,1
10000+1001=11001

2.find decimal to binary
------------------------
#include<stdio.h>
void main()
{
	int n,r,s=0,p=1;
	printf("Enter number:");11001
	scanf("%d",&n);
	while(n)
	{
		r=n%10;
		s=s+(r*p);
		p=p*2;
		n=n/10;

	}
		printf("%d",s);

}


3.find the prime factors of any number:
--------------------------------------
#include<stdio.h>
void main()
{
	int n,i=2;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	while(n>1)
	{
		if(n%i==0)
		{
			printf("%d,",i);
			n=n/i;
		}
	 else
	 {
	 	i++;
	 }
	}
}

4.write a c program to print all natural numbers from 1 to n using while loop
-----------------------------------------------------------------------------
#include<stdio.h>
void main()
{
    int n,i=1;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d,",i);
        i++;
    }
}

5.write a c program to print all naturals number in reverse(from n to 1) using while loop
-----------------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    while(n>=1)
    {
 
        printf("%d,",n);
         n--;
    }
}

6.write a c program to print all even numbers between 1 to 100 using while loop
-------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
    int n,i=1;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%d,",i);
        }
        i++;
    }
}

7.write a c program to print all odd numbers between 1 to 100 using while loop
------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
    int n,i=1;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0)
        {
            printf("%d,",i);
        }
        i++;
    }
}

8.write a c program to print sum of all even numbers between 1 to n
-----------------------------------------------------------------
#include<stdio.h>
void main()
{
    int n,i=1,s=0;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            s=s+i;
        }
        i++;
    }
    printf("%d,",s);

}

9.write a c program to print sum of all odd numbers between 1 to n
----------------------------------------------------------------
#include<stdio.h>
void main()
{
    int n,i=1,s=0;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0)
        {
            s=s+i;
        }
        i++;
    }
    printf("%d,",s);

}

10.write a c program to print table of any number
----------------------------------------------

#include<stdio.h>
void main()
{
    int n,i=1,t;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=10)
    {
       t=n*i;
       printf("%dx%d=%d\n",n,i,t);
      i++;
    }

}

11.write a c program to enter any number and calculate sum of all natural numbers between 1 to n
--------------------------------------------------------------------------------------------------

#include<stdio.h>
void main()
{
    int n,i=1,s=0;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
     s=s+i;
      i++;
    }
    printf("sum=%d",s);

}

12.write a c program to find first and last digit of any number
-----------------------------------------------------------------
#include<stdio.h>
void main()
{
    int n,l,r;
    printf("Enter number:");
    scanf("%d",&n);
    l=n%10;
    while(n>=10)
    {
     n=n/10;
    }
    r=n;
    printf("%d,",r);
    printf("%d",l);
}

13.write a c program to count numbers of digits in any number
-----------------------------------------------------------
#include<stdio.h>
void main()
{
    int n,c=0,r;
    printf("Enter number:");
    scanf("%d",&n);

    while(n)
    {
        r=n%10;
        c=c+1;
     n=n/10;
    }
    printf("%d",c);
 
}

14.write a c program to calculate sum of digits of any number
-----------------------------------------------------------
#include<stdio.h>
void main()
{
    int n,s=0,r;
    printf("Enter number:");
    scanf("%d",&n);

    while(n)
    {
        r=n%10;
        s=s+r;
     n=n/10;
    }
    printf("%d",s);
 
}

15.write a c program to calculate product of digits of any number
---------------------------------------------------------------
#include<stdio.h>
void main()
{
    int n,p=1,r;
    printf("Enter number:");
    scanf("%d",&n);

    while(n)
    {
        r=n%10;
        p=p*r;
     n=n/10;
    }
    printf("%d",p);
 
}

16.write a c program to swap first and last digits of any number
---------------------------------------------------------------
#include<stdio.h>
void main()
{
    int n,r;
    printf("Enter number:");
    scanf("%d",&n);
 
    while(n)
    {
        r=n%10;
        printf("%d",r);
     n=n/10;
    }
 
 
}

17.write a c program to find sum of first and last digit of any number
--------------------------------------------------------------------
#include<stdio.h>
void main()
{
    int n,r,l;
    printf("Enter number:");
    scanf("%d",&n);
    l=n%10;
    while(n>=10)
    {

     n=n/10;
    }
    r=n+l;
    printf("%d",r);
 
 
}

18.write a c program to any enter any number and print all factors of the number
---------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
    int n,i=1;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
  if (n%i==0)
  {
    printf("%d,",i);
    }
    i++;
    }
 
 
}

19.write a c program to enter any number to calculate its factorial
----------------------------------------------------------------
#include<stdio.h>
void main()
{
    int n,i=1,t=1;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
     t=t*i;
    i++;
    }
    printf("%d,",t);
}

20.write a c program to enter any number and print its reverse
-------------------------------------------------------------
#include<stdio.h>
void main()
{
    int n,r;
    printf("Enter number:");
    scanf("%d",&n);
    while(n)
    {
     r=n%10;
     printf("%d",r);
     n=n/10;
    }
}

21.write a c program to enter any number and check whether  the number is palindrome
------------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
    int n,r,t=0,m;
    printf("Enter number:"); ex=121,131,1001
    scanf("%d",&n);
    m=n;
    while(n)
    {
     r=n%10;
     t=t*10+r;
     n=n/10;
    }
    if(m==t)
    {
        printf("palindrome no..........");
    }
    else
    {
        printf("not a palindrome no.....");
    }
}

22.write a c program to check whether a number is Armstrong number or not
-----------------------------------------------------------------------
#include<stdio.h>
void main()
{
    int n,r,s=0,m;
    printf("Enter number:"); ex=153,370,407
    scanf("%d",&n);
    m=n;
    while(n)
    {
     r=n%10;
     s=s+r*r*r;
     n=n/10;
    }
    if(s==m)
    {
        printf("Armstrong no..........");
    }
    else
    {
        printf("not a Armstrong  no.....");
    }

23.write a c program to check whether a number is perfect number or not
----------------------------------------------------------------------------
#include<stdio.h>
void main()
{
    int n,r,s=0,p=1;
    printf("Enter number:"); ex=6,28,496
    scanf("%d",&n);
 
    while(n)
    {
     r=n%10;
     s=s+r;
     p=p*r;
     n=n/10;
    }
    if(s==p)
    {
        printf("perfect  no..........");
    }
    else
    {
        printf("not a perfect  no.....");
    }
}

24.write a c program to check whether a number is prime number or not
--------------------------------------------------------------------
#include <stdio.h>
void main()
{
    int i=2,n;
    printf("Enter number:"); (numbers that divide by 1 otherwise itself is called prime numbers. )
    scanf("%d",&n);           (Ex-1,7,19,5,3)
    while(i<n)
    {
        if(n%i==0)
        {
            break;
        }
        i++;
    }
    if(i==n)
    {
        printf("prime number=%d",n);
    }
    else
    {
        printf(" not a prime number=%d",n);

    }
}

25.write a c program to print all prime numbers between 1 to n .
--------------------------------------------------------------

#include <stdio.h>
void main()
{
    int i=2,n,j;
    printf("Enter number:"); (Ex-20-2,3,5,7,11,13,17,19)
    scanf("%d",&n);
    while(i<n)
 
    {
        j=2;
        while (j<i){
     if(i%j==0)
        {
            break;
        }
        j++;
    }
    if(i==j)
    {
        printf("%d,",i);
    }
    i++;
    }
}

26.write a c program to print all Armstrong no. between 1 to n.
--------------------------------------------------------------
#include<stdio.h>
void main()
{
    int n,i=1,t,s,r;
    printf("Enter number:");
    scanf("%d",&n);
 
    while(i<=n)
    {
     s=0;
      t=i;
        while(t>0){
        r=t%10;
        s=s+r*r*r;
    t=t/10;
        }
        if (s==i)
        {
            printf("%d,",i);
        }
        i++;
    }
 
27.write a c program to print all perfect numbers between 1 to n.
----------------------------------------------------------------

#include<stdio.h>
void main()
{
    int n,i=1,s,j;
    printf("Enter number:");
    scanf("%d",&n);
 
    while(i<=n)
    {
     j=1;
     s=0;
     while(j<i){
         if (i%j==0)
         {
          s=s+j;
         }
        j++;
     }
 
    if(s==i)
    {
        printf("%d,",i);
    }
    i++;
    }
28.write a c program to enter any numbers and print its prime factors.
-------------------------------------------------------------------

#include<stdio.h>
void main()
{
    int n,i=2;
    printf("Enter numbers:"); (ex-35)
    scanf("%d",&n);
    while(n>1)
    {
        if(n%i==0)
        {
            printf("%d,",i);
            n=n/i;
        }
        else
        {
            i++;
        }
    }
}

29.write a c program to find sum of all prime numbers between 1 to n.
---------------------------------------------------------------------
#include <stdio.h>
void main()
{
    int n,i=2,j,s=0;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
        j=2;
        while(j<i)
        {
            if(i%j==0)
            {
                break;
            }
            j++;
        }
        if(j==i)
        {
            s=s+i;
        }
        i++;
    }
    printf("sum=%d",s);
}

