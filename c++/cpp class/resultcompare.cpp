#include<iostream>
using namespace std;

class test{
    int marks1;
    int marks2;
public:
    void setdata(){
        cout << "Enter the marks in two subjects: ";
        cin >> marks1 >> marks2;
    }
    friend class check; 
    int getMarks1() { return marks1; } 
    int getMarks2() { return marks2; } 
};

class check{
public:
    void compareMarks(test t){ 
        if(t.getMarks1() > t.getMarks2()){
            cout << "Marks 1 is greater";
        }
        else if(t.getMarks1() < t.getMarks2()){
            cout << "Marks 2 is greater";
        }
        else{
            cout << "Both marks are equal";
        }
    }
};

int main(){
    test t;
    t.setdata();
    check c;
    c.compareMarks(t); 
    return 0;
}