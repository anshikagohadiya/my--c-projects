1.write a c program to find length of a string.
------------------------------------------------
#include<stdio.h>
void main()
{
	char x[30];
	int i;
	printf("Enter String:");
	gets(x);
	for(i=0;x[i];i++);
	printf("Length:%d",i);
}
      or
--------------
#include<stdio.h>
#include<string.h>
void main()
{
	char x[30];
	int l;
	printf("Enter string:");
	gets(x);
	l=strlen(x);
	printf("Length:%d\n",l);
}

2.write a c program to copy one string to another string.
-------------------------------------------------------------
#include<stdio.h>
void main()
{
	char x[30],y[30];
	int i;
	printf("Enter String:");
	gets(x);
    for(i=0;x[i];i++)
    {
    	y[i]=x[i];
}
       y[i]=0;
	printf("%s",y);
}
or
-----
#include<stdio.h>
#include<string.h>
void main()
{
	char x[30],y[30];
	printf("Enter string:");
	gets(x);
    strcpy(y,x);
	printf("%s\n",y);
}

3. write a c program to convert lowercase string to uppercase.
--------------------------------------------------------------
#include<stdio.h>
void main()
{
	char x[30];
	int i;
	printf("Enter String:");
	gets(x);
    for(i=0;x[i];i++)
    {
    	if(x[i]>='a'&&x[i]<='z')
    	{
    		x[i]=x[i]-32;
		}
	}
printf("Uppercase:%s",x);
}
 
4.write a c program to convert uppercase string to lowercase.
--------------------------------------------------------------
#include<stdio.h>
void main()
{
	char x[30];
	int i;
	printf("Enter string:");
	gets(x);
	for(i=0;x[i];i++)
	{
		if(x[i]>='A'&&x[i]<='Z')
		{
			x[i]=x[i]+32;
		}
	}
	printf("Lowercase:%s",x);
}
 
5.write a c program to toggle case of each character of string.
--------------------------------------------------------------
#include<stdio.h>
void main()
{
	char x[30];
	int i;
	printf("Enter string:");
	gets(x);
	for(i=0;x[i];i++)
	{
		if(x[i]%2==0){
	if(x[i]>='A'&&x[i]<='Z')
		{
			x[i]=x[i]+32;
		}
	}
		else if(x[i]>='a'&&x[i]<='z')
		{
			x[i]=x[i]-32;
		}
	}
	printf("%s",x);
}
6.write a c program to find total numbers of alphabets,digits,special characters in a string.
-----------------------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
	char x[30];
	int i,a=0,d=0,sc=0;
	printf("Enter string:");
	gets(x);
	for(i=0;x[i];i++)
	{
		if((x[i]>='A'&&x[i]<='Z')||(x[i]>='a'&&x[i]<='z'))
		{
		a++;
		}
		else if(x[i]>='0'&&x[i]<='9')
		{
			d++;
		}
		else
		{
			sc++;
		}
	}
	printf("alphabets:%d\n digits:%d\n special characters:%d\n",a,d,sc);
}
7.write a c program to count total numbers of vowels and consonents in string
--------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
	char x[30];
	int i,v=0,c=0;
	printf("Enter string:");
	gets(x);
	for(i=0;x[i];i++)
	{
	
		if((x[i]>='A'&&x[i]<='Z')||(x[i]>='a'&&x[i]<='z'))
		{
		if(x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U'||x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
		{
			v++;
			}
			else
			{
				c++;
				}
		}
	}
	printf("vowels:%d\n",v);
	printf("consonent:%d\n",c);
}
                                           OR
                                       ------------
#include<stdio.h>
void main()
{
	char x[30],y[]="AEIOUaeiou";
	int i,v=0,c=0,j;
	printf("Enter string:");
	gets(x);
	for(i=0;y[i];i++)
	{
     	for(j=0;x[j];j++)
	{
		if((x[i]>='A'&&x[i]<='Z')||(x[i]>='a'&&x[i]<='z'))
		{
	     if(y[i]==x[j])
		{
			v++;
			}
			else
			{
				c++;
				}
		}
	}
}
	printf("vowels:%d\n",v);
	printf("consonent:%d\n",c);
}


8.write a c program to count total numbers of words in string.
--------------------------------------------------------------
#include<stdio.h>
void main()
{
	char x[30];
	int i,c=0;
	printf("Enter string:");
	gets(x);
	for(i=0;x[i];i++)
{
	 if((i==0 && x[i]!=' ')||(x[i]!=' ' && x[i-1]==' '))
	 {
	 	c++;
	 }
}
printf("%d",c);
}
Write a C program to count occurrences of a word in a given string.
--------------------------------------------------------------------
#include<stdio.h>
#include<string.h>
void main()
{
	char x[100],y[20],word[20];
	int i,j,c=0;
	printf("Enter string:");
	gets(x);
	printf("Enter string to search?");
	gets(y);
	
	for(i=0;x[i];i++)
	{
		j=0;
		while(x[i]!=' ')
		{
			word[j]=x[i];
			j++;
			if(x[i+1]==0) break;
			i++;
		}
		word[j]=0;
		if(strcmpi(word,y)==0)
		{
			c++;
		}
	}
	printf("%d",c);
}

9.write a c program to find reverse of a string.
------------------------------------------------
#include<stdio.h>
void main()
{
	char x[30],y[30];
	int i=0,l;
	printf("Enter string:");
	gets(x);
	for(l=0;x[l];l++);
	for(l=l-1;l>=0;l--)
	{
		y[i]=x[l];
		i++;
	}
	y[i]=0;
	printf("%s",y);
}
10.write a c program to concatenate two string.
-------------------------------------------------
#include<stdio.h>
void main()
{
    char x[30],y[30];
    int i,j;
    printf("Enter string:");
    gets(x);
    printf("Enter string:");
    gets(y);
    for(i=0;x[i];i++);
    for(j=0;y[j];j++)
    {
    	x[i]=y[j];
    	i++;
    	y[j]=0;
	}
	x[i]=0;
	printf("%s%s",x,y);
}

#include<stdio.h>
void main()
{
	char x[30],y[30],z[30],i,j;
    printf("Enter first name:");
    gets(x);
 
    printf("Enter last name:");
    gets(y);
    for(i=0;x[i];i++)
    {
    	z[i]=x[i];
	}
	z[i]=32;
	i++;
	for(j=0;y[j];j++)
	{
		z[i]=y[j];
		i++;
	}
	z[i]=0;
	printf("%s",z);
}
Write a C program to swap every pair of consecutive characters in a string.
------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
 char x[30],i,j;
 printf("Enter string:");
 gets(x);
 for(i=0;x[i+1];i=i+2)
 {
 	j=x[i];
 	x[i]=x[i+1];
 	x[i+1]=j;
	 }
	printf("%s",x);
}

write a c program to insert the character @ between every two consecutive characters of a string.
----------------------------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
 char x[30];
 int i,l,j;
 printf("Enter string:");
 gets(x);
 for(i=0;x[i];i++)
 {
 	for(l=0;x[l];l++);
 	if(i%2!=0){
 	for(j=l;j>=i;j--)
 	{
 		x[j+1]=x[j];
	 }
	 x[i]='@';
}
	 }
	 printf("%s",x);
}
11. write a c program to compare two strings.
---------------------------------------------------
#include<stdio.h>
#include<String.h>
void main()
{
	char x[30],y[30];
	printf("Enter first string:");
	gets(x);
	printf("Enter second string:");
	gets(y);
	if(strcmp(x,y)==0)
	{
		printf("both strings are equal");
	}
	else
	{
     	printf("both strings are not equal");
	}
}
12. write a c program to check whether a string is palindrome or not.
-------------------------------------------------------------------------
#include<stdio.h>
#include<String.h>
void main()
{
	char x[30],y[30];
	printf("Enter ur name:");
	gets(x);
	strcpy(y,x);
	strrev(x);
	
	if(strcmp(x,y)==0)
	{
     printf("it is palindrome.....");
	}
	else
	{
	printf("it is not palindrome.....");
	}
}

14. write a c program to find first occurrence of a character in a string.
---------------------------------------------------------------------------
#include<stdio.h>
void main()
{
 char x[30],ch,i;
  	printf("Enter string:");
  	gets(x);
 
  	printf("Enter charcter:");
  	scanf("%c",&ch);
  	for(i=0;x[i];i++){
  	if(x[i]==ch)
  	{
  		printf("%d",i);
  	   break;
	  }
}
}


#include<stdio.h>
void main()
{
 char x[30],ch,i;
  	printf("Enter string:");
  	gets(x);
 
  	printf("Enter charcter:");
  	scanf(" %c",&ch);
  	for(i=0;x[i];i++){
  	if(x[i]==ch)
  	{
  		printf("%d ",i);
 
	  }
}
}
15.write a c program to find last occurrence of a character in a string.
--------------------------------------------------------------------------
#include<stdio.h>
void main()
{
 char x[30],ch,i,j=0;
  	printf("Enter string:");
  	gets(x);
 
  	printf("Enter charcter:");
  	scanf("%c",&ch);
  	for(i=0;x[i];i++){
  	if(x[i]==ch)
  	{
  	  	j=i;
	  }
}
	    if(j!=0)
	    {
	    	printf("%d",j);
		}
		else
		{
			printf("Not found\n");
		}
}


17. Write a C program to print a slicing string from a given string using start index and end index.
-----------------------------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
 char x[30];
  int si,ei,i;
  printf("Enter string:");
  gets(x);
 
  printf("Enter start index:");
  scanf("%d",&si);
 
  printf("Enter end index:");
  scanf("%d",&ei);
 
  for(i=si;i<=ei;i++)
  {
  	printf("%c",x[i]);
  }
}
18.merging by function strcat
-----------
#include<stdio.h>
#include<string.h>
void main()
{
	char x[30],y[30],z[30];
	printf("Enter string one:");
	gets(x);
	
	printf("Enter string two:");
	gets(y);
    strcpy(z,x);
    strcat(z," ");
    strcat(z,y);
	printf("%s\n",z);
}
19.strcmpi
----------
#include<stdio.h>
#include<string.h>
void main()
{
	char x[30];
	printf("Enter ur name:");
	gets(x);
	
	if(strcmpi(x,"Amit")==0)
	{
		printf("Nice to meet u");
	}
	else
	{
		printf("Have a nice day");
	}
}

20.lower to upper by function
--------------------------------
#include<stdio.h>
#include<string.h>
void main()
{
	char x[30];
	printf("Enter ur name:");
	gets(x);
	
	strupr(x);
	printf("%s",x);
}

21.upper to lwr by function
----------------------------
#include<stdio.h>
#include<string.h>
void main()
{
	char x[30];
	printf("Enter ur name:");
	gets(x);
	
	strlwr(x);
	printf("%s",x);
}
22.REVERSE OR PALINDROME
--------------------------
#include<stdio.h>
#include<string.h>
void main()
{
	char x[30];
	printf("Enter ur name:");
	gets(x);
	
	strrev(x);
	printf("%s",x);
}

23. row and column in matrix.
------------------------------
#include<stdio.h>
void main()
{
	int x[3] [5],i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("Enter value @ %d,%d:",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("%d",x[i][j]);
		}
		printf("\n");
	}

}

24.sum of row column or sum of elements in matrix.
--------------------------------------------------
#include<stdio.h>
void main()
{
	int x[3] [5],i,j,s=0;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("Enter value @ %d,%d:",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=4;j++)
		{
			s=s+x[i][j];
			printf("%d,",x[i][j]);
		}
		printf("\n");
	}
	printf("Sum:%d",s);
}
25. rowwise sum of matrix.
---------------------------------
#include<stdio.h>
void main()
{
	int x[3] [5],i,j,s=0;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("Enter value @ %d,%d:",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		s=0;
		for(j=0;j<=4;j++)
		{
			printf("%d ",x[i][j]);
			s=s+x[i][j];
		}
		printf("%d",s);
		printf("\n");
	}
}

26.write a c program to find secondary diagonal sum.
-----------------------------------------------------
#include<stdio.h>
void main()
{
	int x[3] [3],i,j,s=0;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("Enter value @ %d,%d:",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
			s=s+x[i][2-i];
		}
		printf("%d",s);
}
27.column wise sum of elements in matrix.
-----------------------------------------------
#include<stdio.h>
void main()
{
	int x[3] [5],i,j,s=0;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("Enter value @ %d,%d:",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	for(j=0;j<=4;j++)
	{
		s=0;
		for(i=0;i<=2;i++)
		{
			s=s+x[i][j];
		}
		printf("%d",s);
		printf("\n");
	}
}
28.Addition of two matrix.
-----------------------------
#include<stdio.h>
void main()
{
	int x[3][3],y[3][3],z[3][3],i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Enter value @ %d,%d:",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Enter value @ %d,%d:",i,j);
			scanf("%d",&y[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			z[i][j]=x[i][j]+y[i][j];
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		printf("%d ",z[i][j]);
	
		}
	}
	printf("\n");
}
29.matrix multiplication
--------------------------
#include<stdio.h>
void main()
{
 char x[3][3],y[3][3],z[3][3];
 int i,j,k,s=0;
 printf("Enter first element matrix:\n");
 for(i=0;i<=2;i++)
 {
 	for(j=0;j<=2;j++)
 	{
 		printf("Enter value @ %d,%d:",i,j);
 		scanf("%d",&x[i][j]);
	 }
 }
 printf("Enter second element matrix:\n");
 for(i=0;i<=2;i++)
 {
 	for(j=0;j<=2;j++)
 	{
 	printf("Enter value @ %d,%d:",i,j);
 	scanf("%d",&y[i][j]);
	 }
 }
 for(i=0;i<=2;i++)
 {
 	for(j=0;j<=2;j++)
 	{
	 s=0;
 		for(k=0;k<=2;k++)
 		{
 			s=s+x[i][k]*y[k][j];
		 }
		 z[i][j]=s;
	 }
 }
 for(i=0;i<=2;i++)
 {
 	for(j=0;j<=2;j++)
 	{
 		printf("%d ",z[i][j]);
	 }
 }
 printf("\n");
}
30.write a c program to count occurrences of a character in a given string.
---------------------------------------------------------------------------
#include<stdio.h>
void main()
{
 char x[30],ch,i,c=0;
 printf("Enter string:");
 gets(x);
 printf("Enter character:");
 scanf("%c",&ch);
 for(i=0;x[i];i++)
 {
 	if(x[i]==ch)
 	{
 	c++;
	 }
 }
 printf("%d",c);
}
31.write a c program to find highest frequency character in a string.
----------------------------------------------------------------------
#include<stdio.h>
void main()
{
 char x[30],ch,i,j,c=0,max=0;
 printf("Enter string:");
 gets(x);
  for(i=0;x[i];i++)
  {
  	c=0;
  	for(j=0;x[j];j++)
  	{
  		if(x[i]==x[j])
  		{
  			c++;
		  }
	  }
	  if(c>max)
	  {
	  	max=c;
	  	ch=x[i];
	  }
  }
  printf("%c=%d",ch,max);
}
32.write a c program to find lowest frequency character in a string.
-------------------------------------------------------------------
#include<stdio.h>
void main()
{
 char x[30],ch,i,j,c=0,min;
 printf("Enter string:");
 gets(x);
 for(j=0;x[j];j++)
 {
 	if(x[0]=x[j]){
	min++; }
 }
 ch=x[0];
  for(i=0;x[i];i++)
  {
  	c=0;
  	for(j=0;x[j];j++)
  	{
  		if(x[i]==x[j])
  		{
  			c++;
		  }
	  }
	  if(c<min)
	  {
	  	min=c;
	  	ch=x[i];
	  }
  }
  printf("%c=%d",ch,min);
}
#include<stdio.h>
void main()
{
  char x[30],i,j,freq,c=0,lwr;
  printf("Enter string:");
  gets(x);
  for(j=0;x[j];j++)
  {
  	if(x[0]==x[j]){
  		lwr++;
	  }
}
	  freq=x[0];
	  for(i=0;x[i];i++)
	  {
	  	c=0;
	  	for(j=0;x[j];j++)
	  	{
	  		if(x[i]==x[j])
	  		{
	  			c++;
			  }
		  }
		  if(c<lwr)
		  {
		  	lwr=c;
		  	freq=x[i];
		  }
	  }
  printf("%c=%d",freq,lwr);
}
33.write a c program to count frequency of each character in a string.
-----------------------------------------------------------------------
#include<stdio.h>
void main()
{
 char x[30],i,j,c;
 printf("Enter string:");
 gets(x);
 for(i=0;x[i];i++)
 {
 	c=0;
 	for(j=0;j<=i;j++)
 	{
 		if(x[i]==x[j])
 		{
 			break;
		 }
	}
		 if(j==i)
		 {c=0;
		 	for(j=0;x[j];j++)
		 	{
		 		if(x[i]==x[j])
		 		{
		 			c++;
				 }
			 }
printf("%c = %d\n",x[i],c);
	 }
}
}


34.write a c program to remove first occurrence of a character from string.
------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
 char x[30],ch,i,j=0,k=0;
 printf("Enter string:");
 gets(x);
 printf("Enter character:");
 scanf("%c",&ch);
 for(i=0;x[i];i++)
 {
 	if(x[i]==ch)
 	{
 		j=i;
 		k=1;
 		break;
	 }
 }
 if(k==1)
 {
 	for(i=j;x[i];i++)
 	{
 		x[i]=x[i+1];
	 }
 }
 printf("%s",x);
}
35.write a c program to remove last occurrence of a character from string.
--------------------------------------------------------------------------------
#include<stdio.h>
void main()
{
 char x[30],ch,i,j=0,k=0;
 printf("Enter string:");
 gets(x);
 printf("Enter character:");
 scanf("%c",&ch);
 for(i=0;x[i];i++)
 {
 	if(x[i]==ch)
 	{
 		j=i;
 		k=1;
	 }
 }
 if(k==1)
 {
 	for(i=j;x[i];i++)
 	{
 		x[i]=x[i+1];
	 }
 }
 printf("%s",x);
}
36.write a c program to remove all occurrences of a character from string.
-----------------------------------------------------------------------------
#include<stdio.h>
void main()
{
 char x[30],ch,i,j=0;
 printf("Enter string:");
 gets(x);
 printf("Enter character:");
 scanf("%c",&ch);
 for(i=0;x[i];i++)
 {
 	if(x[i]==ch)
 	{
 	for(j=i;x[j];j++)
	 {
 		x[j]=x[j+1];
	 }
 		i--;
	 }
 }
 printf("%s",x);
}

write a c program to count occurences of a word in a given string.
--------------------------------------------------------------------
#include<stdio.h>
#include<string.h>
void main()
{
	char x[100],y[20],word[20];
	int i,j,c=0;
	printf("Enter string:");
	gets(x);
	printf("Enter string to search?");
	gets(y);
	
	for(i=0;x[i];i++)
	{
		j=0;
		while(x[i]!=' ')
		{
			word[j]=x[i];
			j++;
			if(x[i+1]==0) break;
			i++;
		}
		word[j]=0;
		if(strcmpi(word,y)==0)
		{
			c++;
		}
	}
	printf("%d",c);
}
