// #include<iostream>
// #include<string>

// using namespace std;
// union employedetails{
//     int empid;
//     string jobtitle;

// };
// int main(){
//     employedetails emp;
//     int choice;
//     cout<<"would you like to know the emp id or job title";
//     cin>>choice;
//     if(choice==1){
//         cout<<"enter the emp id";
//         cin>>emp.empid;
//         cout<<"the imp id is "<<emp.empid;

//     }
//     else{
//         cout<<"enter the job title";
//         cin>>emp.jobtitle;
//         cout<<"the job title is: "<<emp.empid;

//     }
//     return 0;
// }
//gpt code
#include<iostream>
#include<string>

using namespace std;

union employedetails {
    int empid;
    char jobtitle[50];
};

int main() {
    employedetails emp;
    int choice;
    cout << "Would you like to know the emp id (1) or job title (2)? ";
    cin >> choice;
    if (choice == 1) {
        cout << "Enter the emp id: ";
        cin >> emp.empid;
        cout << "The emp id is: " << emp.empid << endl;
    } else if (choice == 2) {
        cout << "Enter the job title: ";
        cin >> emp.jobtitle;
        cout << "The job title is: " << emp.jobtitle << endl;
    } else {
        cout << "Invalid choice." << endl;
    }
    return 0;
}