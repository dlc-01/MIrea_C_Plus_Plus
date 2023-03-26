#include <iostream>
#include <string>
#include "bay.h"
#include "ocean.h"
using namespace std;
Bay::Bay() : Sea() {
    nearby = "";
}
Bay::Bay(string name, string location, float size, float depth, string nearby, string type) : Sea(name, location, size, depth, type){
    this->nearby = nearby;
}

void Bay::showInfo(){
    cout << "Name: " << name << endl;
    cout << "Location: " << location << endl;
    cout << "Size: " << size << endl;
    cout << "Depth: " << depth << endl;
    cout << "Type: " << type << endl;
    cout << "Nearby to: " << nearby << endl;
}
