//Q2) Functions in C. 
#include <stdio.h>
int max_of_four(int a,int b,int c,int d);
int main(){
int a;
int b;
int c;
int d;

scanf("%d %d %d %d",&a,&b,&c,&d);
printf("%d",max_of_four(a,b,c,d));

return 0;
}

int max_of_four(int a,int b,int c,int d){
if(a>=b && a>=c && a>=d){
return a;
}
else if(b>=a && b>=c && b>=d){
return b;
}
else if(c>=a && c>=b && c>=d){
return c;
}
else{
return d;
}
}
