#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;

string measurement;
string value;
string end_measurement;

int main() {
    cout << "Enter starting measurement: "; // Printing and ask for what measuement were starting from
    string measurement;
    cin >> measurement;
    cout << "Enter starting value: "; // Printing and asking for what the number is were starting from
    string value;
    cin >> value;
    // value.append(measurement); // combining the number and type of measurement into one
    string entered = value + "" + measurement;
    cout << "You entered " << entered  << std::endl;
    cout << "What do you want to convert " << entered << " to?: "; // asking for what they want to conver the starting value and measurement into
    cin >> end_measurement;
    if (end_measurement == "grams") {
        if (measurement == "mg") {
            cout << "POG";
        }
        else{
            cout << "fail something is fucked up";
        }
    }
    else {
        cout << "fail did not recognize measurement";
    }
    return 0;
}