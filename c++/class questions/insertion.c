#include<stdio.h>
#define Max{
    int main(){
        int array[Max]={2,3,4,5};
        int n=4;
        int i=0;
        int value=1;
        printf("printing array before insertion -");
        for(i=0;i<n;i++){
            printf("array[%d]=%d",i,array[i]);
        }
        for(i=n;i>=0;i--);
            array[i+1]=array[i];

    }
    array[0]=value;
    n++;
    printf("printing array after insertion-");
    for(i=0;i<n;i++){
        printf("arrray[%d]=%d",i,array[i]);
    }
}