
#include "solver.hpp"

using solver::RealVariable, solver::ComplexVariable;


//Constructors for equations with real variables
RealVariable::RealVariable():num(0){}
RealVariable::RealVariable(double num):num(num){}

//Constructors for equations with complex variables
ComplexVariable::ComplexVariable() : real(0),imag(0){}
ComplexVariable::ComplexVariable(double r1,double im1) : real(r1),imag(im1){}

/**Operators for equations with real variables**/

//Operator+
RealVariable& solver::operator+(const double number, RealVariable& x){    return x;}
RealVariable& solver::operator+(RealVariable& x, const double number){    return x;}
RealVariable& solver::operator+(RealVariable& x1, RealVariable& x2){    return x1;}

//Operator-
RealVariable& solver::operator-(const double number, RealVariable& x){    return x;}
RealVariable& solver::operator-(RealVariable& x, const double number){    return x;}
RealVariable& solver::operator-(RealVariable& x1, RealVariable& x2){    return x1;}

//Operator*
RealVariable& solver::operator*(const double number, RealVariable& x){    return x;}
RealVariable& solver::operator*(RealVariable& x, const double number){    return x;}
RealVariable& solver::operator*(RealVariable& x1, RealVariable& x2){    return x1;}

//Operator/
RealVariable& solver::operator/(const double number, RealVariable& x){    return x;}
RealVariable& solver::operator/(RealVariable& x, const double number){    return x;}
RealVariable& solver::operator/(RealVariable& x1, RealVariable& x2){    return x1;}

//Operator^
RealVariable& solver::operator^(RealVariable& x, const double number){    return x;}

//Operator==
RealVariable& solver::operator==(const double number, RealVariable& x){    return x;}
RealVariable& solver::operator==(RealVariable& x, const double number){    return x;}
RealVariable& solver::operator==(RealVariable& x1, RealVariable& x2){   return x1;}


/**Operators for equations with complex variables**/

//Operator+
ComplexVariable& solver::operator+(const double number,ComplexVariable& y){    return y;}
ComplexVariable& solver::operator+(ComplexVariable& y, const double number){    return y;}
ComplexVariable& solver::operator+(ComplexVariable& y1, ComplexVariable& y2){    return y1;}
ComplexVariable& solver::operator+(complex<double> number,ComplexVariable& y){    return y;}
ComplexVariable& solver::operator+(ComplexVariable& y ,complex<double> number){    return y;}

//Operator-
ComplexVariable& solver::operator-(const double number,ComplexVariable& y){    return y;}
ComplexVariable& solver::operator-(ComplexVariable& y, const double number){    return y;}
ComplexVariable& solver::operator-(ComplexVariable& y1, ComplexVariable& y2){    return y1;}
ComplexVariable& solver::operator-(complex<double> number,ComplexVariable& y){    return y;}
ComplexVariable& solver::operator-(ComplexVariable& y ,complex<double> number){    return y;}

//Operator*
ComplexVariable& solver::operator*(const double number, ComplexVariable& y){    return y;}
ComplexVariable& solver::operator*(ComplexVariable& y, const double number){    return y;}
ComplexVariable& solver::operator*(ComplexVariable& y1, ComplexVariable& y2){    return y1;}
ComplexVariable& solver::operator*(complex<double> number, ComplexVariable& y){    return y;}
ComplexVariable& solver::operator*(ComplexVariable& y ,complex<double> number){    return y;}

//Operator/
ComplexVariable& solver::operator/(const double number,ComplexVariable& y){    return y;}
ComplexVariable& solver::operator/(ComplexVariable& y, const double number){    return y;}
ComplexVariable& solver::operator/(ComplexVariable& y1, ComplexVariable& y2){    return y1;}
ComplexVariable& solver::operator/(complex<double> number,ComplexVariable& y){    return y;}
ComplexVariable& solver::operator/(ComplexVariable& y ,complex<double> number){    return y;}

//Operator^
ComplexVariable& solver::operator^(ComplexVariable& y, const double number){    return y;}

//Operator==
ComplexVariable& solver::operator==(const double number,ComplexVariable& y){    return y;}
ComplexVariable& solver::operator==(ComplexVariable& y, const double number){    return y;}
ComplexVariable& solver::operator==(ComplexVariable& y1, ComplexVariable& y2){    return y1;}
ComplexVariable& solver::operator==(complex<double> number,ComplexVariable& y){    return y;}
ComplexVariable& solver::operator==(ComplexVariable& y ,complex<double> number){    return y;}


/*******Solve functions******/

double solver::solve(RealVariable &exercise){    return 0.0;}
std::complex<double> solver::solve(ComplexVariable &exercise){    return 0.0;}