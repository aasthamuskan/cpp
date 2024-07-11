#include<iostream>
#include <string.h>
using namespace std;
class hero{
    //properties
    private:
    int health;
    public:
    char *name;
    char level;
    static int timetocomplete;

    hero(){
        cout << "simple constructor called"<<endl;
        name = new char[100];
    }
    //parametrised constructor
    hero(int health){
        this->health = health;
    }
    hero(int health,char level){
        this->health = health;
        this->level = level;
    }
    //copy constructor -->
    hero(hero& temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;
        cout<<"copy constructor called"<<endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }
    void print(){
        cout<<endl;
        cout<<"name"<<this->name<<",";
        cout<<"health"<<this->health<<",";
        cout<<"level"<<this->level<<endl;
        cout<<endl;
    }
    int gethealth(){
        return health;

    }
    char getlevel(){
        return level;
    }
    void sethealth(int health){
        int h;
        health = h;
    }
    void setlevel(char ch){
        level = ch;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }
    static int random(){
        return timetocomplete;
    }

    //destructor 
    ~hero(){
        cout<<"destructor called"<<endl;
        }


};
//static keyword
int hero::timetocomplet = 5;

int main(){
    cout<<hero::timetocomplete<<endl;
    cout<<hero::random()<<endl;
    hero a;
    cout<<a.timetocomplete<<endl;
    hero b;
    b.timetocomplete=10;
    cout<<a.timetocomplete<<endl;
    cout<<b.timetocomplete<<endl;


    //static memoiry allocation
    hero a;

    //dynamic memory allocation
    hero *b = new hero();
    //manually desturctor call;
    delete b;

    hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('A');
    char name[7]="aastha";
    hero1.setname(name);
    hero1.print();
    //use default copy cunstructor
    hero hero2(hero1);
    hero2.print();
    hero hero2 = hero1;
    hero1.name[0]='m';
    hero1.print();
    hero2.print();
    hero1=hero2;
    hero1.print();
    hero2.print();


    hero tt;
    //creation of object staically
    hero ramesh(10);
    cout<<"address of ramesh"<<&ramesh<<endl;

    ramesh.print();

    //dynamically
    hero *ramesh1 = new hero(10);
    cout<<"address of ramesh1"<<ramesh1<<endl;
    ramesh1->print();
    
    hero temp(22,'B');
    temp.print();




//static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "level is  " << a.level << endl;
    cout << " health is " << a.getHealth() << endl;

//dynamicallly
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout << "level is  " << (*b).level << endl;
    cout << " health is " << (*b).getHealth() << endl;

    
    cout << "level is  " << b->level << endl;
    cout << " health is " << b->getHealth() << endl;

    //object creation
    hero ramesh;
    cout << "Size of Ramesh is " << sizeof(ramesh) << endl;
    cout << "Ramesh health is " << ramesh.gethealth()<< endl;
    //use setter
    ramesh.sethealth(100);
    ramesh.level='A';
    cout << "Ramesh health is " << ramesh.gethealth()<< endl;
    cout << "Level is: " << ramesh.level << endl; 
    cout << "size : " << sizeof(h1) << endl;

 return 0;
}
