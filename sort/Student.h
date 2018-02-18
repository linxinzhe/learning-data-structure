//
// Created by 林欣哲 on 18/02/2018.
//

#ifndef LEARNING_DATA_STRUCTURE_STUDENT_H
#define LEARNING_DATA_STRUCTURE_STUDENT_H

#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int score;

    bool operator<(const Student &otherStudent) {
        return score < otherStudent.score;
    }

    friend ostream &operator<<(ostream &os, const Student &student) {
        os << "Student: " << "name: " << student.name << " score: " << student.score;
        return os;
    }
};

#endif //LEARNING_DATA_STRUCTURE_STUDENT_H
