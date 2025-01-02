#include<iostream>
#include<fstream>
using namespace std;
int main{
    int a[]={11,12,13,14,15};
    int b[5];
    ofstream ofile("sample",ios::binary);
    ofile.write((char*)a,sizeof(a));
    ofile.close();
    ifstream ifile("sample",ios::binary);
    ifile.read((char*)b,sizeof(b));
    for(int i=0;i<5;i++){
        cout<<b[i]<<" ";
    }
}
