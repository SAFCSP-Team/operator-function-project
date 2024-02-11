# String

**Objective**
The purpose of this project is to validate your knowledge of operation function.



**Problem**
Create operator function that adds new string to the list of strings by using the operator **+=**

**Implementation**
Create and implement the += operator function that adds new string to the names list.

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

