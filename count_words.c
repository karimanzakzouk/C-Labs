#include <stdio.h>

int count_words(char* p)
{
  int i =0 ,c=0;
  while(p[i]!= '\0')
  {
      if(p[i]== ' ')
      {c++;}
      i++;
  }
  return c+1;
}
void main(void)
{
    char p[100];
    scanf("%[^\n]s",&p);
    printf("%d", count_words(p) );

}
