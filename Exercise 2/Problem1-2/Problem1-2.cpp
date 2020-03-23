#include <iostream>
#include <math.h>
#include "measurement.h"
#include <cstdlib>
using namespace std;

//Main.
int main() {
    double x [] = {2.0,7.0,5.0,6.0};
    double y [] = {4.0,4.0,9.0,-1.0};
    double * pointx = x;
    double * pointy = y;
    measurement m;
    m.return_values(pointx, pointy);
    m.error_matrix();
    m.distance();
    return 0;
}