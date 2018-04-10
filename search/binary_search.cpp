#include <iostream>

using namespace std;

//arr有序
//返回的是index，找不到则-1
template<typename T>
int binarySearch(T arr[], int n, T target) {
    int l = 0, r = n - 1;
    while (l <= r) {
//        int mid = (l + r) / 2; //可能存在溢出的
        int mid = l + (r - l) / 2;
        if (arr[mid] == target) {
            return mid;
        }

        if (target < arr[mid]) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return -1;
}

int main() {

    return 0;
}