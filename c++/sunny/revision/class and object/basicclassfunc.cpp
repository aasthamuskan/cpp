#include<iostream>
#include<string>
using namespace std;
class book{
    string title;
    string author;
    int yearpublished;

    public:
    book(string t,string a,int yp): title(t),author(a),yearpublished(yp){}

    void display() const{
        cout << "Title: " << title << endl;
        cout<<"Author is :"<<author<<endl;
        cout<<"yearpublished is: "<<yearpublished<<endl;
    }
};

int main(){
    string title,author;
    int yearpublished;
    cout<<"enter the ttle of the book";
    getline(cin,title);
    cout<<"enter the author of the book";
    getline(cin,author);
    cout<<"enter the year";
    cin>>yearpublished;
    book mybook(title,author,yearpublished);
    mybook.display();
}