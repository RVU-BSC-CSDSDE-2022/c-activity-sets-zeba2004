#include<stdio.h>
int input();
void add(int a, int b);
void output(int a, int b, int sum);
int main(){
  int a,b,sum;
  a=input();
  b=input();  
  add(a,b);
  output(a,b,sum);
  return 0;}
int input(){
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
void add(int a, int b){
  
 }
void output(int a, int b, int sum){
  sum=a+b;
  printf("the sum of %d and%d is %d\n",a,b,sum);
}