#include <stdio.h> 
int input();
int compared(int a,int b,int c);
void output(int a,int b,int c,int largest);

int main(){
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  input();
  compare(a,b,c);
  output(a,b,c,largest);
  }


int input(){
int a,b,c;
 a=1;
  b=2;
  c=3;}

int compare(int a,int b,int c)
{
  int max;
  max=NULL;
  if( (a>b)&&(a>c))
{
  max=a;
}
  else if((b>a)&&(b>c))
{
  max=b;
}
  return max;
  }

void output(int a,int b,int c,int largest)
{
  print("the largest of %d and %d is %d",a,b,c,largest);}