30.print 12345 four times.
--------------------------

#include <stdio.h>

void main() {
    int i=1,j;
    while(i<=4)
    {
        j=1;
        while(j<=5)
        {
            printf("%d",j);
            j++;
        }
        i++;
        printf("\n");
    }
}

31.print 13579 five times.
----------------------------
#include <stdio.h>

void main() {
    int i=1,j;
    while(i<=5)
    {
        j=1;
        while(j<=9)
        {
            printf("%d",j);
            j=j+2;
        }
        i++;
        printf("\n");
    }
}

32.print *(star) five times.
--------------------------

#include <stdio.h>

void main() {
    int i=1,j;
    while(i<=5)
    {
        j=1;
        while(j<=5)
        {
            printf("*");
            j=j+1;
        }
        i++;
        printf("\n");
    }
}
33.print the series.
-------------------
11111
22222
33333
44444
55555

#include <stdio.h>

void main() {
    int i=1,j;
    while(i<=5)
    {
        j=1;
        while(j<=5)
        {
            printf("%d",i);
            j=j+1;
        }
        i++;
        printf("\n");
    }
34.print 246810 five times.
---------------------------
#include <stdio.h>

void main() {
    int i=1,j;
    while(i<=5)
    {
        j=2;
        while(j<=10)
        {
            printf("%d",j);
            j=j+2;
        }
        i++;
        printf("\n");
    }
}

35.print the series.
----------------------
222222
444444
666666
888888

#include <stdio.h>

void main() {
    int i=2,j;
    while(i<=8)
    {
        j=1;
        while(j<=6)
        {
            printf("%d",i);
            j=j+1;
        }
        i=i+2;
        printf("\n");
    }
}

36. print 1010101 five times.
-------------------------------
#include <stdio.h>
void main() {
    int i=1,j;
    while(i<=5)
    {
        j=1;
        while(j<=7)
        {
            printf("%d",j%2);
            j=j+1;
        }
        i=i+1;
        printf("\n");
    }
}

37.print the series.
---------------------
111111
000000
111111
000000

#include <stdio.h>
void main() {
    int i=1,j;
    while(i<=4)
    {
        j=1;
        while(j<=6)
        {
            printf("%d",i%2);
            j=j+1;
        }
        i=i+1;
        printf("\n");
    }
}

38.print the series.
----------------------
1
12
123
1234
12345

#include <stdio.h>
void main() {
    int i=1,j;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            printf("%d",j);
            j=j+1;
        }
        i=i+1;
        printf("\n");
    }
}

39. print the series.
---------------------
1
123
12345
1234567
123456789

#include <stdio.h>
void main() {
    int i=1,j;
    while(i<=9)
    {
        j=1;
        while(j<=i)
        {
            printf("%d",j);
            j=j+1;
        }
        i=i+2;
        printf("\n");
    }
}

40.print the series.
-------------------
12345
1234
123
12
1

#include <stdio.h>
void main() {
    int i=5,j;
    while(i>=1)
    {
        j=1;
        while(j<=i)
        {
            printf("%d",j);
            j=j+1;
        }
        i=i-1;
        printf("\n");
    }
}

41.print the series.
---------------------
10,20,30,40,50,
10,20,30,40,50,
10,20,30,40,50,
10,20,30,40,50,
10,20,30,40,50,

#include <stdio.h>
void main() {
    int i=1,j;
    while(i<=5)
    {
        j=10;
        while(j<=50)
        {
            printf("%d,",j);
            j=j+10;
        }
        i=i+1;
        printf("\n");
    }
}
42.print the series.
--------------------
10,10,10,10,
20,20,20,20,
30,30,30,30,
40,40,40,40,
50,50,50,50,

#include <stdio.h>
void main() {
    int i=10,j;
    while(i<=50)
    {
        j=1;
        while(j<=4)
        {
            printf("%d,",i);
            j=j+1;
        }
        i=i+10;
        printf("\n");
    }
}

43. print the series.
--------------------
99999
77777
55555
33333
11111


#include <stdio.h>
void main()
{
   int i=9,j;
   while(i>=1)
   {
       j=1;
       while(j<=5)
       {
           printf("%d",i);
           j=j+1;
       }
       i=i-2;
       printf("\n");
   }
}

print the 97531 five times.
----------------------------------
#include <stdio.h>
void main()
{
   int i=1,j;
   while(i<=5)
   {
       j=9;
       while(j>=1)
       {
           printf("%d",j);
           j=j-2;
       }
       i=i+1;
       printf("\n");
   }
}

45. print the series.
---------------------
54321
5432
543
54
1
#include <stdio.h>
void main() {
    int i=5,j;
    while(i>=1)
    {
        j=i;
        while(j>=1)
        {
            printf("%d",j);
            j=j-1;
        }
        i=i-1;
        printf("\n");
    }
}
46. print the series.
---------------------
5
54
543
5432
54321


#include <stdio.h>
void  main() {
   int i=5,j;
    while(i>=1)
        {
            j=5;
            while(j>=i)
                {
                 printf("%d",j);
                    j=j-1;
                }
            i=i-1;
            printf("\n");
        }
}

47. print the series.
---------------------------
1
22
333
4444
55555


#include <stdio.h>
void main()
{
   int i=1,j;
   while(i<=5)
   {
       j=1;
       while(j<=i)
       {
           printf("%d",i);
           j=j+1;
       }
       i=i+1;
       printf("\n");
   }
}
48. print the series.
---------------------
97531
9753
975
97
9

#include <stdio.h>
void main() {
    int i=1,j;
    while(i<=9)
    {
        j=9;
     while(j>=i)
           {
            printf("%d",j);
            j=j-2;
            }
           ;
        i=i+2;
        printf("\n");
}

 
}


49.print the series.
--------------------
55555
4444
333
22
1

#include <stdio.h>
void main()
{
   int i=5,j;
   while(i>=1)
   {
       j=1;
       while(j<=i)
       {
           printf("%d",i);
           j=j+1;
       }
       i=i-1;
       printf("\n");
   }
}
50.print the series.
----------------------
12345
2345
345
45
5

#include <stdio.h>
void main() {
    int i=1,j;
    while(i<=5)
    {
        j=i;
     while(j<=5)
                    {
            printf("%d",j);
            j=j+1;
                    }
        i++;
        printf("\n");
 
    }
}

51.print the series.
-----------------------
54321
4321
321
21
1

#include <stdio.h>
void main() {
    int i=5,j;
    while(i>=1)
    {
        j=i;
     while(j>=1)
                    {
            printf("%d",j);
            j=j-1;
                    }
        i--;
        printf("\n");
 
    }
}
52.print the series.
-------------------
12345
23456
34567
45678

#include <stdio.h>
void main() {
    int i=1,j;
    while(i<=4)
    {
        j=i;
     while(j<=4+i)
                    {
            printf("%d",j);
            j=j+1;
                    }
        i++;
        printf("\n");
 
    }
}
53.print the series.
----------------------
10203040
20304050
30405060
40506070

#include <stdio.h>
void main() {
    int i=10,j;
    while(i<=40)
    {
        j=i;
     while(j<=i+30)
           {
            printf("%d",j);
            j=j+10;
            }
           ;
        i=i+10;
        printf("\n");
}
}

54.print the series.
-------------------
80706050
70605040
60504030
50403020

#include <stdio.h>
void main() {
    int i=80,j;
    while(i>=50)
    {
        j=i;
     while(j>=i-30)
           {
            printf("%d",j);
            j=j-10;
            }
           ;
        i=i-10;
        printf("\n");
}
}

55.print the series.
-------------------
123456789
234567
345
43
5
#include <stdio.h>
void main() {
    int i=1,j,k=9;
    while(i<=3)
    {
        j=i;
     while(j<=k)
           {
            printf("%d",j);
            j=j+1;
            }
        k=k-2    ;
        i++;
        printf("\n");
}
printf("43\n5");
}
1
24
135
2468
13579
#include<stdio.h>
void main()
{
    int i=1,j;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            if(i%2==1)
            {
            printf("%d",2*j-1);}
            else
            {
                printf("%d",2*j);
            }
            j=j+1;
        }
        i=i+1;
        printf("\n");
    }
}   
10101
01010
10101
01010
10101

#include<stdio.h>
void main()
{
    int i=1,j;
    while(i<=5)
    {
        j=1;
        while(j<=5)
        {
            if((i+j)%2==0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
      j++;
        }
        i++;
 printf("\n");
}
}
1.                  *
                   ***
                  *****
                 *******
                *********

#include <stdio.h>
void main() {
    int i=1,j,sps=20;
    while(i<=9)
 {
        j=1;
        while(j<=sps)
        {
            printf(" ");
            j++;
        }
 
    
        j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        i=i+2;
        sps--;
        printf("\n");

 }
}

2.                  *********
                     *******
                      *****
                       ***
                        *

#include <stdio.h>
void main() {
    int i=9,j,sps=20;
    while(i>=1)
 {
        j=1;
        while(j<=sps)
        {
            printf(" ");
            j++;
        }
 
    
        j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        i=i-2;
        sps++;
        printf("\n");

 }
}
3. square
*****
*   *
*   *
*   *
*****


#include <stdio.h>
void main() {
    int i=1,j;
    while(i<=5)
{
        j=1;
        while(j<=5)
        {
            if(i==1||i==5)
         {   printf("*");}
         else
         {
             if(j==1||j==5)
             {
                 printf("*");
             }
             else
             {
                 printf(" ");
             }
         }
            j++;
        }
        i=i+1;
 
        printf("\n");
}
}
4.
*****
*****
*****
*****
*****

#include<stdio.h>
void main()
{
    int i=1,j;
    while(i<=5)
    {
        j=1;
        while(j<=5)
        {
            printf("*");
            j=j+1;
        }
        i=i+1;
        printf("\n");
    }

}

5.
               *****  
              *****
             *****
            *****
           *****

#include<stdio.h>
void main()
{
    int i=1,j,sps=20;
    while(i<=5)
    {
        j=1;
        while(j<sps-i)
        {
            printf(" ");
            j++;
        }
        printf("*****\n");
        i++;
    }
}

6.             *****  
                *****
                 *****
                  *****
                   *****

#include <stdio.h>
void main()
{
    int i=1,j;
    while(i<=5)
    {
        j=i;
        while(j>1)
        {
            printf(" ");
            j--;
        }
        printf("*****\n");
        i++;
    }
}

7.
*
**
***
****
***** 
#include<stdio.h>
void main()
{
    int i=1,j,n;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        i++;
        printf("\n");
    }
}
8.
*****
****
***
**
*
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter number:");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        i--;
        printf("\n");
    }
}
9.
*****
 *   *
  *   *
   *   *
    *****
#include<stdio.h>
void main()
{
    int n,i=1,j;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
        j=1;
        while(j<i)
        {
            printf(" ");
            j++;
        }
        j=1;
        while(j<=n)
        {
         if(i==1||i==n||j==1||j==n)
         {
             printf("*");
         }
         else
         {
             printf(" ");
         }
         j++;
        }
        i++;
        printf("\n");
        
    }
}

#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
         if(i==1||i==n||j==1||j==n)
         {
             printf("*");
         }
         else
         {
             printf(" ");
         }
        }
        printf("\n");
    }
}

10.

    *****
   *   *
  *   *
 *   *
*****
#include<stdio.h>
void main()
{
    int n,i=1,j;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
        j=1;
        while(j<=n-i)
        {
            printf(" ");
            j++;
        }
        j=1;
        while(j<=n)
        {
         if(i==1||i==n||j==1||j==n)
         {
             printf("*");
         }
         else
         {
             printf(" ");
         }
         j++;
        }
        i++;
        printf("\n");
        
    }
}
11.
*
**
* *
*  *
*****

#include<stdio.h>
void main()
{
int i=1,j,n;
printf("Enter number:");
scanf("%d",&n);
while(i<=n)
{
    j=1;
    while(j<=i)
    {
        if(i==n||j==i||j==1)
        {
            printf("*");
        }
        else
        {
          printf(" ")  ;
        }
        j++;
        }
        i++;
        printf("\n");
}
}
12.
    *
   **
  ***
 ****
*****
#include<stdio.h>
void main()
{
int i=1,j,n;
printf("Enter number:");
scanf("%d",&n);
while(i<=n)
{
    j=1;
    while(j<=n-i)
    {
        printf(" ");
        j++;
}
j=1;
while(j<=i)
{
    printf("*");
    j++;
}
i++;
printf("\n");
}
}
13.
    *
   **
  * *
 *  *
*****
#include<stdio.h>
void main()
{
    int n,i=1,j;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=n)
{
    j=1;
    while(j<=n-i)
    {
        printf(" ");
        j++;
    }
    j=1;
        while(j<=i)
        {
            if(i==n||j==1||j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            j++;
        }
        i++;
        printf("\n");
}
}
14.
*****
*  *
* *
**
*

#include <stdio.h>

int main() {
      int i=1,n,j;
      printf("Enter number:");
      scanf("%d",&n);
      while(i<=n)
      {
          j=1;
          while(j<=n-i+1)
          {
              if(i==1||i==n||j==1||j==n-i+1)
              {
                  printf("*");
              }
              else
              {
                  printf(" ");
              }
              j++;
          }
          i++;
          printf("\n");
      }
} 
11111
11111
11111
11111
11111

#include<stdio.h>
void main()
{
    int i=1,j;
    while(i<=5)
    {
        j=1;
        while(j<=5)
        {
            printf("%d",1);
            j++;
        }
        i++;
        printf("\n");
    }
}

2.
111111
000000
111111
000000

#include<stdio.h>
void main()
{
    int i=1,j;
    while(i<=4)
    {
        j=1;
        while(j<=6)
        {
            printf("%d",i%2);
            j++;
        }
        i++;
        printf("\n");
    }
}

3.
01010
01010
01010
01010
01010

#include<stdio.h>
void main()
{
    int i=1,j;
    while(i<=5)
    {
        j=1;
        while(j<=5)
        {
            if(j%2==1)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
      j++;
        }
        i++;
 printf("\n");
}
}
4.
11111
10001
10001
10001
11111

#include <stdio.h>
void main() {
    int i=1,j;
    while(i<=5)
{
        j=1;
        while(j<=5)
        {
            if(i==1||i==5)
         {   printf("1");}
         else
         {
             if(j==1||j==5)
             {
                 printf("1");
             }
            if(j==2||j==3||j==4)
            {
                printf("0");
            }
         }
            j++;
        }
        i=i+1;
 
        printf("\n");
}
}
5.
11111
11111
11011
11111
11111

#include<stdio.h>
void main()
{
    int i=1,j;
    while(i<=5)
    {
        j=1;
        while(j<=5)
        {
        if(i==3&&j==3)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
            j++;
        }
        i++;
        printf("\n");
    }
}

6.
10101
01010
10101
01010
10101


7.
11011
11011
00000
11011
11011

#include <stdio.h>
void main() {
    int i=1,j;
    while(i<=5)
{
        j=1;
        while(j<=5)
        {
        
             if(i==3||j==3)
             {
                 printf("0");
             }
            else
            {
                printf("1");
            }
         
            j++;
        }
        i=i+1;
 
        printf("\n");
}
}
8.
12345
12345
12345
12345
12345

#include<stdio.h>
void main()
{
    int i=1,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d",j);
        }
    
    printf("\n");
    }  
}
9.
11111
22222
33333
44444
55555

#include<stdio.h>
void main()
{
    int i=1,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d",i);
        }
    
    printf("\n");
    }  
}
10.
11111
11111
11111
11111
11111
#include<stdio.h>
void main()
{
    int i=1,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d",1);
        }
    
    printf("\n");
    }  
}
11.
12345
23456
34567
45678

#include<stdio.h>
void main()
{
    int i=1,j;
    for(i=1;i<=4;i++)
    {
        
        for(j=i;j<=4+i;j++)
        {
            printf("%d",j);
        }
    
    printf("\n");
    }  
}
12.
11111
00000
11111
00000

#include<stdio.h>
void main()
{
    int i=1,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d",i%2);
        }
        printf("\n");
    }
}

13.
11011
11011
00000
11011
11011

#include <stdio.h>
void main() {
    int i,j;
    for(i=1;i<=5;i++)
{
        for(j=1;j<=5;j++)
        {
        
             if(i==3||j==3)
             {
                 printf("0");
             }
            else
            {
                printf("1");
            }
        }
        printf("\n");
}
}
14.
11111
11111
11011
11111
11111
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==3&&j==3)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
            printf("\n");
    }
}

15.
11111
10001
10001
10001
11111

#include <stdio.h>
void main() {
    int i,j;
    for(i=1;i<=5;i++)
{
        j=1;
        for(j=1;j<=5;j++)
        {
            if(i==1||i==5)
         {   printf("1");}
         else
         {
             if(j==1||j==5)
             {
                 printf("1");
             }
            if(j==2||j==3||j==4)
            {
                printf("0");
            }
         }
        }
        printf("\n");
        
}
}
16.
01010
01010
01010
01010
01010

#include <stdio.h>
void main() {
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j%2==1)
            {
                printf("0");
            }
            else
            {
            printf("1");
            }
        }
        printf("\n");
    }
}
17.
10001
01010
00100
01010
10001

18.
01110
10001
10001
10001
01110

19.
12345
678910
1112131415
1617181920
2122232425

#include <stdio.h>
void main() {
    int i,j,n=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d",n);
            n++;
        }
        
        printf("\n");
    }
}

20.
55555
54444
54333
54322
54321

#include <stdio.h>
void main() {
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=1;j--)
        {
            if (j>=i)
            {
            printf("%d",j);}
            else
            {
                printf("%d",i);
            }
        }
        printf("\n");
    }
}

21.
1
22
333
4444
55555

#include <stdio.h>
void main() {
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
        
    }
}
22.
55555
4444
333
22
1

#include <stdio.h>
void main() {
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",i);
        }
        printf("\n");
        
    }
}

23.
11111
2222
333
44
5

#include <stdio.h>
void main() {
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf("%d",i);
        }
        printf("\n");
        
    }
}
24.
5
44
333
2222
11111

#include <stdio.h>
void main() {
    int i,j,n=5;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",n);
        }
        n--;
        printf("\n");
        
    }
}

25.
1
12
123
1234
12345

#include <stdio.h>
void main() {
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}

26.
12345
1234
123
12
1

#include <stdio.h>
void main() {
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
27.
54321
4321
321
21
1

#include <stdio.h>
void main() {
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
28.
5
54
543
5432
54321

#include <stdio.h>
void main() {
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
29.
5
45
345
2345
12345

#include <stdio.h>
void main() {
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=6-i;j<=5;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
30.
12345
2345
345
45
5
#include <stdio.h>
void main() {
    int i=1,j;
    while(i<=5)
    {
        j=i;
      while(j<=5)
        {
            printf("%d",j);
            j++;
        }
        i++;
        printf("\n");
    }
}

31.
1
23
345
4567
56789

#include <stdio.h>
void main() {
    int i=1,j;
    while(i<=5)
    {
        j=0;
      while(j<i)
        {
            printf("%d",i+j);
            j++;
        }
        i++;
        printf("\n");
    }
}

33.
56789
4567
345
23
1

#include<stdio.h>
void main()
{
    int i=5,j;
    while(i>=1)
    {
        j=0;
        while(j<i)
        {
            printf("%d",i+j);
            j++;
        }
        i--;
        printf("\n");
    }
}
34.
13579
3579
579
79
9

#include<stdio.h>
void main()
{
    int i=1,j;
    while(i<=9)
    {
        j=i;
        while(j<=9)
        {
            printf("%d",j);
            j=j+2;
        }
        i=i+2;
        printf("\n");
    }
}

35.
1
10
101
1010
10101

#include<stdio.h>
void main()
{
    int i=1,j;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            if(j%2==1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
      j++;
        }
        i++;
 printf("\n");
}
}
36.
1
00
111
0000
11111

#include<stdio.h>
void main()
{
    int i=1,j;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
      printf("%d",i%2);
      j++;
        }
        i++;
 printf("\n");
}
}
37.
1
123
12345
1234567
123456789

#include <stdio.h>
void main() {
    int i=1,j;
    while(i<=9)
    {
        j=1;
        while(j<=i)
        {
            printf("%d",j);
            j=j+1;
        }
        i=i+2;
        printf("\n");
    }
}
38.
1	
2	3	
4	5	6	
7	8	9	10	
11	12	13	14	15

#include<stdio.h>
void main()
{
    int i=1,j,n=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            printf("%d\t",n);
            n++;
            j=j+1;
        }
        i=i+1;
        printf("\n");
    }
}
