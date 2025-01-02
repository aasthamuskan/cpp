#include <iostream>
#include <queue>
using namespace std;
struct Node {
    int data;
    int priority;
};

struct compare {
    bool operator()(Node const& a, Node const& b) {
        return a.priority < b.priority;
    }
};

int main() {
    std::priority_queue<Node, std::vector<Node>, compare> pq;

    pq.push({1, 3});
    pq.push({2, 2});
    pq.push({3, 1});

    while (!pq.empty()) {
        cout << pq.top().data << " ";
        pq.pop();
    }

    return 0;
}