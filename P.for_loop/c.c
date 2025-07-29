       /*#include<stdio.h>
        int main(){
            int n;
            printf("Enter Number: ");
            scanf("%d\n",&n);
            int sum = 0;
            for(int i=1; i<=n; i++) {
                //this condn displays if entered n=3,then 1+0=1
                                                        //1+2=3
                                                       //1+2+3=6
                sum =sum + i;
                printf("sum is %d\n",sum);
            }
            for(int i=n; i>=1; i--){
                //this condn displays reverse  result as natural numbers:
                                                            //if entered n=3
                                                             //3
                                                             //2
                                                             //1
                printf("%d\n",i);
            }
            return 0;
        }*/
//Multiplication table
     #include<stdio.h>
      int main(){
      int n;
      printf("Enter Number :");
      scanf("%d\n",&n);
      for(int i=1; i<=10; i++){
        printf("%d \n",n*i);
      }
        return 0;
      }