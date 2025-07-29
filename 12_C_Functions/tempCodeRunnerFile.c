/*#include<stdio.h>
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

 }*/
    //Eg:1
    /*#include<stdio.h>
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
    }*/
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
        if(re=