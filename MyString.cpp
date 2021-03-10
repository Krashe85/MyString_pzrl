//
// Created by Егор Скориков on 10.03.2021.
//

#include "MyString.h"

MyString::MyString(char *_str) {
    size = strlen(_str);
    values= new char[size+1];
    strcpy(values, _str);
    values[size+1]='\0';

}

MyString::~MyString() {
    delete [] values;

}

void MyString::print() {
    std::cout<<values << std::endl;

}

void MyString::add(char *_element) {
    add(_element, size);
}

void MyString::addLeft(char *_element) {
    add(_element, 0);
}

int MyString::getLen() {
    return size;
}

void MyString::replaceElement(int _position, char _newElement) {
    values[_position] = _newElement;
}

MyString::MyString() {
    size = 0;
    values= new char[size+1];
}

void MyString::removeElement(int _elementIndex) {
    for (int index = _elementIndex;  index < size; ++index){
        values[index] = values[index + 1];
    }
    size-=1;

}


MyString MyString::operator+(const MyString& a) {
    MyString b = MyString(values);
    b.add(a.values);
    return b;
}

MyString MyString::operator+(char *a) {
    MyString b = MyString(values);
    b.add(a);
    return b;
}

void MyString::operator+=(const MyString& a) {
    add(a.values);
}

void MyString::operator+=(char *a) {
    add(a);
}

bool MyString::operator==(const MyString& a) {
    if (strcmp(a.values, values) == 0){
        return true;
    }
    return false;
}

bool MyString::operator==(char *a) {
    if (strcmp(a, values) == 0){
        return true;
    }
    return false;
}

void MyString::add(char *_element, int _startIndex) {
    size += strlen(_element);
    realloc(values, sizeof(char) * size+1);

    char *bufStart =new char[size+1];
    char *bufEnd = new char[size+1];

    int endIndex =0;
    for (int index = 0; index<size; ++index){
        if (index < _startIndex){
            bufStart[index] = values[index];
        } else{
            bufEnd[endIndex] = values[index];
            endIndex +=1;
        }
    }
    strcat(bufStart, _element);
    strcat(bufStart, bufEnd);
    delete [] values;
    bufStart[size+1]= '\0';
    values = bufStart;
    delete [] bufEnd;
}
