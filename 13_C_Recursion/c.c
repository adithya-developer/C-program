//Recursion
      #include<stdio.h>
      void printHW(int count);
      int main()
      {
      printHW(10);
      return 0;
      }
      

     void printHW(int count){
      if(count == 0){
         return;
      }
      printf("Hlo World\n");
      printHW(count-1);
     }
   //Eg1:sum n naturssl nos..
     #include<stdio.h>
     
     int main(){
        int n = 5;
        int sum = nsum(n);
        printf("Sum of %d natural numbers:%d",n, sum);
        return 0;
     }
     int nsum(int n)
     {
      if(n == 0){
        return 0;
      }
      int res = n + nsum(n - 1);
      return  res;
     }
     //another method of natural no`s
     #include<stdio.h>
     int sum (int n);
     int main(){

        printf("Sum of  natural numbers:%d", sum(5));
        return 0;
     }
     int sum(int n)
     {
      if(n == 1){
        return 1;
      }
      int res = sum(n-1);
      int resN=res + n;
      return  resN;
     }
 //Eg2:factorial
    #include<stdio.h>
    int fact(int n);
    int main(){
       printf("Factorial is : %d",fact(5));
       return 0;

    }
    int fact(int n){
         if (n == 0){
            return 1;
         }
         int factor = fact(n-1);
         int factN = factor * n;
         return factN;
    }
    //Eg:3
    #include<stdio.h>
     int marksPercentage(int  tel, int math, int social);

     int main(){
         int tel = 89.5;
         int math = 94;
         int social = 99;
         printf("Percentage is: %d",marksPercentage(tel,math,social));
         return 0;
     }
     int marksPercentage(int tel,int math,int social){
        return ((tel+math+social)/3);
     }
     //Eg:fibonacci
     #include<stdio.h>
     int fibonacci(int n);
      int main(){
        fibonacci(6);
        return 0;
      }
      int fibonacci(int n){
         if(n == 0) {
            return 0;

         }
         if(n == 1){
            return 1;
         }
      
      int fib1 = fibonacci(n-1);
      int fib2 = fibonacci(n-2);
      int result = fib1 + fib2;
      printf("fib of %d is :%d \n",n,result);
      return result;
      }