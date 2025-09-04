#include <iostream>
using namespace std;

void f() {
    int c;
    cin >> c;
    cout << "Вы ввели: " << c << endl;
}

int main() {
    cout << "Hello world" << endl;
    cout << "Введите символ: ";
    f();
    return 0;
}