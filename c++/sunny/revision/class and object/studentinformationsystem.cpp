#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    int roll;
    int number;
    int marks;
    public:
    student(string n,int r,int nm,int m):name(n),roll(r),number(nm),marks(m){}
    void display() const{
        cout<<"Name: "<<name<<endl;
        cout<<"roll: "<<roll<<endl;
        cout<<"number: "<<number<<endl;
        cout<<"marks: "<<marks<<endl;
    }
};

int main(){
    string name;
    int roll,number,marks;
    cout<<"enter the name of the student";
    getline(cin,name);
    cout<<"enter the roll";
    cin>>roll;
     cout<<"enter the number";
    cin>>number;
     cout<<"marks";
    cin>>marks;
    student mystudent(name,roll,number,marks);
    mystudent.display();
}
#include<iostream>
#include<string>
using namespace std;

class student{
    string name;
    int roll;
    int number;
    int marks;
    public:
    student(string n,int r,int nm,int m):name(n),roll(r),number(nm),marks(m){}
    void display() const{
        cout<<"Name: "<<name<<endl;
        cout<<"roll: "<<roll<<endl;
        cout<<"number: "<<number<<endl;
        cout<<"marks: "<<marks<<endl;
    }
    void calculateMarks(int m1, int m2, int m3, int m4, int m5) {
        marks = m1 + m2 + m3 + m4 + m5;
    }
};

int main(){
    string name;
    int roll,number,m1,m2,m3,m4,m5;
    cout<<"enter the name of the student: ";
    getline(cin,name);
    cout<<"enter the roll: ";
    cin>>roll;
    cout<<"enter the number: ";
    cin>>number;
    cout<<"enter the marks in subject 1: ";
    cin>>m1;
    cout<<"enter the marks in subject 2: ";
    cin>>m2;
    cout<<"enter the marks in subject 3: ";
    cin>>m3;
    cout<<"enter the marks in subject 4: ";
    cin>>m4;
    cout<<"enter the marks in subject 5: ";
    cin>>m5;
    student mystudent(name,roll,number,0);
    mystudent.calculateMarks(m1,m2,m3,m4,m5);
    mystudent.display();
    return 0;
}