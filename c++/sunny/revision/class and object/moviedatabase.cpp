#include<iostream>
#include<string>
using namespace std;
class movie{
    string title;
    string director;
    int relaseyear;
    public:
    movie(string t,string d,int ry):title(t),director(d),relaseyear(ry){}
    void display() const{
        cout<<"Title: "<<title<<endl;
        cout<<"Director: "<<director<<endl;
        cout<<"relase year: "<<relaseyear<<endl;

    }
    bool checkyear(){
        if(relaseyear>2020){
            return true;

        }else{
            return false;
        }
    }
};
int main(){
string title,director; 
int relaseyear;
cin>>title>>director;
cin>>relaseyear;
movie srk(title,director,relaseyear);
srk.display();
}

//gpt code
#include<iostream>
#include<string>
using namespace std;

class movie{
    private: // added private access specifier
    string title;
    string director;
    int releaseyear; // fixed typo: relaseyear -> releaseyear

    public:
    movie(string t, string d, int ry) : title(t), director(d), releaseyear(ry) {}
    void display() const {
        cout << "Title: " << title << endl;
        cout << "Director: " << director << endl;
        cout << "Release year: " << releaseyear << endl;
    }
    bool checkyear() const { // added const keyword
        return releaseyear > 2020; // simplified the if-else statement
    }
};

int main(){
    string title, director;
    int releaseyear;
    cout << "Enter title: ";
    getline(cin, title); // use getline to read a line of input
    cout << "Enter director: ";
    getline(cin, director);
    cout << "Enter release year: ";
    cin >> releaseyear;
    movie srk(title, director, releaseyear);
    srk.display();
    if (srk.checkyear()) {
        cout << "The movie was released after 2020." << endl;
    } else {
        cout << "The movie was released in or before 2020." << endl;
    }
    return 0;
}