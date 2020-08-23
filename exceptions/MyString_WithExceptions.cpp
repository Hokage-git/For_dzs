#include <iostream>
#include <string.h>

using namespace std;

class MyString {
private:
    char* str;
    int s_len;
public:
    MyString() {
        str = nullptr;
        s_len = 0;
    }

    MyString(const char* str) {
        this->str = new char[strlen(str)+1];
        strcpy_s(this->str, strlen(str)+1, str);
        s_len = strlen(this->str)+1;
    }

    MyString(char* str) {
        this->str = new char[strlen(str) + 1];
        strcpy_s(this->str, strlen(str)+1, str);
        s_len = strlen(this->str)+1;
    }

    ~MyString() {
        if (str) {
            delete[] str;
        }
    }

    MyString operator+(const MyString& arg) {
        try {
            if (arg.str == nullptr) {
                throw "Err STR are empty";
            }
            MyString temp;
            temp.str = new char[s_len + arg.s_len];
            strcpy_s(temp.str, s_len, str);
            if (arg.s_len)
                strcpy_s(temp.str + s_len - 1, arg.s_len, arg.str);
            return temp.str;
        }

        catch (char* s) {
            cout<< "ERR STR are empty";
        }
    }

    bool operator!=(const MyString& arg) {
        return strcmp(str, arg.str);
    }

    friend ostream& operator<<(ostream& stream, const MyString& arg) {
        if (arg.str)
            return stream << arg.str;
    }

    char operator[](const int index) {
        return str[index];
    }

    int operator()(char symbol) {
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] == symbol) {
                return i;
            }
        }
        return -1;
    }

    operator int() const {
        return strlen(str);
    }

    int length() {
        return strlen(str);
    }

    void Link(const MyString& arg) {
        for (int i = 0; i < length(); i++) {
            if (!(str[i] != arg.str[i])) {
                cout << str[i];
            }
        }
    }
};

int main() {
    setlocale(LC_ALL, "rus");
    MyString a1{ "Я люблю есть" };
    MyString a2{ "Я люблю спать" };
    MyString a3;

    cout<<a2 + a3;

    cout << a1('л');
    cout << (int)a1;
    a2.Link(a1);
}