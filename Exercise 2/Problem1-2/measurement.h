//Computing Methods in High Energy Physics.
//Exercise 2 - Problem 1/2.

//Head.
#ifndef MEASUREMENT_H
#define MEASUREMENT_H

//Class.
class measurement{
    private:
        double x [4];
        double y [4];
        double sigmax;
        double sigmay;
    public:
        void return_values(double * a, double * b);
        void error_matrix();
        void distance();
};

#endif // MEASUREMENT_H