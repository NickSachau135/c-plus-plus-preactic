#include <iostream>

using std::cout;
using std::cin;

int main() {
    int lesson;
    cout << "What would you like to learn: ";
    cin >> lesson;
    cout << "If you want to learn " << lesson << ". Then look it up on google." << std::endl;
}