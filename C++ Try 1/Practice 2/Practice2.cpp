#include <iostream> // iostream stands for input/ output stream

using namespace std;  //makes it so you dont have to use the std::

using std::cout;

int main() { //Main Function
    int slices;
    slices = 5 + 1;

    int children = slices;
    slices = 100000;
    cout<<children;  // cout<<"Test", the << is like the + when you want to go from a string to a variable
}