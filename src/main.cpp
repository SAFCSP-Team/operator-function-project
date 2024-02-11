#include <iostream>
#include <list>
#include <string>
using namespace std;


int main() {

    list<string> names;

    // calling overloaded += operator
    names+="Fahad";
    names+="Sara";
    names+="Majed";

    for(string i : names) {
        cout << i << endl;
    }

    return 0;
}