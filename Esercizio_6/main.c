#include <stdio.h>

void raddoppiaElementiArray(int *array, int dimensione);

int main(){

    int array[10] = {1,2,3,4,5,6,7,8,9,10}, n=10,i;

    raddoppiaElementiArray(&*array, n);

    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }

    return 0;
}

void raddoppiaElementiArray(int *array, int dimensione){

    int i;

    for(i=0;i<dimensione;i++){
        array[i]*=2;  //array[i]=array[i]*2;
    }

}