#include<iostream>
using namespace std;

class LG;
class Samsung
{
    int price;
public:
    void setprice(){
        price = 30000;
    }
    friend void check(Samsung s, LG l);
};

class LG
{
    int price;
public:
    void setprice(){
        price = 25000;
    }
    friend void check(Samsung s, LG l);
};

void check(Samsung s, LG l)
{
    cout << "Samsung price: " << s.price << endl;
    cout << "LG price: " << l.price << endl;
}

int main()
{
    Samsung s;
    LG l;
    s.setprice();
    l.setprice();
    check(s, l);
    return 0;
}