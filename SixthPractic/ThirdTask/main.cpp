#include "bay.h"
#include "sea.h"
#include "ocean.h"
#include <iostream>
int main(){
    std::cout <<"Ocean:"<< std::endl;
    Ocean o1("Pacific Ocean", "Pacific Rim", 165.2, 11022);
    Ocean o2("Atlantic Ocean", "North America", 106.5, 3646);
    o1.showInfo();
    std::cout << std::endl;
    o2.showInfo();
    std::cout << std::endl;


    std::cout <<"Sea:"<< std::endl;
    Sea s1("Mediterranean Sea", "Mediterranean Basin", 2.5, 5627, "Enclosed sea");
    Sea s2("Black Sea", "Mediterranean Basin", 0.436, 2212, "Enclosed sea");
    s1.showInfo();
    std::cout << std::endl;
    s2.showInfo();
    std::cout << std::endl;

    std::cout <<"Bay and Gulf:"<< std::endl;
    Bay b1("Gulf of Mexico", "North America", 1.6, 1500, "Atlantic Ocean", "Gulf");
    Bay b2 ("Hudson Bay", "North America", 1.23, 270, "Arctic Ocean", "Bay");
    b1.showInfo();
    std::cout << std::endl;
    b2.showInfo();
    std::cout << std::endl;

    return 0;
}