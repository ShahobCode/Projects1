#include "exam.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    int age = validInput();
    cout << "Valid age entered: " << age << endl;
    cout << endl;

    cout << "Multiplier Function 1 --> 2 * 5 = " << multiplier(2, 5) << endl;
    cout << "Multiplier Function 2 --> 6.0 * 2 = " << multiplier(6.0) << endl;
    cout << "Multiplier Function 3 --> 5.2 * 2.3 = " << multiplier(5.2, 2.3) << endl;
    cout << endl;

    cout << "The max between 5.4 and 6.2 is " << max(5.4, 6.2) << endl;
    cout << "The max between -5 and -4 is " << max(-5, -4) << endl;
    cout << "The max between 'a' and 'A' is " << max('a', 'A') << endl;
    cout << endl;

    cout << "String comparison rules are: the first string parameter comes first alphabetically, return -1. If it comes after, return 1. If they are equal return 0." << endl;
    cout << "'apple' and 'BANANA' return's: " << compareStrings("apple", "BANANA") << endl;
    cout << "'water' and 'WATER' return's: " << compareStrings("water", "WATER") << endl;
    cout << "'watermelon' and 'WATER' return's: " << compareStrings("watermelon", "WATER") << endl;
    cout << "'pine' and 'PINEAPPLE' return's: " << compareStrings("pine", "PINEAPPLE") << endl;
    cout << "'CS1A' and 'cs1a' return's: " << compareStrings("CS1A", "cs1a") << endl;
    cout << endl;

    cout << "Rules for palindrome check: if it is a palindrome 1 is returned and if it isn't 0 is returned instead." << endl;
    cout << "'mom' return's " << isPalindrome("mom") << endl;
    cout << "'abcabc' return's " << isPalindrome("abcabc") << endl;
    cout << "'abcdcba' return's " << isPalindrome("abcdcba") << endl;
    cout << endl;

    int sum;
    double average;
    cout << "Check the sum and average from of 10 positive integers. Test with numbers 1-10 inclusive: " << endl;
    calculateSumAndAverage(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, sum, average);
    cout << "Sum: " << sum << ", Average: " << average << endl;
    cout << endl;

    cout << "Check if ValidPass1, NoHomework2024, and Short are valid passwords with the rules stated in exam questions: " << endl;
    if (passwordCheck("ValidPass1")) {
        cout << "ValidPass1 is a valid password" << endl;
    } else {
        cout << "ValidPass1 is not a valid password" << endl;
    }
    if (passwordCheck("NoHomework2024", 7, 20, 1, 3)) {
        cout << "NoHomework2024 is a valid password" << endl;
    } else {
        cout << "NoHomework2024 is not a valid password" << endl;
    }
    if (passwordCheck("Short", 6)) {
        cout << "Short is a valid password" << endl;
    } else {
        cout << "Short is not a valid password" << endl;
    }
    cout << endl;


    int totalVowels, countA, countE, countI, countO, countU;
    cout <<"Check the total amount of vowels, including the amount of each vowel, in surprise: " << endl;
    countVowels("surprise", totalVowels, countA, countE, countI, countO, countU);
    cout << "Total vowels: " << totalVowels << endl;
    cout << "a: " << countA << ", e: " << countE << ", i: " << countI
         << ", o: " << countO << ", u: " << countU << endl;
    cout <<"In aerospace: " << endl;
    countVowels("aerospace", totalVowels, countA, countE, countI, countO, countU);
    cout << "Total vowels: " << totalVowels << endl;
    cout << "a: " << countA << ", e: " << countE << ", i: " << countI
         << ", o: " << countO << ", u: " << countU << endl;
    cout << endl;

    cout << "Rules for a valid email: must contain only one '@' and at least one '.'. Will return 1 if valid and 0 if invalid." << endl;
    cout << "shahob_code@gmail.com return's " << validEmail("shahob_code@gmail.com") << endl;
    cout << "invalidemail.org100 return's " << validEmail("invalidemail.org") << endl;
    cout << "@found.lost return's " << validEmail("@found.lost") << endl;

    return 0;
}
