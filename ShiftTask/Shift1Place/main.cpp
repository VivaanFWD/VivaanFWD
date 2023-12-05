#include <iostream>

using namespace std;

int main()
{
    //before: 5 4 7 3
    //after: 4 7 3 5

    int i=0,temp;

    int array[4]={5,4,7,3};
//swap first element with last element from given array...
    {
        temp=array[0];
        array[0]=array[3];//(size-1)--> 3
        array[3]=temp;//(size-1)--> 3
    }
    printf("Before Shift:\n");
    for(;i<4;i++){
            printf("%d\n",array[i]);
    }

    printf("\n------------------------------\n");
/*size-2 for loop*/
    for(i=0;i<2;i++){
        temp=array[i];
        array[i]=array[i+1];
        array[i+1]=temp;
    }
    printf("After Shift:\n");

    for(i=0;i<4;i++){
            printf("%d\n",array[i]);
    }


    return 0;
}
