#include "sensor.h"

void sensor::setAction(bool x1) {
    x = x1;
}

int sensor::isAction() {
    if (x) return 1;
    else return 0;
}
