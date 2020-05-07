#include<stdio.h> 
int compare_str(char*, char*);
 
void main(void)
{
    char s1[100], s2[100], result;
    printf("Enter s1 string:");
    gets(s1);
    printf("\nEnter s2 string:");
    gets(s2);
    result = compare_str(s1,s2);
 
    if (result == 0)
    {   printf("strings are same\n");}
    else
    {   printf("strings are not equal\n");}
}
 
int compare_str(char *s1, char *s2)
{
   while(*s1==*s2)
   {
      if ( *s1 == '\0' || *s2 == '\0' )   {break;}

      s1++;
      s2++;
   }
   if( *s1 == '\0' && *s2 == '\0' )
   {return 0;}
   else
   {return -1;}
}
 