//
// Created by Shahob Shahmirzadi on 11/20/2024.
//
#include "exam.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int validInput() {
    int input = 0;
    cout << "Enter a  valid age (between 0 and 100 inclusive): " << endl;
    while(true) {
        cin >> input;
        if (input < 0 || input > 100) {
            cout << input << " is not a valid age. Put in a valid age between 0 and 100 inclusive: " << endl;
        } else {
            return input;
        }
    }
}
double multiplier(double num1, double num2) {
    return num1 * num2;
}
double max(double a, double b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
char max(char a, char b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int compareStrings(const string& str1, const string& str2) {
    int len1 = str1.length();
    int len2 = str2.length();
    int minLen;
    if (len1 < len2) {
        minLen = len1;
    } else {
        minLen = len2;
    }
    for (int i = 0; i < minLen; i++) {
        char c1 = tolower(str1[i]);
        char c2 = tolower(str2[i]);
        if (c1 > c2) {
            return -1;
        } else if (c1 < c2) {
            return 1;
        }
    }
    if (len1 < len2) {
        return -1;
    } else if (len2 < len1) {
        return 1;
    }
    return 0;
}
int isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
void calculateSumAndAverage(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int& sum, double& average){
    sum = a + b + c + d + e + f + g + h + i + j;
    average = sum / 10.0;

}
bool passwordCheck(const string& password, int minLength, int maxLength, int minUpperCaseLetters, int minLowerCaseLetters) {
    if (password.length() < minLength || password.length() > maxLength) {
        return false;
    }
    int upperCaseCount = 0;
    int lowerCaseCount = 0;
    for (int idx = 0; idx < password.length(); idx++){
        if (!((password[idx] >= 'a' && password[idx] <= 'z') || (password[idx] >= 'A' && password[idx] <= 'Z') || (password[idx] >= '0' && password[idx] <= '9'))) {
            return false;
        }
        if (isupper(password[idx])){
            upperCaseCount++;
        } else if (islower(password[idx])){
            lowerCaseCount++;
        }
    }
    if (upperCaseCount < minUpperCaseLetters || lowerCaseCount < minLowerCaseLetters) {
        return false;
    }
    return true;
}
void countVowels(const string& word, int& totalVowels, int& countA, int& countE, int& countI, int& countO, int& countU) {
    totalVowels = 0;
    countA = 0;
    countE = 0;
    countI = 0;
    countO = 0;
    countU = 0;
    for (int idx = 0; idx < word.length(); idx++) {
        char ch = word[idx];
        switch (tolower(ch)) {
            case 'a':
                countA++;
            break;
            case 'e':
                countE++;
            break;
            case 'i':
                countI++;
            break;
            case 'o':
                countO++;
            break;
            case 'u':
                countU++;
            break;
            default:
                break;
        }
    }
    totalVowels = countA + countE + countI + countO + countU;
}
bool validEmail(const string& email) {
    int countSymbol = 0;
    int countPeriod = 0;
    for (int i = 0; i < email.length(); i++) {
        if (email[i] == '@') {
            countSymbol++;
        }
        if (email[i] == '.') {
            countPeriod++;
        }
    }
    if (countSymbol == 1 && countPeriod >= 1){
        return true;
    }
    return false;
}


