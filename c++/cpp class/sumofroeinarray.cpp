#include <iostream>
using namespace std;

#define MAXROW 10
#define MAXCOL 10

class MatrixSum {
public:
void calculateSum(int r, int c) {
int matrix[MAXROW][MAXCOL];
int i, j, sum;

for (i = 0; i < r; i++) {
for (j = 0; j < c; j++) {
cin >> matrix[i][j];
}
}

for (i = 0; i < r; i++) {
sum = 0;
for (j = 0; j < c; j++) {
cout << matrix[i][j] << " ";
sum += matrix[i][j];
}
cout << "SUM: " << sum;
cout << "\n";
}
}
};

int main() {
int r, c;
cin >> r;
cin >> c;

MatrixSum ms;
ms.calculateSum(r, c);

return 0;
}