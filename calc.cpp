#include <iostream>
using  namespace std;
float div(float a, float b) {
    return a/b;
}
int main() {
    cout << "Enter two numbers: ";
    float a, b;
    cin >> a >> b;
    cout << "Sum: " <<a+b << endl;
    cout << "Sub: " << a-b << endl;
    cout << "Mul: " << a*b << endl;
    cout << "Div (a/b):  " << div(a,b) << endl;
    cout << "Div (b/a):  " << div(b,a) << endl;
    return 0;
}