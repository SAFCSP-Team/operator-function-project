# Operator Function

**Objective**
The purpose of this project is to validate your knowledge of operation functions.



**Problem**
Create an operator function that adds a new string to the list of strings by using the operator **+=**

**Implementation**
Create and implement the += operator function that adds a new string to the names list.

```cpp

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

```

