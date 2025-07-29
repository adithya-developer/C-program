//if,else
  //Multiple reasult(TRUE  or FALSE)will displays in output
    #include <stdio.h>
     int main(){
     int renooValue;
        printf("Enter a Number: ");
        scanf("%d",&renooValue);
        if(renooValue % 2 == 0){
        printf("Even Number\n");
        printf("this value is suitable \n");
        printf("To Further execution\n");
        }
        else{
           printf("odd Number\n");
        printf("this value is not suitable\n");
        printf("To Further execution\n");
        }
        return 0;
        } 
 //Double if Condition
      #include<stdio.h>
      int main(){
      int sein;
      printf("Enter A Value : ");
      scanf("%d",&sein);
       
       if(sein >=0) {
        printf(("Positive \n"));
        if(sein % 2 == 0){
        printf("Even \n");
        }
        else{
            printf("Odd \n");
        }
        return 0;
       }}
//if,else if,else
  
     #include<stdio.h>
     int main(){
        int Eligible;
        printf("Enter Your Age: ");
        scanf("%d",&Eligible);

        if(Eligible >= 21){
          printf("You Are Eligible\n");
        }
        else if(Eligible > 15 && Eligible<=20){
            printf("Your Are Not Eligible\n");
        }
        else{
            printf("Your Are Not Suppose To Apply This Criteria");
        }
        return 0; 
     }
//Double else condition
      #include<stdio.h>
      int main(){
      int Package_Estimation;
      printf("Enter How Much Money You spend For Tour : ");
      scanf("%d",&Package_Estimation);
    
     if(Package_Estimation < 8000){
        printf("At This Range You Can vist Such Places  :Yaganti,Srikalahasti,Tirupati.\n");
     }
     else if(Package_Estimation >=8000 && Package_Estimation < 12000){
       printf("At This Range You can Vist such places:Adiyogi,Murdeshwar,Someshwara,Ooty.\n");
     }
     else if(Package_Estimation >= 16000){
     printf("At This Range You Can Such Places  :Manali,Kedarnath,Kashi,Haridwar,Bali.\n");
     }
   else{
      printf("At This Range You Can Such Places  :Hyd Water parks,Muchintal,some others.\n");
   }
   return 0;
   }

//Ternary condition{In single condition can write without if,else .Mainly ternary condn use'?' }
   #include<stdio.h>
     int main(){
        int Jain;
        printf("Enter a Alphabet: ");
        scanf("%d",&Jain);
        Jain % 2==0 ?printf("It is Divisible By 2\n"): printf("Its not Divisible By 2\n");
        return 0;
     }
//Switch condition
     //In output we have to call 'case n0'
     //Eg-1
     #include<stdio.h>
     int main(){
        int Year;
        printf("Enter Year(1-12) : ");
        scanf("%d",&Year);
        switch (Year) {
            case 1 :printf("Jan \n");
            break;
            case 2 :printf("feb \n");
            break;
            case 3 :printf("mar \n");
            break;
            case 4 :printf("apr \n");
            break;
            case 5 :printf("may \n"); 
            break;
            case 6 :printf("jun \n");
            break;
            case 7 :printf("Jul \n");
            break;
            case 8 :printf("aug \n");
            break;
            case 9 :printf("sep \n"); 
            break;
            case 10 :printf("oct \n");
            break;
            case 11:printf("nov \n");
            break;
            case 12:printf("dec \n");
            default: printf("Not Valid Input!\n");            
    
        }
        return 0;
     }
     //Eg-2
      #include<stdio.h>
      int main(){
        char day;
        printf("Enter Year(p-v) : ");
        scanf("%c",&day);
        switch (day) {
            case 'p' :printf("Mon \n");
            break;
            case 'q' :printf("tue \n");
            break;
            case 'r' :printf("wed \n");
            break;
            case 's' :printf("thur \n");
            break;
            case 't' :printf("fri \n"); 
            break;
            case 'u' :printf("sat \n");
            break;
            case 'v' :printf("sun \n");
            break;
            default: printf("Not Valid Input!");
        }
        return 0;
     }