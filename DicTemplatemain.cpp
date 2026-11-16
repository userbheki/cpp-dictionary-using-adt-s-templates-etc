#include <iostream>
#include <string>
#include <cstdlib>
#include "DicTemplate.h"

using namespace std;

int main() {

    //Dictionary 1: char keys, double values
    DicTemplate<char, double> parts;

    for (int i = 0; i < 3; i++)
    {
        char key;
        double part;

        cout << "Please enter a part value and a key to add "
             << "to the parts dictionary." << endl;
        cout << "Key for part value: ";
        cin >> key;
        cout << "Part value: ";
        cin >> part;
        parts.add(key, part);
    }

    cout << endl << "Parts dictionary contents:" << endl;
    parts.display();
    cout << endl;

    //find a part by key
    char searchKey;
    cout << "For which key do you want to find the part? ";
    cin >> searchKey;

    // this declaration is the parameter that will be passed by reference in the
    // if condition below it from the function declaration in .h.
    //from the function definition in .cpp when theres a match value = values[i]
    //value is a reference to foundValue.
    double foundValue;

    if (parts.find(searchKey, foundValue))
    {
        cout << "The part for key " << searchKey
             << " is " << foundValue << endl;
    }
    else
    {
        cout << "No such key can be found" << endl;
    }

    cout << "\n----------------------------------------\n" << endl;

    //Dictionary 2: float keys, string values
    DicTemplate<float, string> catalog;

    for (int i = 0; i < 3; i++)
    {
        float key;
        string value;

        cout << "Please enter a catalog value and a key to add "
             << "to the catalog dictionary." << endl;
        cout << "Key for catalog value: ";
        cin >> key;
        cin.ignore();//-> clear leftover newline before getline
        cout << "Catalog value: ";
        getline(cin, value);
        catalog.add(key, value);
    }

    cout << endl << "Catalog dictionary contents:" << endl;
    catalog.display();
    cout << endl;

    // find a value by key
    float searchKey2;
    cout << "For which key do you want to find the catalog value? ";
    cin >> searchKey2;

    //here in the stead of the type double its a string... the type passed in the function is a string.
    string foundString;
    if (catalog.find(searchKey2, foundString))
    {
        cout << "The value for key " << searchKey2
             << " is " << foundString << endl;
    }
    else
    {
        cout << "No such key can be found" << endl;
    }

    return 0;
}

