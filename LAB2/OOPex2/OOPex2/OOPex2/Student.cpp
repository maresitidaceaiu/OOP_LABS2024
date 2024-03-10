#include "Student.h"

Student::Student() : mathGrade(0), englishGrade(0), historyGrade(0) {}

void Student::SetName(const std::string& name) {
    this->name = name;
}

std::string Student::GetName() const {
    return name;
}

void Student::SetMathGrade(float grade) {
    mathGrade = grade;
}

float Student::GetMathGrade() const {
    return mathGrade;
}

void Student::SetEnglishGrade(float grade) {
    englishGrade = grade;
}

float Student::GetEnglishGrade() const {
    return englishGrade;
}

void Student::SetHistoryGrade(float grade) {
    historyGrade = grade;
}

float Student::GetHistoryGrade() const {
    return historyGrade;
}

float Student::GetAverageGrade() const {
    return (mathGrade + englishGrade + historyGrade) / 3.0;
}