#include <iostream>
#include <string>
#include "ocean.h"
using namespace std;
Ocean::Ocean() {
        name = "";
        location = "";
        size = 0;
        depth = 0;
}
Ocean::Ocean(string name, string location, float size, float depth) {
        this->name = name;
        this->location = location;
        this->size = size;
        this->depth = depth;
}

void Ocean::showInfo(){
        cout << "Name: " << name << endl;
        cout << "Location: " << location << endl;
        cout << "Size: " << size << endl;
        cout << "Depth: " << depth << endl;
}