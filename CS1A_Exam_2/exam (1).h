//
// Created by Shahob Shahmirzadi on 11/20/2024.
//

#ifndef EXAM_H
#define EXAM_H
#include <iostream>
#include <string>
using namespace std;

int validInput();
double multiplier(double num1, double num2 = 2.0);
double max(double a, double b);
int max(int a, int b);
char max(char a, char b);
int compareStrings(const string& str1, const string& str2);
int isPalindrome(const string& str);
void calculateSumAndAverage(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int& sum, double& average);
bool passwordCheck(const string& password, int minLength = 5, int maxLength = 15, int minUpperCaseLetters = 0, int minLowerCaseLetters = 0);
void countVowels(const string& word, int& totalVowels, int& countA, int& countE, int& countI, int& countO, int& countU);
bool validEmail(const string& email);
#endif //EXAM_H
