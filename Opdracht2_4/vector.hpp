#ifndef vector_HPP
#define vector_HPP
#include <iostream>


/// @file

/// \brief
/// vector
/// \details
/// This is an ADT the uses operators on a vector.
/// There 2 integers in the vector with the first one called X and the second one Y.
/// The appropriate constructors and operators are provided.
///

class vector {
private:
     int x;
     int y;
public:

   /// \brief
   /// constructor from explicit vector
   /// \details
   /// This constructor initializes the vector with X and Y.
   /// The default value for Y is 0 so you can use vectors with only 1 entetie.

     vector( int x, int y = 0 ):
     x( x ), y( y )
 {}
    /// \brief   
   /// compare two vectors
   /// \details
   /// This operator tests if both vectors are the same.
   ///Only if both vectors are identical then it returns true.

 
    bool operator==( const vector & rhs ) const {
      return ( x == rhs.x ) && ( y == rhs.y ) ;
   }
 
    /// \brief   
   /// Add with 1 argument
   /// \details
   /// This operator tests if the add operator works with 1 argument.
   /// So it return the exect same as befort.

    vector operator+(){
        return  vector(  x, y);
    }
       /// \brief   
   /// Add 2 vectors X and Y with each other
   /// \details
   /// This operator adds 2 vectors with each other.
   /// Only if both vectors have 2 enteties.
    vector operator+(const vector & rhs) const{
        return  vector(  rhs.x + x, rhs.y + y);
    }
    
       /// \brief   
   /// Add equals 2 vector with each other
   /// \details
   /// This operator adds and equals 1 vector to a other one.

// v & += v    
    vector & operator+=(const vector & rhs){
            x += rhs.x;
            y += rhs.y;
        return  *this;
    }
    
       /// \brief   
   /// Multiply a vector with a integer
   /// \details
   /// This operator mutiply's a given integer with a vector
    
    
       /// \brief   
   /// Multiply a vector with a integer
   /// \details
   /// This operator mutiply's a given vector with a integer
vector operator*(const int & rhs) const{
        return vector(x * rhs, y * rhs) ;
        }
               /// \brief   
   /// Multiply a Interger with a Vector
   /// \details
   /// This operator mutiply's a given integer with a vector
   
 friend vector operator*(const int a, const vector &b){
     return vector(b.x * a, b.y * a);
     }

/// \brief   
   /// Vector equals Multiply by integer
   /// \details
   /// This operator equals multiply by a vector and int
    vector & operator*=(const int & rhs){
            x = x * rhs;
           y =  y * rhs;
        return  *this;
    }
        /// \brief   
   ///Print vector
   /// \details
   /// This operator Prints the given vector and the output of the formula
    friend std::ostream & operator<<( std::ostream & lhs, const vector & rhs ){
      return lhs 
         << "{" 
         << rhs.x
         << "," 
         << rhs.y
         << "}"
         ;
   }   
 
};


#endif // vector_HPP
