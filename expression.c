#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
void main()
{
int i,j,p,f=0,n=0,v=0,l;
char s[100];
printf("Enter an Arithmetic Expression:");
gets(s);
for(i=0;s[i]!='\0';i++)
{ if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
{ f++;
p=i;
}
}
l=strlen(s);
// printf("%d\n",l);
if(f!=1||p==0||((!isdigit(s[l-1]))&&(!isalpha(s[l-1]))))
{ printf("Invalid Expression");
exit(0);
}
if(isdigit(s[0]))
{
for(i=1;i<p;i++)
{
if(!isdigit(s[i]))
n=1;
}
}
if(isdigit(s[p+1]))
{
for(j=p+2;s[j]!='\0';j++)
{
if(!isdigit(s[j]))
n=1;
}
}

if(n==0)
printf("Valid Expression");

else
printf("InValid Expression");
}
