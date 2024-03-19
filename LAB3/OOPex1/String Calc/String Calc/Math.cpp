#include "Math.h"
#include <stdarg.h>
#include <cstring>
#include <cstdlib>

int Math::Add(int a, int b) {
    return a + b;
}

int Math::Add(int a, int b, int c) {
    return a + b + c;
}

int Math::Add(double a, double b) {
    return static_cast<int>(a + b);
}

int Math::Add(double a, double b, double c) {
    return static_cast<int>(a + b + c);
}

int Math::Mul(int a, int b) {
    return a * b;
}

int Math::Mul(int a, int b, int c) {
    return a * b * c;
}

int Math::Mul(double a, double b) {
    return static_cast<int>(a * b);
}

int Math::Mul(double a, double b, double c) {
    return static_cast<int>(a * b * c);
}

int Math::Add(int count, ...) {
    int sum = 0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; ++i) {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum;
}
#include <iostream>

// Custom implementation of strcpy
void mvalestrcpy(char* destination, const char* source) {
    while (*source) {
        *destination = *source;
        ++destination;
        ++source;
    }
    *destination = '\0'; // Add null terminator to end the string
}


void mvalestrcat(char* destination, const char* source) {
    while (*destination) {
        ++destination;
    }
    while (*source) {
        *destination = *source;
        ++destination;
        ++source;
    }
    *destination = '\0'; // Add null terminator to end the string
}


char* Math::Add(const char* str1, const char* str2) {
    if (str1 == nullptr || str2 == nullptr)
        return nullptr;

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char* result = new char[len1 + len2 + 1];
    mvalestrcpy(result, str1);
    mvalestrcat(result, str2);
    return result;
}
