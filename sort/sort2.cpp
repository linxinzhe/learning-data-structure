#include <iostream>
#include <string>
#include "Student.h"
#include "SortTestHelper.h"

using namespace std;

template<typename T>

void selectionSort(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int n=10;
    int *a = SortTestHelper::generateRandomArray(n, 0, n);
    SortTestHelper::testSort("Selection Sort", selectionSort, a, n);


    float b[10] = {10.0, 9.9, 8.8, 7.7, 6.6, 5.5, 4.4, 3.3, 2.2, 1.1};
    SortTestHelper::testSort("Selection Sort", selectionSort, b, 10);


    string c[4] = {"D", "C", "B", "A"};
    SortTestHelper::testSort("Selection Sort", selectionSort, c, 4);


    Student d[4] = {{"D", 90}, {"C", 100}, {"B", 95}, {"A", 95}};
    SortTestHelper::testSort("Selection Sort", selectionSort, d, 4);

    return 0;
}