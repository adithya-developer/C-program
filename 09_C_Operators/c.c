/*Operators are mainly 6 types
1.Arithmetic operators{+,-,/,*,%}*/
//2.Relational operators(==)(>,>=)(<,<=)(!=)---(True-1,False-0)
  #include<stdio.h>
  int main(){
  printf("%d \n",4==4);
  printf("%d \n",4!=4);
  printf("%d \n",4<=4);
  printf("%d \n",4<4);
  printf("%d \n",4>4);
  printf("%d \n",4>=4);
  return 0;
  }
//3.Logical operators(&&-AND)(||-OR)(!-NOT){true or false}
  //And gate:(&&)
        //Note:when two inputs are high range then output will print true,Otherwise false.
       
     #include<stdio.h>
         int main(){
        printf("%d \n",!((2>1) && (2>5)));
        return 0;
        }
  //OR gate:(||)
    //Note:where if any one high range in inputs then output will displays "True",otherwise "False"
       #include<stdio.h>
        int main(){
        printf("%d \n",((2<1) || (2>5)));
       return 0;
       }
 //NOT gate:(!)
     //Note: //'!'this is NOT symbol, output will displays reverse to the actual result
//4.Bitwise operators
//5.Assignment operators(=,+=,-=,*=,/=,%=)
     #include<stdio.h>
     int main(){
     int a = 1;
     int b = 6;
     a += b; ()
     printf("%d",a);
     return 0;
     }
/*6.Ternary operators*/
   #include <stdio.h>
   int main(){
    int number=5;
    
    ("%d",number % 2 == 0)?
     printf("even"):
    printf("odd");
   return 0;
   }