#include<iostream>
using namespace std;
char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
        }
        else{
            char temp = ch - 'A' +'a';
            return temp;
        }
}

bool checkpalindrome(char a[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(tolowercase(a[i])!=tolowercase(a[j])){
            return false;
            }
            i++;
            j--;
            }


}
void reverse(char name[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(name[i],name[j]);

    }

}

int getlength(char name[]){
    int i=0;
    for(int i=0;name[i]!='\0';i++){
        i++;


    }
}
char getMaxoccchart(string s){
    int count[26]={0};
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int n=0;
        n = ch -'a';
        count[n]++;
    }
    int max =   INT16_MIN;
    int index = -1;
    for(int i=0;i<26;i++){
        if(count[i]>max){
            max = count[i];
            index = i;
            }
            }
            return index+'a';
            
}



