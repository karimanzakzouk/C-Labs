
#include <stdio.h>

char count_vowels(char* p,char* size)
{
  int i =0,c=0;
  while(p[i]!= '\0')
  { 
      i++;
     *size+=1;
  }
  i=0;
  while(p[i]!= '\0')
  {
      if( p[i]=='a'|| p[i]=='e'|| p[i]== 'o'|| p[i]== 'i'|| p[i]== 'u')
      {c++;}
      i++;
  }
  return c;
}
void main(void)
{
    char p[100];
    char size =0; 
    char count_vows =0;
    char count_cons =0;
    scanf("%[^\n]s",&p);
    count_vows = count_vowels(p,&size);
    count_cons = size - count_vows; 
    printf("size : %d\n", size);
    printf("number of vowels : %d\n", count_vows );
    printf("number of cons : %d\n", count_cons );
    
}
