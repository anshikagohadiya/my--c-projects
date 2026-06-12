1].#include<stdio.h>
int main()
{
   unsigned char x;
   for(x=0;x<=254;x++)
   {
       printf("%d-%c,",x,x);
   }
}

2].#include<stdio.h>
int main()
{
   unsigned char x;
   for(x='A';x<='Z';x++)
   {
       printf("%c,",x);
   }
}

3].#include<stdio.h>
int main()
{
   unsigned char x;
   printf("Enter number:");
   scanf("%c",&x);
   if(x>='a'&& x<='z')
   {
   	x=x-32;
   }
       printf("%c,",x);
   
}
4].
#include<stdio.h>
int main()
{
   unsigned char x;
   printf("Enter character:");
   scanf("%c",&x);
   
  if(x>='A'&& x<='Z')
  {
  	printf("It is uppercase letter.........\n ");
   } 
   else if(x>='a'&& x<='z')
   {
   	printf("It is lowercase letter..........\n ");
   }
   else if(x>='0'&& x<='9')
   {
   	printf("It is digit.........\n ");
   }
   else if(x==' ')
   {
   	printf("It is space........\n ");
   }
   else
   {
   	printf("special character.......\n");
   }
}
5].
#include<stdio.h>
int main()
{
   unsigned char x;
   printf("Enter character:");
   scanf("%c",&x);
   
  if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||
     x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
     {
     	printf("It is vowel");
	 }
	 else if(x>='a'&& x<='z'||x>='A'&& x<='z')
	 {
	  	printf("It is consonent");
	 }
	 else 
	 {
     	printf("It is not an alphabet");
	 }
}
6].swap case
------------
#include<stdio.h>
int main()
{
    char x;
    printf("Enter character:");
    scanf("%c",&x);
    if(x>='a'&&x<='z')
    {
        x=x-32;
    }
    else if(x>='A'&&x<='Z')
    {
     x=x+32;
    }
    printf("swaping value: %c",x);
}
7.
ABCDEF
ABCDEF
ABCDEF
ABCDEF
ABCDEF
#include <stdio.h>
void main() {
    char i;
    int j;
    for(i=1;i<=5;i++)
    {
        for(j=65;j<=70;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}
8.
A
AB
ABC
ABCD
ABCDE
ABCDEF
#include <stdio.h>
void main() {
    char i;
    int j;
    for(i=65;i<=70;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}
#include <stdio.h>
void main() {

    char i;
    int j;
    for(i='A';i<='E';i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}
9.
ABCDEF
ABCDE
ABCD
ABC
AB
A
#include <stdio.h>
void main() {
    char i;
    int j;
    for(i='F';i>='A';i--)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}
10.
A
BB
CCC
DDDD
EEEEE
#include <stdio.h>
void main() {
    char i;
    int j;
    for(i='A';i<='E';i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
}
11.
EDCBA
DCBA
CBA
BA
A
#include <stdio.h>
void main() {
    char i;
    int j;
    for(i='E';i>='A';i--)
    {
        for(j=i;j>='A';j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}
12.

ABCDEFEDCBA
ABCDE EDCBA
ABCD   DCBA
ABC     CBA
AB       BA
A         A
#include <stdio.h>

int main() {
    int n = 6;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("%c", 'A' + j);
        }

        if (i == 0) {
            for (int j = n - 2; j >= 0; j--) {
                printf("%c", 'A' + j);
            }
        } else {
            for (int j = 0; j < 2 * i - 1; j++) {
                printf(" ");
            }
            for (int j = n - i - 1; j >= 0; j--) {
                printf("%c", 'A' + j);
            }
        }

        printf("\n");
    }

    return 0;
} 
