#include <iostream>
#include <math.h>
#include "measurement.h"
using namespace std;

//Member methods development.
void measurement::return_values(double * a, double * b){
    cout<<"The values of x and y coordinates are:"<<endl;
    cout<<"x, y"<<endl;
    for(int i = 0; i < 4; i++){
        x[i] = *(a + i);
        y[i] = *(b + i);
        cout<<x[i]<<", "<<y[i]<<endl;
    }
}

void measurement::error_matrix(){
    double sumx = 0.0;
    double sumy = 0.0;
    for(int i = 0; i < 4; i++){
        sumx += x[i];
        sumy += y[i];
    }
    double meanx = sumx / 4.0;
    double meany = sumy / 4.0;
    double a [4];
    double b [4];
    double sumxy = 0.0;
    double sumxx = 0.0;
    double sumyy = 0.0;
    for(int j = 0; j < 4; j++){
        a[j] = x[j] - meanx;
        b[j] = y[j] - meany;
        sumxy += a[j] * b[j];
        sumxx += a[j] * a[j];
        sumyy += b[j] * b[j];
    }
    double sigmaxy = sumxy / 3.0;
    sigmax = sumxx / 3.0;
    sigmay = sumyy / 3.0;
    cout<<endl<<"The error matrix M is:"<<endl;
    cout<<pow(sigmax,2)<<"  "<<sigmaxy<<endl;
    cout<<sigmaxy<<"  "<<pow(sigmay,2)<<endl;
}

void measurement::distance(){
    cout<<endl<<"The distance, its error and significance is:"<<endl;
    cout<<"r - error - S"<<endl;
    for(int i = 0; i < 4; i++){
        double r = sqrt(pow(x[i],2)+pow(y[i],2));
        double error = sqrt(pow( (x[i]/r)*sqrt(sigmax) ,2)+pow( (y[i]/r)*sqrt(sigmay) ,2));
        double S = r / error;
        cout<<r<<" - "<<error<<" - "<<S<<endl;
    }
}