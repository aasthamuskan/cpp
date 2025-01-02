#include <fstream>
#include <iostream>

using namespace std;

class Student {
    int roll;
    float marks;

public:
    void getdata(){
        cin>>roll>>marks;
    }

    void display(){
        cout<<roll<<" "<<marks<<endl;
    }

    void writeToFile(ofstream &outfile) {
        outfile << roll << " " << marks << endl;
    }

    void readFromFile(ifstream &infile) {
        infile >> roll >> marks;
    }
};

int main() {
    Student s;
    ofstream outfile("student.txt");
    
    cout << "Enter roll number and marks: ";
    s.getdata();
    s.writeToFile(outfile); 
    outfile.close();

    ifstream infile("student.txt");
    cout << "Student Information: ";
    s.readFromFile(infile);
    s.display(); 
    infile.close();
    return 0;
}