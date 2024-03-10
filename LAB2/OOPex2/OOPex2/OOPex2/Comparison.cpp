#include "Comparison.h"

int CompareByName(const Student& s1, const Student& s2) {
    return s1.GetName().compare(s2.GetName());
}

int CompareByGrades(const Student& s1, const Student& s2) {
    if (s1.GetMathGrade() == s2.GetMathGrade() &&
        s1.GetEnglishGrade() == s2.GetEnglishGrade() &&
        s1.GetHistoryGrade() == s2.GetHistoryGrade()) {
        return 0;
    }

    float avg1 = s1.GetAverageGrade();
    float avg2 = s2.GetAverageGrade();

    if (avg1 > avg2) {
        return 1;
    }
    else if (avg1 < avg2) {
        return -1;
    }
    else {
        return 0;
    }
}

int CompareByAverage(const Student& s1, const Student& s2) {
    float avg1 = s1.GetAverageGrade();
    float avg2 = s2.GetAverageGrade();

    if (avg1 > avg2) {
        return 1;
    }
    else if (avg1 < avg2) {
        return -1;
    }
    else {
        return 0;
    }
}