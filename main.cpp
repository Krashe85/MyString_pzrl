#include <iostream>
#include "MyString.h"

int main() {
    char *def = "Test ";
    char *def3 = " cool ";
    MyString string = MyString(def);
    MyString string2 = MyString(def3);
    string += string2;
    string.print();
    string2 = string + string2;
    string2.removeElement(7);
    string2.print();
    string2.replaceElement(7, *"g");
    string2.print();
    string2.add(" Test ", 8);
    string2.print();

    return 0;
}
