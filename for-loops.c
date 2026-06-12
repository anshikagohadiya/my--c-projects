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
2.
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
3.
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
4.
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
5.
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

6.
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
7.
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

8.
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
9.
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
10.
10001
01010
00100
01010
10001

11.
01110
10001
10001
10001
01110

12.
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

13.
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

14.
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
15.
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

16.
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
17.
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

18.
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

19.
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
20.
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
21.
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
22.
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
23.
                    *
                   ***
                  *****
                 *******
                *********
#include <stdio.h>
void main() {
    int i=1,j,sps=20;
    for(i=1;i<=9;i=i+2)
 {
        for(j=1;j<=sps;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
            
        }
        sps--;
        printf("\n");
 }
}
24.
                    *********
                     *******
                      *****
                       ***
                        *
#include <stdio.h>
void main() {
    int i,j,sps=20;
    for(i=9;i>=1;i=i-2)
 {
        for(j=1;j<=sps;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
            
        }
        sps++;
        printf("\n");
 }
}
25.
*****
*   *
*   *
*   *
*****
#include <stdio.h>
void main() {
    int i,j;
    for(i=1;i<=5;i++)
{
        for(j=1;j<=5;j++)
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
        }
        printf("\n");
}
}
