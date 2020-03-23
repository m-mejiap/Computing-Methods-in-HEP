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
        double momentum(double P, double theta);
        double rapidity(double theta);
};

class montecarlo{
    private:
        double data[3];
        string classparticle;
        string parent;
    public:
        void trackclass(string a, string b);
};

//Member methods development.
double tracks::momentum(double P, double theta){
    double Pt = P * sin(theta);
    return Pt;
}

double tracks::rapidity(double theta){
    double n = -log(tan(theta/2));
    return n;
}

void montecarlo::trackclass(string a, string b){
    classparticle = a;
    parent = b;
}

//Main.
int main() {
    double v [] = {4.0,8.0,6.0};
    double m [] = {7.0,2.0,5.0,12.0};
    double * pointv = v;
    double * pointm = m;
    tracks t;
    cout<<t.momentum(4,9)<<endl;
    cout<<t.rapidity(9.0)<<endl;
    montecarlo l;
    l.trackclass("electron","positron");
    return 0;
}