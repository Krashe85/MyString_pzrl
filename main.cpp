#include <iostream>
#include "MyString.h"

int main() {
    char *def = "Test";
    char *def2 = "Test222";
    MyString string = MyString(def);
    MyString string2 = MyString(def2);
    string.add(def);
    string.add(def);
    string+=def;
    string.print();
    string+=string2;
    string.add(def2, 5);
    char *newElement = "f";
    string.add(def2);
    string.addLeft(def);
    string.replaceElement(5, *newElement);
    string.removeElement(6);
    string.print();
    return 0;
}
