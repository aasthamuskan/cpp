#include<iostream>
using namespace std;
int name (){
    int arr[10];
    cout<<"adress of first memory block is"<< arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"adress of first memory block is "<<&arr[0]<<endl;
    cout<<"4th"<<*arr<<endl;
    cout<<"5th"<<*arr+1<<endl;
    cout<<"6th"<<*(arr+1)<<endl;
    cout<<"7th"<<*(arr)+1<<endl;
    int i=3;
    cout<<i[arr]<<endl;
    int tempt[10];
    cout<<sizeof(tempt)<<endl;
     cout<<sizeof(*tempt)<<endl;
     cout<<sizeof(&tempt)<<endl;
    int *ptr = &tempt[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    



    int a[20]={1,2,3,5};
    cout<< &a[0] <<endl;
    cout<< &a <<endl;
    cout<< a <<endl;

     int *p=&a[0];
    cout<< &p[0] <<endl;
    cout<< &p <<endl;
    cout<< p <<endl;
    int arr[10];
    int *ptr=&arr[0];
    cout<<ptr<<endl;
    ptr+=1;
    cout<<ptr<<endl;

    return 0;
}