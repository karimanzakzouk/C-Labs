#include<stdio.h>

void copy_string(char*, char*);

void main(void)
{
    char s[100], t[100];    
    printf("Enter s string: ");
    scanf("%[^\n]s",&s);
    copy_string(t, s);    
    printf("\nt string is:  %s", t);    
    return 0;
}

void copy_string(char *t, char *s)
{
    while(*s)
    {
        *t = *s;        
        s++;        
        t++;
    }    
    *t = '\0';
}