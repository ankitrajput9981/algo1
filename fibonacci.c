#include<stdio.h>
int main(){
  int num;
  printf("enter the number:");
  scanf("%d",&num);
  int ans=fib(num);
  printf("the fibonaccic of %d is:%d",num,ans);
}
int fib(int n){
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  else{
    return fib(n-1) +fib(n-2);
  }
}
