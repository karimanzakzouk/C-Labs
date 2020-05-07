#include <stdio.h>

void* fn(void* p1, void* p2 , char type , char op)
{
char xchar =0;
int xint = 0; 
float xfloat =0;
double xdouble =0;
void* result =NULL; 

    switch(type)
    {
        case 1:
          if (op =='+')    {xchar =  *(char*)p1 + *(char*)p2 ;}
          else if(op=='-') {xchar =  *(char*)p1 - *(char*)p2 ;}
          else if(op=='*') {xchar =  (*(char*)p1) * (*(char*)p2) ;}
          else if(op=='/') 
          {
             if ((*(char*)p2) != 0) {xchar = *(char*)p1  /  *(char*)p2 ;}
             else {printf("error divisuion by zero .....");}
          }
          else{ printf("operation not exist.....");}
          result = &xchar;
          break;
               
        case 2:
          if (op =='+')    {xint =  *(int*)p1 + *(int*)p2 ;}
          else if(op=='-') {xint =  *(int*)p1 - *(int*)p2 ;}
          else if(op=='*') {xint =  (*(int*)p1) * (*(int*)p2) ;}
          else if(op=='/') 
          {
             if ((*(int*)p2) != 0) { xint = *(int*)p1  /  *(int*)p2; }
             else {printf("error divisuion by zero .....");}
          }
          else{ printf("operation not exist.....");}
          result = &xint;
          break; 
               
        case 3:
          if (op =='+')    {xfloat=  *(float*)p1 + *(float*)p2;}
          else if(op=='-') {xfloat =  *(float*)p1 - *(float*)p2 ;}
          else if(op=='*') {xfloat =  (*(float*)p1) * (*(float*)p2) ;}
          else if(op=='/') 
          {
             if ((*(float*)p2) != 0) { xfloat = *(float*)p1  /  *(float*)p2 ;}
             else {printf("error divisuion by zero .....");}
          }
          else{ printf("operation not exist.....");}
          result = &xfloat;
          break;
        case 4:
          if (op =='+')    {xdouble=   *(double*)p1 +  *(double*)p2;}
          else if(op=='-') {xdouble =  *(double*)p1 -  *(double*)p2 ;}
          else if(op=='*') {xdouble =  (*(double*)p1) * (*(double*)p2) ;}
          else if(op=='/') 
          {
             if ((*(double*)p2) != 0) { xdouble = *(double*)p1  /  *(double*)p2 ;}
             else {printf("error divisuion by zero .....");}
          }
          else{ printf("operation not exist.....");}
          result =&xdouble;
          break;     
    }
   
}

void main(void)
{
    char xchar=0; int xint=0; float xfloat=0; double xdouble=0;    
    char xc =2 , yc=3;
    int xi =22, yi=5;
    float xf =2.3 , yf=3.3;
    double xd =2.22 , yd=3.33;
    
    xchar = *(char*) fn(&xc ,&yc, 1,'+');
    xint = *(int*) fn(&xi ,&yi, 2,'-');
    xfloat = *(float*) fn(&xf ,&yf, 3,'*');
    xdouble = *(double*) fn(&xd ,&yd, 4,'/'); 
    
    printf("%d  ", xchar);
    printf("%d  ", xint);
    printf("%f  ", xfloat);
    printf("%f  ", xdouble);
    
}

