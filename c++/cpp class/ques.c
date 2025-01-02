#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100;
int ques[MAX_SIZE];
int front =-1;
void Enqueue(int value){
    if(front>=  MAX_SIZE-1){
    printf("ques overflow");}
    else{
        font++;
        ques[front]=value;
        printf("%d enque into stack\n",value);
    }
}
int main(){
    Enqueue(10);
    Enqueue(30);
    Enqueue(60);
    return 0;
}

