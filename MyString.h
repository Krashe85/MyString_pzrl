//
// Created by Егор Скориков on 10.03.2021.
//

#ifndef STRING_MYSTRING_H
#define STRING_MYSTRING_H
#include <string>
#include <iostream>


class MyString {
private:
    char *values{};
    int size{};

public:
    explicit MyString(char *_str);
    MyString();
    ~MyString();

    int getLen();
    void  print();
    void add(char *_element);
    void add(char *_element, int _startIndex);
    void addLeft(char *_element);
    void replaceElement(int _position, char _newElement);
    void removeElement(int  _elementIndex);

    MyString operator+(const MyString& a);
    MyString operator+(char* a);
    void operator+=(const MyString& a);
    void operator+=(char* a);
    bool operator==(const MyString& a);
    bool operator==(char* a);
};


#endif //STRING_MYSTRING_H
