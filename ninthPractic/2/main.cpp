#include <iostream>
#include <algorithm>
#include <string>

bool compareStrings(const std::string& str1, const std::string& str2) {
    return str1 < str2;
}

template<typename T>
void sortArray(T* arr, int size) {
    std::sort(arr, arr + size);
}

template<>
void sortArray<std::string>(std::string* arr, int size) {
    std::sort(arr, arr + size, compareStrings);
}

int main() {
    int intArray[] = { 5, 3, 2, 1, 4 };
    int intArraySize = sizeof(intArray) / sizeof(int);
    sortArray(intArray, intArraySize);
    std::cout << "Sorted integer array: ";
    for (int i = 0; i < intArraySize; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    std::string stringArray[] = { "Charlie", "Alpha", "Bravo" };
    int stringArraySize = sizeof(stringArray) / sizeof(std::string);
    sortArray(stringArray, stringArraySize);
    std::cout << "Sorted string array: ";
    for (int i = 0; i < stringArraySize; ++i) {
        std::cout << stringArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
