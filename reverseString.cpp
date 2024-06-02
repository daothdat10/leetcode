#include <iostream>
#include <cstring> // For strlen

using namespace std;

void reverseString(char s[]) {
    int left = 0;
    int right = strlen(s) - 1; // Use strlen to get the correct length

    while (left < right) {
        char temp = s[left];
        s[left++] = s[right];
        s[right--] = temp;
    }
}

int main() {
    char str[50] = "hello"; 

    reverseString(str);

    cout << str << endl;

    return 0;
}

