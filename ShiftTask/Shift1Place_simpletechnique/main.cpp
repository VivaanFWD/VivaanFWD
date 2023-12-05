#include <iostream>
#define SIZE 4

using namespace std;
/*
Program to convert 5,4,7,3 --> 4,7,3,5
shift Task: first entry to last entry
*/


int main()
{
    int i=0,temp;
    int a[SIZE]={5,4,7,3};
printf("Before shift:\n");
    for(;i<SIZE;i++){
        printf("%d\n",a[i]);
    }
    for(i=0;i<SIZE;i++){
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }

    printf("After Shift:\n");
    for(i=0;i<SIZE;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}
