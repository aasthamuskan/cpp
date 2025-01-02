#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream ifile("src.txt"); 
    ofstream ofile("desk.txt"); 

    char ch;
    while(ifile.get(ch)){ 
        ofile << ch; 
    }

    ifile.close(); 
    ofile.close(); 

    return 0;
}