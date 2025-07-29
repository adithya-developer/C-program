//Mainly 3 types of functions:
//Declaration -no need return
//Definition 
//Call - return
//It is set of  statements enclosed within curly brackets ({}) that take inputs, do the computation, and provide the resultant output. 
//if we call a function multiple times,then o/p; Multiple result and reusablitiy in c.
 
 
 
#include<stdio.h>
 //declaration/prototype
 void printBro();

 int main(){
    printBro();
    printBro();
    printBro();//function call
    return 0;
 }
 //function definition
 void printBro(){
    printf("Hello\n");

 }
    //Eg:1
    #include<stdio.h>
    void pH();
    void pG();

    int main(){
        pH();
        pG();
        pH();
        pG();
      return 0;
    }
    void pG(){
    printf("GoodBye:)\n");
    }
    void pH(){
        printf("Hello\n");
    }
    //Eg:2 
    #include<stdio.h>
    void namaste();
    void bonjour();
    void Error();
    int main(){
        printf("enter f for french & i for indian: ");
        char re;
        scanf("%c",&re);

        if  (re=='i'){
         namaste();
        }
        if(re=='f'){
         bonjour();
        }
            else{
            Error();
        }
        return 0;
    }
      void namaste(){

        printf("Namaste\n");
      }
     void bonjour(){
        printf("Bonjour\n");
     }
     void Error(){
        printf("Error,Try again.....\n");
     }
//Passing arguments
     #include<stdio.h>
      int mul(int n1,int n2);
      void printM(m);
      int main(){
         int m;
         printf("Enter  value : ");
         scanf("%d",&m);
         printM(m); //argument/actual parameter
         return 0;
      }
      void printM(int m){  //parameter /formal parameter
         for(int i=1;i<=10;i++){
            printf("%d\n",i*m);
         }
      }
      //Eg:1
      #include<stdio.h>
      #include<math.h>
       void  squareResult(float value);
       int main(){
         int n=5;
         printf("%f",pow(n,2));
         return 0;
       }