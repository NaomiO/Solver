#include "doctest.h"
#include "solver.hpp"
#include <stdexcept>

using namespace solver;
using namespace std;

TEST_CASE("Test for real variables"){
  RealVariable x;

    CHECK((solve(x == 1)) == 1);
    CHECK((solve(x == -1)) == -1);
    CHECK((solve(2*x == 10)) == 5);
    CHECK((solve(2*x == -10)) == -5);
    CHECK((solve(-2*x == 10)) == -5);
    CHECK((solve(-2*x == -10)) == 5);
    CHECK((solve(2*x-4 == 10)) == 7);
    CHECK((solve(-2*x-4 == 10)) == -7);
    CHECK((solve(2*x+4 == 10)) == 3);
    CHECK((solve(-2*x+4 == 10)) == -3);
    CHECK((solve(2*x/4 == 2)) == 4);
    CHECK((solve(2*x/-4 == 2)) == -4);
    CHECK((solve((x^2) == 16) == 4));
    CHECK((solve((x^2) == 16) == -4));
    CHECK((solve((x^2) == 16) == -4));
    CHECK((solve((x^2) + 2*x == 0) == 0));
    CHECK((solve((x^2) + 2*x == 0) == -2));
    CHECK((solve( 3*(x^2) + 2*x == 5*x) == 0));
    CHECK((solve( 3*(x^2) + 2*x == 5*x) == 1));
    CHECK((solve((x^2) + 2*x == 3*x + 2) == 2));
    CHECK((solve((x^2) + 2*x == 3*x + 2) == -1));
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4));
    CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4));

    CHECK_THROWS( solve( (x^2) == -1) );
    CHECK_THROWS( solve( (2*(x^2)) == -1) );
    CHECK_THROWS( solve( (x^2)/2 == -1) );
    CHECK_THROWS( solve( (x^2) + 2*x == -1) );

    }

 TEST_CASE("Test for complex variables"){

  ComplexVariable y;
  
    CHECK( (solve((y^2) == 16) == complex<double>(4,0) ) );
    CHECK( (solve((y^2) == 16) == complex<double>(-4,0) ) ); 
    CHECK( (solve((y^2) == -16) == complex<double>(0,4) ) ); 
    CHECK( (solve((y^2) == -16) == complex<double>(0,-4) ) ); 
    CHECK( (solve((y^2) + 2*y == -5) == complex<double>(-1,2) ) ); 
    CHECK( (solve((y^2) + 2*y == -5) == complex<double>(-1,-2) ) ); 
    CHECK( (solve( 2i*y + 2 == 6i ) == complex<double>(3,1) ) ); 
    CHECK( (solve(y + 4i == 2*y + 1i) == complex<double>(0,3) ) ); 
    CHECK( (solve(y + 5i == 2*y + 3i) == complex<double>(0,2) ) ); 
    CHECK( (solve(-5*y + 6i - 4 == 3*y -2i + 4) == complex<double>(-1,1) ) ); 
    CHECK( (solve(-12*y + 2i - 7 == -8*y - 6i + 1) == complex<double>(-2,2) ) ); 
    CHECK( (solve(7*y + 22i - 11 == -2*y - 5i + 7) == complex<double>(2,-3) ) ); 
    CHECK( (solve((y^2) + 2i + 49 ==  2i ) == complex<double>(0,7) ) ); 
    CHECK( (solve((y^2) + 2i + 49 ==  2i ) == complex<double>(0,-7) ) ); 
    CHECK( (solve(y + 2i == 2) == complex<double>(2,-2) ) ); 
    CHECK( (solve(y + 8i == -2) == complex<double>(-2,-8) ) ); 
    CHECK( (solve(2*y + 8i == -2) == complex<double>(-1,-4) ) ); 
    CHECK( (solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y) == complex<double>(4,0) ) ); 
    CHECK( (solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y) == complex<double>(-4,0) ) ); 
    CHECK( (solve((y^2) + 2*y + 4 == -12 + 6*y/2 - y) == complex<double>(0,4) ) ); 
    CHECK( (solve((y^2) + 2*y + 4 == -12 + 6*y/2 - y) == complex<double>(0,-4) ) ); 
    CHECK( (solve((y^2) + 2*y + 4 == 22 + 4*y/2 - (y^2)) == complex<double>(3,0) ) ); 
    CHECK( (solve((y^2) + 2*y + 4 == 22 + 4*y/2 - (y^2)) == complex<double>(-3,0) ) ); 

    
 }