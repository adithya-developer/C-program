//For,While,Do While
//For Loop
  //Eg-1:
      #include<stdio.h>
       int main(){
       for(int i=0; i<=20; i= i+1){
        printf("%d\n",i);
      }
     return 0;
     }
  //Eg-2  iterator
      #include<stdio.h>
      int main(){
      for(int i=0; i>=-10; i= i-1){
         printf("%d\n",i);
      }
     return 0;
     }
//Increment Operator
      //++i (pre increment)
      //i++ (post increment)
   //Eg:1(post incrrement)
      #include<stdio.h>
        int main(){
        int i= 2;
        printf("%d\n", i++);//O/p:Actual result,then increase(2,3)
        printf("%d\n",i);

       
      return 0;
      }
   //Eg:2;(pre incremnet)
      #include<stdio.h>
      int main(){
       int i= 2;
       printf("%d\n", ++i);//O/P:increase,then use(3,3)
       printf("%d\n",i);

       
      return 0;
      }
//Decrement Operator
    // --1(pre decrement)
       #include<stdio.h>
       int main(){
       int i= 2;
       printf("%d\n", --i);//O/P:increase,then use(3,3)
       printf("%d\n",i);

       
      return 0;
      }
   // 1--(post decrement)
       #include<stdio.h>
      int main(){
       int i= 2;
        printf("%d\n", i--);//O/P:increase,then use(3,3)
        printf("%d\n",i);

       
       return 0;
       }


// for loop  using (Float,Alphabets)
     #include<stdio.h>
     int main(){
      for(float i=2.0; i<=10.0; i++){
         printf("%f\n",i);
      }
      for(char i='A'; i<='Z'; i++){
         printf("%c\n",i);
      }
      return 0;
     }
//infinite loop
      #include<stdio.h>
     int main(){
      for(int i=4; ; i++)
       printf("%d\n",i);
      return 0;
     }


//While Loop
      #include<stdio.h>
      int main(){
      int i=0;
      while(i<=8){
       printf("%d\n",i);
       
       i++;
      }
      return 0;
      }
//Do While Loop
       #include<stdio.h>
       int main(){
        int i=2;
        do{
        printf("%d\n",i);
        i++;
        }
        while(i<10);
        return 0;
        }
    //multiplication table
       #include<stdio.h>
        int main(){
         int n;
          printf("Enter a Number: ");
          scanf("%d",&n);
          for(int i=1; i<10; i++){
         printf("%d\n",n*i);
        }
        return 0;
         }
   //Addition
         #include<stdio.h>
         int main(){
         int n;
          printf("Enter a Number: ");
          scanf("%d",&n);
          for(int i=1; i<10; i++){
          printf("%d\n",n+i);
           }
         return 0;
         }

//break statement
    #include<stdio.h>
      int main(){
       for(int i=1; i<=10; i++){
       if(i > 6){
         break;
       }
      printf("%d\n",i);
     }
      printf("Reached\n");
     printf("Here We Go");
     return 0;
     }
 //Eg:1
    #include<stdio.h>
    int main(){
      int n;
      do{
         printf("Enter Odd Number : ");
         scanf("%d",&n);
       if(n % 2 == 0){
         printf("%d\n",n);
         break;
       }
      }
      while(1);
      {
         printf("The End");
      }
      return 0;
    }
//Continue Statement
     #include<stdio.h>
     int  main(){
      for(int i=1; i<=10; i++){//skip
         if(i==7){
            continue;
         }
         printf("%d\n",i);
      }
     }