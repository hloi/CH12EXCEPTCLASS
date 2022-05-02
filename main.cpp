#include <iostream>
#include "MyException.h"

using namespace std;

int main () {


    try
    {
        string message = "this is a test.";
        throw MyException(message);
    }
    catch (MyException& e) {
        cout << "custom exception" << endl;
        cout << e.what() << '\n';
    }
    catch (exception& e)
    {
        cout << e.what() << '\n';
    }
    return 0;
}