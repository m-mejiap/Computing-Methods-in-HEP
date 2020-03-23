//Computing Methods in High Energy Physics.
//Exercise 2 - Problem 3/4.

//Head.
#include <iostream>
#include <math.h>
using namespace std;

//Class.
class vertex{
    private:
        double vertex[3];
};

class tracks{
    private:
        double vertex[3];
        double f_momentum[4];
    public:
        void momentum(double * a);
        double rapidity(double theta);
};

class montecarlo{
    private:
        double data[3];
    public:
        void trackclass();
};

//Member methods development.
void tracks::momentum(double * a){
}

double tracks::rapidity(double theta){
    double n = log(tan(theta,2));
    return n;
}

void montecarlo::trackclass(){
    
}

//Main.
int main() {
    double v [] = {4.0,8.0,6.0};
    double m [] = {7.0,2.0,5.0,12.0};
    double * pointv = v;
    double * pointm = m;
    tracks t;
    t.momentum(pointm);
    t.rapidity(9.0);
    return 0;
}