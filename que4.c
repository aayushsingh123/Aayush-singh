#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
int fib(int a);
void *func(void *a);
int main(){
int a;
pthread_t pthread;
scanf("%d",&a);
pthread_create(&pthread ,NULL,func,(void *)a);
pthread_join(pthread,NULL);
return 0;
}
void *func(void *a){
 int d = (int)a;
 int i;
 for(i=1;i<d;i++){
   printf("%d",fib(i));
 }
}
 int fib(int a){
 if( a<=1){
     printf("%d \t",(int)a);
     return a;
 }
else{
 return fib(a-1) + fib(a-2); 
 }
 }






