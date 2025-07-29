# include<stdio.h>

 int main() {
   int x, y;
   printf("Enter x value: ");
   scanf("%d",&x);
   printf("Enter y value: ");
   scanf("%d",&y);
   int sum = x + y;
   int mul = x * y;
   printf("sum is :%d\n",sum);
   printf("mul is :%d",mul);
   return 0;
 }