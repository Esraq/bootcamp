#include<stdio.h>
void main(){
   //Declaring the array - run time//
   int array[5],i;
   //Reading elements into the array//
   printf("Enter elements into the array: \n");
   //For loop//
   for(i=0;i<5;i++){
      //Reading User I/p//
      printf("array[%d] :",i);
      scanf("%d",&array[i]);
   }
   //Displaying reverse order of elements in the array//
   printf("The elements from the array displayed in the reverse order are :\n");
   for(i=4;i>=0;i--){
      //Displaying O/p//
      printf("array[%d] :",i);
      printf("%d\n",array[i]);
   }
}
