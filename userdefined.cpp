#include <iostream>
#include <cstring>

class UserString {
private:
    char* str; // Base address of the string
    int length; // Length of the string

public:
    // Constructor
    UserString(const char* s = "") {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }

    // Copy constructor
    UserString(const UserString& other) {
        length = other.length;
        str = new char[length + 1];
        strcpy(str, other.str);
    }

    // Assignment operator overloading
    UserString& operator=(const UserString& other) {
        if (this != &other) { // Check for self-assignment
            delete[] str; // Deallocate old memory

            length = other.length;
            str = new char[length + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    // Destructor
    ~UserString() {
        delete[] str; // Free dynamically allocated memory
    }

    // Getter for length
    int getLength() const {
        return length;
    }

    // Getter for string
    const char* getString() const {
        return str;
    }
};

int main() {
    UserString str1("Hello");
    std::cout << "String 1: " << str1.getString() << std::endl;
    std::cout << "Length of String 1: " << str1.getLength() << std::endl;

    UserString str2 = str1; // Copy constructor
    std::cout << "String 2 (copy of String 1): " << str2.getString() << std::endl;

    UserString str3;
    str3 = str1; // Assignment operator
    std::cout << "String 3 (assigned from String 1): " << str3.getString() << std::endl;

    return 0;
}