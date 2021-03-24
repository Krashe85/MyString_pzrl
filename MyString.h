//
// Created by Егор Скориков on 10.03.2021.
//

#ifndef STRING_MYSTRING_H
#define STRING_MYSTRING_H
#include <string>
#include <iostream>
#include <cstring>


class MyString {
private:
    char *values;
    int size;

public:
    explicit MyString(char *_str);
    MyString();
    MyString(const MyString &a);
    ~MyString();

    int getLen();
    void  print();
    void add(const char *_element);
    void add(const char *_element, int _startIndex);
    void addLeft(const char *_element);
    void replaceElement(int _position, char _newElement);
    void removeElement(int  _elementIndex);

    MyString operator+(const MyString& a);
    MyString operator+(const char* a);
    void operator+=(const MyString& a);
    void operator+=(const char* a);
    bool operator==(const MyString& a);
    bool operator==(const char* a);
};


#endif //STRING_MYSTRING_H
