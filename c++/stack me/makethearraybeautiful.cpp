#include <iostream>
#include <stack>
#include <vector>
#include <algorithm> // Include algorithm for reverse

using namespace std;

int main() {
    stack<int> s;
    int arr[100];
    int n;

    cout << "Enter the number of elements (max 100): ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (s.empty()) {
            s.push(arr[i]);
        } else if (arr[i] >= 0) {
            if (s.top() >= 0) {
                s.push(arr[i]);
            } else {
                s.pop();
            }
        } else {
            if (s.top() < 0) {
                s.push(arr[i]);
            } else {
                s.pop();
            }
        }
    }

    vector<int> ans;

    while (!s.empty()) {
        ans.push_back(s.top());
        s.pop();
    }

    reverse(ans.begin(), ans.end());

    cout << "Remaining elements in the stack (from bottom to top): ";
    for (int value : ans) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
