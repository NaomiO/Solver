#pragma once
#include <iostream>
#include <complex>
using namespace std;

namespace solver
{
    /********Class for REAL VARIABLES in equations*********/

    class RealVariable
    {
        double num; 

    public:
        RealVariable();             
        RealVariable(double num);

        //Operator+ for addition
        friend RealVariable& operator+(const double num, RealVariable& x); 
        friend RealVariable& operator+(RealVariable& x, const double num);
        friend RealVariable& operator+(RealVariable& x1, RealVariable& x2); 

        //Operator- for substraction
        friend RealVariable& operator-(const double num, RealVariable& x); 
        friend RealVariable& operator-(RealVariable& x, const double num); 
        friend RealVariable& operator-(RealVariable& x1, RealVariable& x2); 

        //Operator* for multiplication
        friend RealVariable& operator*(const double num, RealVariable& x); 
        friend RealVariable& operator*(RealVariable& x, const double num); 
        friend RealVariable& operator*(RealVariable& x1, RealVariable& x2); 

        //Operator/ for division       
        friend RealVariable& operator/(const double num, RealVariable& x);
        friend RealVariable& operator/(RealVariable& x, const double num); 
        friend RealVariable& operator/(RealVariable& x1, RealVariable& x2); 

        //Operator^ for adding power to x
        friend RealVariable& operator^(RealVariable& x, const double num); 

        //Operator== for equality verification
        friend RealVariable& operator==(const double num, RealVariable& x); 
        friend RealVariable& operator==(RealVariable& x, const double num); 
        friend RealVariable& operator==(RealVariable& x1, RealVariable& x2);

    }; 


    /*********Class for COMPLEX VARIABLES in equations*********/

    class ComplexVariable
    {
        double real,imag;

    public:
        ComplexVariable();
        ComplexVariable(double real,double imag);
        
        //Operator+ for addition
        friend ComplexVariable& operator+(const double num, ComplexVariable& y); 
        friend ComplexVariable& operator+(ComplexVariable& y, const double num); 
        friend ComplexVariable& operator+(ComplexVariable& y1, ComplexVariable& y2); 
        friend ComplexVariable& operator+(complex<double> num, ComplexVariable& y); 
        friend ComplexVariable& operator+(ComplexVariable& y, complex<double> num); 

        //Operator- for substraction
        friend ComplexVariable& operator-(const double num, ComplexVariable& y); 
        friend ComplexVariable& operator-(ComplexVariable& y, const double num);
        friend ComplexVariable& operator-(ComplexVariable& y1, ComplexVariable& y2); 
        friend ComplexVariable& operator-(complex<double> num, ComplexVariable& y); 
        friend ComplexVariable& operator-(ComplexVariable& y, complex<double> num); 

        //Operator* for multiplication
        friend ComplexVariable& operator*(const double num, ComplexVariable& y); 
        friend ComplexVariable& operator*(ComplexVariable& y, const double num); 
        friend ComplexVariable& operator*(ComplexVariable& y1, ComplexVariable& y2); 
        friend ComplexVariable& operator*(complex<double> num, ComplexVariable& y); 
        friend ComplexVariable& operator*(ComplexVariable& y, complex<double> num); 

        //Operator/ for division
        friend ComplexVariable& operator/(const double num, ComplexVariable& y); 
        friend ComplexVariable& operator/(ComplexVariable& y, const double num); 
        friend ComplexVariable& operator/(ComplexVariable& y1, ComplexVariable& y2);
        friend ComplexVariable& operator/(complex<double> num, ComplexVariable& y); 
        friend ComplexVariable& operator/(ComplexVariable& y, complex<double> num); 

        //Operator^ for adding a power to x
        friend ComplexVariable& operator^(ComplexVariable& y, const double num); 

        //Operator== for equality verification
        friend ComplexVariable& operator==(const double num, ComplexVariable& y); 
        friend ComplexVariable& operator==(ComplexVariable& y, const double num); 
        friend ComplexVariable& operator==(ComplexVariable& y1, ComplexVariable& y2); 
        friend ComplexVariable& operator==(complex<double> num, ComplexVariable& y); 
        friend ComplexVariable& operator==(ComplexVariable& y, complex<double> num); 

    }; 

    //Function to solve equations with real variables
    double solve(RealVariable &exercise);
    
    //Function to solve equations with complex variables
    std::complex<double> solve(ComplexVariable &exercise);

}; 