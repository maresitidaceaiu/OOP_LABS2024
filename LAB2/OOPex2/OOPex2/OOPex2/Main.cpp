#include <iostream>
#include "Student.h"
#include "Comparison.h"

int main() {
    Student s1, s2;

    s1.SetName("Ionut");
    s1.SetMathGrade(8);
    s1.SetEnglishGrade(7);
    s1.SetHistoryGrade(9);

    s2.SetName("Ioana");
    s2.SetMathGrade(6);
    s2.SetEnglishGrade(8);
    s2.SetHistoryGrade(7);

    std::cout << "Comparison by name: " << CompareByName(s1, s2) << std::endl;
    std::cout << "Comparison by grades: " << CompareByGrades(s1, s2) << std::endl;
    std::cout << "Comparison by average: " << CompareByAverage(s1, s2) << std::endl;

    return 0;
}