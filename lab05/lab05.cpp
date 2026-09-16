#include <iostream>
#include <vector>
#include <string>

using namespace std;

char translateChar(char inputChar, const vector<char>& codeTable) {
    if (inputChar >= 65 && inputChar <= 90) {
        return codeTable[inputChar - 65];
    }
    else if (inputChar >= 97 && inputChar <= 122) {
        int upperCaseLetter = inputChar - 32;
        char upperCaseCode = codeTable[upperCaseLetter - 65];
        return upperCaseCode + 32;
    }
    else {
        return inputChar;
    }
}

int main() {
    const vector<char> codeTable = {
        'V', 'F', 'X', 'B', 'L', 'I', 'T', 'Z', 'J', 'R',
        'P', 'H', 'D', 'K', 'N', 'O', 'W', 'S', 'G', 'U',
        'Y', 'Q', 'M', 'A', 'C', 'E'
    };
    string userInput;
    cout << "Enter your code: ";
    getline(cin, userInput); 
    for (int n = 0; n < userInput.length(); ++n) {
        userInput[n] = translateChar(userInput[n], codeTable);
    }
    cout << "Translated code: " << userInput << endl;
    return 0;
}