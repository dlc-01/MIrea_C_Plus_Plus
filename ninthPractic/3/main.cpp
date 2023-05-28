#include <iostream>
#include "set.h"

int main() {
    Set<int >intSet(5);


    std::cout << "Adding elements to the integer set..." << std::endl;
    intSet.Add(1);
    intSet.Add(2);
    intSet.Add(3);
    intSet.Add(2);
    intSet.Add(4);
    intSet.Add(5);

    std::cout << "Is the integer set empty? " << (intSet.Is_Empty() ? "Yes" : "No") << std::endl;
    std::cout << "Is the integer set full? " << (intSet.Is_Full() ? "Yes" : "No") << std::endl;

    std::cout << "Getting elements from the integer set..." << std::endl;
    std::cout << "Get 3: " << intSet.Get(3) << std::endl;
    std::cout << "Get 6: " << intSet.Get(6) << std::endl;

    std::cout << "Is 2 in the integer set? " << (intSet.In_Set(2) ? "Yes" : "No") << std::endl;
    std::cout << "Is 4 in the integer set? " << (intSet.In_Set(4) ? "Yes" : "No") << std::endl;

    Set<std::string> stringSet(3);

    std::cout << "Adding elements to the string set..." << std::endl;
    stringSet.Add("gspd");
    stringSet.Add("banana");
    stringSet.Add("cmh");

    std::cout << "Is the string set empty? " << (stringSet.Is_Empty() ? "Yes" : "No") << std::endl;
    std::cout << "Is the string set full? " << (stringSet.Is_Full() ? "Yes" : "No") << std::endl;

    std::cout << "Getting elements from the string set..." << std::endl;
    std::cout << "Get \"gspd\": " << stringSet.Get("gspd") << std::endl;
    std::cout << "Get \"cmh\": " << stringSet.Get("cmh") << std::endl;

    std::cout << "Is \"dead blonde\" in the string set? " << (stringSet.In_Set("dead blonde") ? "Yes" : "No") << std::endl;
    std::cout << "Is \"noize\" in the string set? " << (stringSet.In_Set("noize") ? "Yes" : "No") << std::endl;

    return 0;
}
