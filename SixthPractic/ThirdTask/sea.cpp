#include <iostream>
#include <string>
#include "sea.h"
using namespace std;

Sea::Sea() : Ocean() {
    type = "";
}
Sea::Sea(string name, string location, float size, float depth, string type) : Ocean(name, location, size, depth){
    this->type = type;
}

void Sea::showInfo(){
    cout << "Name: " << name << endl;
    cout << "Location: " << location << endl;
    cout << "Size: " << size << endl;
    cout << "Depth: " << depth << endl;
    cout << "Type: " << type << endl;
}