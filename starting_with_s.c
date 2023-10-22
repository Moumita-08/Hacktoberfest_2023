#include<stdio.h>

//prototype
void count(char*);

void main()
{
    char s[200];
    printf("Enter a sentence - ");
    scanf("%[^\n]",&s);
    count(s);
}

void count(char *p)
{
	int i,c=0;
    for(i=0;p[i]!='\0';i++)
    {
        if(i==0)
        {
        	if(p[i]=='s' || p[i]=='S')
                c++;
        }
        else if(p[i]==' ')
        {
        	if(p[i+1]=='s' || p[i+1]=='S')
                c++;
        }
    }
    printf("Number of words starting with 'S' = %d",c);
}
