#include <iostream>
#define SIZE 4
using namespace std;

int main()
{
   int i,temp;
   int valuesArr[SIZE]={5,4,7,3};

   temp=valuesArr[0];
   for(i=1;i<SIZE;i++){
    valuesArr[i-1]=valuesArr[i];
   }
   //valuesArr[SIZE-1]=temp;

   printf("\nAfter Sort\n");
   for(i=0;i<SIZE;i++){
    printf("%d\n",valuesArr[i]);
   }

    return 0;
}
