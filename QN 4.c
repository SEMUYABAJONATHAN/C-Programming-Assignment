
 //QUESTION 4 (a)

 void addarrays(int arrayA[], int arrayB[], int arrayC[], int SIZE)
 {
     for(int i = 0; i < SIZE; i++)
     {
         arrayC[i] = arrayA[i] + arrayB[i];
     }
 }



 //QUESTION 4 (b)

 #include <stdio.h>

 int *addarrays(int arrayA[], int arrayB[], int SIZE);

 main ()
 {
     int arrayA[] = {5,23, 45, 47, 349};

     int arrayB[] = {45, 2, 7, 142, 178};

     int *arrayC = addarrays(arrayA, arrayB, 5);

     for(int i = 0; i < 5; i++)
     {
         printf("%d\n", arrayC[i]);
     }
 }
     int *addarrays(int arrayA[], int arrayB[], int length)

     {
         int *arrayC = malloc(length * sizeof(int));

         for(int i = 0; i< length; i++)
         {

         arrayC[i] = arrayA[i] + arrayB[i];
         }


     return arrayC;
      }
