// String is a sequence of characters terminated with a null character \0 .
    #include <stdio.h>
      int main(){
        char name[10];
        scanf("%s",name);
        printf("your namee is %s",name);
        return 0;
      }
//gets()It is used to read a string or a text line
     #include <stdio.h>
      void hello(char arr[]); 

        int main(){
    
        char str[4];
         gets(str);//input string
       puts(str);//itis used to write a line or string to the output stream
        return 0;
        }
      void hello(char arr[]){
       for (int i=0; arr[i] !='\0'; i++){
        printf("%c",arr[i]);
      }
     printf("\n");
    }
// can be used to read a string or a text line input up to n characters from stdin as well as from a file
     #include <stdio.h>
       void hello(char arr[]); 

     int main(){
    
       char str[5];
       fgets(str,5,stdin);//stdin stream
     puts(str);//string to the output stream
     return 0;
    }
     void hello(char arr[]){
     for (int i=0; arr[i] !='\0'; i++){
        printf("%c",arr[i]);
     }
     printf("\n");
     }
//String using Pointers
  //