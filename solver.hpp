
#include <complex> 
using namespace std;

namespace solver{

class RealVariable{
double realVar;

};

class ComplexVariable{
complex<double> compVar;


};

double solve(RealVariable x);
complex<double> solve(ComplexVariable y);

}