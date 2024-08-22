#include<iostream>
using namespace std;

enum months {
    January = 1, February, March, April, May, June, July, August, September, October, November, December
};

int main() {
    int m;
    cin >> m;
    months month = static_cast<months>(m);
    switch(month) {
        case January:   cout << "Month is January";   break;
        case February:  cout << "Month is February";  break;
        case March:     cout << "Month is March";     break;
        case April:     cout << "Month is April";     break;
        case May:       cout << "Month is May";       break;
        case June:      cout << "Month is June";      break;
        case July:      cout << "Month is July";      break;
        case August:    cout << "Month is August";    break;
        case September: cout << "Month is September"; break;
        case October:   cout << "Month is October";   break;
        case November:  cout << "Month is November";  break;
        case December:  cout << "Month is December";  break;
        default:        cout << "Invalid month";      break;
    }
    return 0;
}