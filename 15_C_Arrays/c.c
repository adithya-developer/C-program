//It is collection of similar data types stored at continous memory locations
  /*Mainly two types
  1.One dimensional arrays(1D)
  2.Multidimensional arrays*/

  #include <stdio.h>

   int main()
  {

	// 1d array declaration
  	int arr[3];
  	for (int i = 0; i < 3; i++) {
		arr[i] = i * i - 2 * i + 1;
	  }

	  printf("Elements of Array: ");
	 for (int i = 0; i < 3; i++) {
	 	printf("%d ", arr[i]);
	 }

	 return 0;
   }
 //
 
  #include <stdio.h>
   int main(){
    int marks[3];

    printf("First lang mrks: ");
    scanf("%d",&marks[0]);

    printf("Sec lang mrks: ");
    scanf("%d",&marks[1]);

    printf("Third lang mrks: ");
    scanf("%d",&marks[2]);

   printf("fst = %d,sec = %d,Third = %d",marks[0],marks[1],marks[2]);
   
  return 0;
   }
 //Eg:1
    #include <stdio.h>
   int main(){
    float grocery[3];

    printf("Item1 Cost: ");
    scanf("%f",&grocery[0]);

    printf("Item2 Cost: ");
    scanf("%f",&grocery[1]);

    printf("Item3 Cost: ");
    scanf("%f",&grocery[2]);

   printf("fst = %f,sec = %f,Third = %f",grocery[0]+(0.18*grocery[0]),grocery[1]+(0.18*grocery[1]),grocery[2]+(0.18*grocery[2]));
   
  return 0;
   }
  //initialization of Array
     //
         #include<stdio.h>
     int main()
  {
     int marks=73;
     int _marks=74;
     int *ptr = &marks;
     int *_ptr = &_marks;
     printf(" %u,%u difference =%u\n",ptr,_ptr,ptr-_ptr);
     _ptr = &marks;
     printf("comparison = %u\n",ptr == _ptr);
    return 0;
  } 
//Traverse an Array
    #include <stdio.h>
 int main(){
    int studentRoll[10];
    //input
    int *ptr = &studentRoll[0];
    for (int i = 0;i<10;i++){
     printf("%d index: ",i);
      scanf("%d",(ptr+i));

    }
    //output
    for (int i=0; i<10; i++){
        printf("%d index = %d\n",i,*(ptr+i));

    }
    return 0;
  }
 //Arrays as Function Argument
 #include<stdio.h>
   //function declaration
   void numbers(int *arr,int n);
   int main(){
   int arr[] ={1,2,3,4,5,6,7,8,0};
   numbers(arr,9);
    return 0;

 }
 void numbers(int *arr,int n){
    for (int i=0; i<n; i++){
      //function call
        printf("%d\n",arr[i]);
    }
     }
//Multidimensional Arrays
    //2D Arrays 
     //Eg:
     #include <stdio.h>
 int main(){
    int marks[3][2];
    //student 1
    marks[0][0] = 59;
    marks[0][1] = 44;
    //student 2
    marks[1][0] = 94;
    marks[1][1] = 48;
    //student 3
    marks[2][0] = 99;
    marks[2][1] = 100;
     printf("%d",marks[2][1]);
     return 0;
 }
  //prms
  //Eg:
  #include <stdio.h>
 int findOdd(int arr[], int n);

 int main(){
  int arr[]={1,2,3,4,5,6,5,3,1};
 printf("%d",findOdd(arr,9));
    return 0;
 }
 int findOdd(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2!= 0){
            count++;
        }
    }
    return count;
 }