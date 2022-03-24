//Janmejaya Pujara
#include<stdio.h>
void insert(int[],int *,int*,int,int);
int delete(int[],int *,int *);
void main(){
int n=3,a[n],r=0,f=0,num,x;
while(1){
printf("enter the num 0,1 for enque and deque");
scanf("%d",&num);
switch(num){
case 0:
while(1){
printf("enter element to be pushed");
scanf("%d",&x);
insert(a,&r,&f,n,x);
break;
}
break;
case 1:
while(1){
int p=delete(a,&f,&r);
if(p!=0){
printf("the element dequeued is %d\n",p);
}
else{
break;
}
}
break;
case 2:
exit(0);
break;
}}}
void insert(int s[],int *r,int *f,int n,int e){
if((*f==1 && *r==n-1)|| *f==*r+1){
printf("OVERFLOWN");
}
else{
if(*f==0){
*f=*r=1;
printf("EMPTY");
}
else if(*f==1){
*f=n-1;
}
else{
*f=*f-1;
s[*f]=e;
printf("%d is pushed",s[*f]);}
}
}
int delete(int s[],int *f,int *r){
if(*r==0){
printf("underflow");
return 0;}
else{
int z=s[*r];
if(*r==*f){
*r=*f=0;
}
else{
*r=*r-1;
}
return z;
}



