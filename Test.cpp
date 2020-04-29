#include "doctest.h"
#include "solver.hpp"
#include <stdexcept>

using namespace solver;
using namespace std;

TEST_CASE("Test find bad input"){
  RealVariable x;

    CHECK((solve(2*x-4 == 10)) == 7);
    CHECK((solve((x^2) == 16) == 4) || (solve((x^2) == 16) == -4));
    CHECK_THROWS( solve( (x^2) == -16) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4) || (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4));
    CHECK((solve(2*x-4 == 10)) == 7);
    }
 TEST_CASE("Test for complex variables"){

  ComplexVariable y;
  
    CHECK( (solve((y^2) == 16) == complex<double>(4,0) ) );
    CHECK( (solve((y^2) == 16) == complex<double>(-4,0) ) ); 
    CHECK( (solve((y^2) == -16) == complex<double>(0,4) ) ); 
    CHECK( (solve((y^2) == -16) == complex<double>(0,-4) ) ); 
    CHECK( (solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y) == complex<double>(4,0) ) ); 
    CHECK( (solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y) == complex<double>(-4,0) ) ); 
    CHECK( (solve(y+5i == 2*y+3i) == complex<double>(0,2) ) ); 
    
 }