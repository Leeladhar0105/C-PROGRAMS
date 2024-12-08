#include<stdio.h>
int main(){

   int n;
   printf("Enter a number:");
   scanf("%d",&n);
   if(check(n)==-1){
    printf("all alternate bits");
   }
   else{
    printf("no alternate bits");
   }
    return 0;

}
int check(int n){
 int prev=n&1,cur,in=-1;
 n=n>>1;
 while(n>0){
    cur=n&1;
    if(cur==prev){
        in=0;
        break;
    }
    else{
        prev=cur;
        n=n>>1;
    }
 }
 return in;
}
