#include<stdio.h>
#include<stdlib.h>
int main() {
    int ch,i,n;
    char fake;
    do{
        system("cls");
        printf("Main Menu:\n");
        printf("1] Even Numbers:\n");
        printf("2] odd Numbers:\n");
        printf("3] Factorial:\n");
        printf("4] Exit:\n");
        printf("Enter Ur Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            i=2;
            while(i<=10)
            {
                printf("%d,",i);
                i=i+2;
            }
            break;
 
            case 2:
            i=1;
            while(i<=10)
            {
                printf("%d,",i);
                i=i+2;
            }
            break;
            case 3:
            printf("Enter Number:");
            scanf("%d",&n);
            i=1;
            while(n>=1)
            {
                i=i*n;
                n--;
            }
            printf("Factorial:%d\n",i);
            break;
            case 4:
            printf("Good bye.....\n");
            break;
            default:
            printf("WRONG OPTION.....\n");
        }
        printf("\n");
        printf("Press enter key to continue.......");
        fflush(stdin);
        scanf("%c",&fake);
    }
    while(ch!=4);
}

2. #include<stdio.h>
void main()
{
    int a,b,ch,s,m,d,div;
    do{
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Main menu\n");
    printf("1] Addition\n");
    printf("2] Subtraction\n");
    printf("3] Multiplication\n");
    printf("4] Division\n");
    printf("5] Exit\n");
    printf("Enter ur choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        s=a+b;
        printf("%d",s);
    break;
    case 2:
    d=a-b;
    printf("%d",d);
    break;
 
    case 3:
    m=a*b;
    printf("%d",m);
    break;
 
    case 4:
    div=a/b;
    printf("%d",div);
    break;
 
    case 5:
    printf("Good bye.....\n");
    break;
    default:
    printf("Wrong option....\n");
    }
    printf("\n");
    }while(ch==1);
}


3. write a c program to print day of week name using switch & case.
-----------------------------------------------------------------
#include<stdio.h>
void main()
{
    int d;
        printf("Enter day:");
        scanf("%d",&d);
        switch(d)
        {
            case 1:
            printf("MONDAY\n");
            break;
            
            case 2:
            printf("TUESDAY\n");
            break;
            
            case 3:
            printf("WEDNESDAY\n");
            break;
            
            case 4:
            printf("THURSDAY\n");
            break;
            
            case 5:
            printf("FRIDAY\n");
            break;
            
            case 6:
            printf("SATURDAY\n");
            break;
            
            case 7:
            printf("SUNDAY\n");
            break;
            
            default:
            printf("wrong option");
        }
        printf("\n");
}

4.write a c program to check whether an alphabet is vowel or constant using switch & case.
------------------------------------------------------------------------------------------

#include<stdio.h>
void main()
{
     char x;
     printf("Enter character: ");
     scanf("%c",&x);
     switch(x)
     {
         case 'a':
         
         case 'e':
         
         case 'i':

         case 'o':
         
         case 'u':

         case 'A':

         case 'E':

         case 'I':

         case 'O':

         case 'U':
         printf("%c is a vowel\n",x);
         break;
         default:
         printf("%c is a constant\n",x);
     }
}

5.write a c program to print total no.of days in a month using switch & case.
-------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
    int m;
    printf("Enter month 1-12:");
    scanf("%d",&m);
    switch(m)
    {
        case 1:
        printf("January has 31 days\n");
        break;
        
        case 2:
        printf("February has 28 or 29 days\n");
        break;
        
        case 3:
        printf("March has 31 days\n");
        break;
        
        case 4:
        printf("April has 30 days\n");
        break;
        
        case 5:
        printf("May has 31 days\n");
        break;
        
        case 6:
        printf("June has 30 days\n");
        break;
        
        case 7:
        printf("July has 31 days\n");
        break;
        
        case 8:
        printf("August has 31 days\n");
        break;
        
        case 9:
        printf("September has 30 days\n");
        break;
        
        case 10:
        printf("October has 31 days\n");
        break;
        
        case 11:
        printf("November has 30 days\n");
        break;
        
        case 12:
        printf("December has 31 days\n");
        break;
        default:
        printf("invalid month\n");
    }
}
6.write a c program to find maximum between two numbers using swith & case.
----------------------------------------------------------------------------
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    switch(a>=b)
    {
        case 1:
        printf("%d is a maximum number\n",a);
        break;
        
        case 2:
        printf("%d is a maximum number\n",b);
        break;
        default:
        printf("both are same");
    }
}
7.write a c program to check whether a number is even or odd using switch & case.
----------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    switch(n%2)
    {
        case 0:
        printf("%d is EVEN\n",n);
        break;
        case 1:
        printf("%d is ODD\n",n);
        break;
        default:
        printf("Invalid number\n");
    }
}
8.write a c program to create Simple calculater using switch case.
#include<stdio.h>
void main()
{
    int a,b,x;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Enter operators(1=+,2=-,3=*,4=/):");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("%d",a+b);
        break;
        
        case 2:
       printf("%d",a-b);
        break;
        
        case 3:
        printf("%d",a*b);
        break;
        
        case 4:
        printf("%d",a/b);
        break;
        
        default:
        printf("invalid no..");
    }
}
