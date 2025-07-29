//A variable whose stores the address of another variable.
//Declaring pointers
                /*1.int *ptr;
                  2.char *ptr;
                  3.float *ptr;
//Format Specifier
            Examples:printf("%d",&marks);
                     printf("%d",ptr);
                     printf("%d",*ptr)       {value at address}
                     printf("%d",*(&marks))  {value at address}
                     printf("%d",marks);     {value at address}
// To print memory address of a variables:Mainly 3 types
     /  "%d" is used for signed integers
        "%u" is used for unsigned integers
        "%p" is used to print pointer addresses --- hexadecimal*/
     #include<stdio.h>

    int main(){
    int age = 22;
    int *ptr = &age;
    //address
    printf("%p\n", &age);
    printf("%u\n", *(&age));//variable value
    printf("%u\n", ptr); //variable value
    printf("%u\n", ptr);
        printf("%d\n", ptr);
        printf("%d\n", &ptr);
            printf("%u\n", &ptr);
        printf("%u\n", *ptr);
            printf("%d\n", *ptr);
    return 0;
     }
//Eg:1
    #include<stdio.h>
    int main(){
        int *ptr;
        int x;
        ptr = &x;
        *ptr = 100; //x = 100
        *ptr +=4; // x = 104
        printf("x = %d\n",x);        //104
        printf(" *ptr = %d\n",*ptr); //104
    // (*ptr)++;  
        //this condn prints adding '1'..

        (*ptr)++;
        printf("x = %d\n",x);        //105
        printf(" *ptr = %d\n",*ptr); //105
        return 0;
    }
//Pointer to pointer
     /*A variable that stores the memory address of another pointer
     //Declaring Pointers
       / int **pptr;
         char **pptr;
         float **pptr;*/
    #include <stdio.h>
     int main(){
        int i=5;
        int *ptr=&i;
        int **pptr = &ptr;
        printf("%d\n",**pptr);//5
        printf("%d\n",*ptr);//5
        
     }
//Pointers in Function call
     #include<stdio.h>
     void square(int n);
     void _square(int* n);
     int main(){
         int num = 4;
         square(num);
         printf("number = %d\n",num);
         _square(&num);
         printf("numberz = %d\n",num);
         return 0;
     }

     void square(int n){ //call by value
        n = n*n;
        printf("square = %d\n",n);
     }
     void _square(int* n){
        *n =(*n) * (*n);//here *n is assign value(4)
        //4*4
        printf("squarez = %d\n",*n);
     }
    //SWAP
     #include<stdio.h>
     void swap(int a, int b);

     int main(){
        int x = 5,y = 10;
        swap(x,y);
        printf("x = %d & b = %d\n",x,y);
        return 0;
     }
     //call my value
      void swap(int a,int b) {
       int t = a;
        a = b;
        b = t;
        printf("a = %d & b = %d\n",a,b);

      }
//pointers Arithematic(Word size )
  //Eg:Character (Memory of data will increase or decrease only 1 byte)
    #include<stdio.h>
     int main()
  {
     char dollar='$';
     char *ptr = &dollar;
     printf("ptr = %u\n",ptr);
     ptr++;
     printf("ptr = %u\n",ptr);
     ptr--;
     printf("ptr = %u\n",ptr);
     ptr;
    return 0;
  } 
  //Eg:Float(8bytes)
    #include<stdio.h>
     int main()
  {
     float price=54.99;
     float *ptr = &price;
     printf("ptr = %u\n",ptr);
     ptr++;
     printf("ptr = %u\n",ptr);
     ptr--;
     printf("ptr = %u\n",ptr);
     ptr;
    return 0;
  } 
  //Eg:Integer()
    #include<stdio.h>
     int main()
  {
     int marks=73;
     int *ptr = &marks;
     printf("ptr = %u\n",ptr);
     ptr++;
     printf("ptr = %u\n",ptr);
     ptr--;
     printf("ptr = %u\n",ptr);
     ptr;
    return 0;
  } 