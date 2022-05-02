//
// Created by hloi on 5/2/2022.
//

#ifndef CH12EXCEPTCLASS_MYEXCEPTION_H
#define CH12EXCEPTCLASS_MYEXCEPTION_H

#include <exception>
#include <string>
using std::exception;
using std::string;

class MyException : public exception {
private:
    string m;
public:
    MyException(const string& message) : m(message) {}
    virtual const char* what() const throw() {
        return m.c_str();

    }

};


#endif //CH12EXCEPTCLASS_MYEXCEPTION_H
