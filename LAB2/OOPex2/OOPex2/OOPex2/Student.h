
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
    std::string name;
    float mathGrade;
    float englishGrade;
    float historyGrade;

public:
    // Constructor
    Student();

    // Setter and getter methods for name
    void SetName(const std::string& name);
    std::string GetName() const;

    // Setter and getter methods for grades
    void SetMathGrade(float grade);
    float GetMathGrade() const;

    void SetEnglishGrade(float grade);
    float GetEnglishGrade() const;

    void SetHistoryGrade(float grade);
    float GetHistoryGrade() const;

    // Method to calculate average grade
    float GetAverageGrade() const;
};

// Global functions for comparison
int CompareByName(const Student& s1, const Student& s2);
int CompareByGrades(const Student& s1, const Student& s2);
int CompareByAverage(const Student& s1, const Student& s2);

#endif