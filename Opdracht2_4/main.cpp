#define CATCH_CONFIG_MAIN 
#include "catch.hpp"
#include "ostream"
#include "vector.hpp"

TEST_CASE( "add to vector, 1 parameter" ){
   vector v( 3, 4 );
   vector t = + v ;
   REQUIRE( t == vector( 3, 4 ) );   
}
TEST_CASE( "add to vector, 2 parameter" ){
   vector v( 3, 4 );
   vector t = v + v ;
   REQUIRE( t == vector( 6, 8 ) );   
}
TEST_CASE( "add equals vector" ){
   vector v( 3, 4 );
    v += vector (3,4);
   REQUIRE( v == vector( 6, 8 ) );   
}
TEST_CASE( "multiply vector by integer" ){
   vector v( 3, 4 );
   vector t = v * 7;
   REQUIRE(t == vector( 21, 28 ) );   
}
TEST_CASE( "multiply integer by vector" ){
   vector v( 3, 4 );
   vector t = 7 *  v;
   REQUIRE( v == vector( 3, 4 ) );   
   REQUIRE(t == vector( 21, 28 ) );   
}

TEST_CASE( "multiply equals integer by vector" ){
   vector v( 3, 4 );
   v *= 7;
   REQUIRE(v == vector( 21, 28 ) );   
}

TEST_CASE( "print test" ){
   vector v( 3, 4 );
 
   REQUIRE(v == vector( 3 , 4) );   
}