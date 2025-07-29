/**these are statements in a program:-3 types
1.Type Declaration Instruction :Delcare variable before using  
2.Arithmetic Instruction
3.Control Instruction*/


//1.Type Declaration Instruction
#include <stdio.h>
int main(){
 int a = 22;
 int b = a;
 int c = b+1;
 printf("%d\n",c);



 int e,s,d;
 e = s = d = 5;
 printf("%d",e);
 return 0;
}



//2.Arithmetic Instruction{+,-,*,/,%}
#include <stdio.h>
#include <math.h>
int main(){
    int g = 9;
    int h = 3;
    int multiply = g * h;
    printf("%d\n",multiply);

    int hey = pow(g,h);
    printf("%d",hey);
    return 0;
}

//Type of conversion
/** int-int=int
    int-float=float
    float-float=float*/
    #include <stdio.h>
    #include <math.h>
    int main(){
        int p = (int) 45.987654;
        printf("%d \n",p);
        return 0;
    }



//operator Preccedence {5*5/6like wise}
    #include <stdio.h>
    #include <math.h>
    int main(){
      int p = 4 + 9 *80;
      printf("%d\n",p);
        return 0;
    }
    //output:724


 //Associativiy left to right (4*3/6*2)
 #include <stdio.h>
 #include <math.h>
 int main(){

 int p = 4*3/6*2;
 printf("%d\n",p);
 return 0;

  }
  //output:((4*3)/6)2=  4
  //eg:5*2/2*3
  //5*(2/2)*3


/*Control Instructions;mainly 4types
1.sequence control
2.Decision control
3.Loop control{while loops etc}
4.Case control*/