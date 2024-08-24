#include "Vec3.h"

Vec3::Vec3()
{
	//COMPLETE THIS MEMBER FUNCTION 
	//HERE YOU WILL SET ALL VECTOR COMPONENTS TO 0
	/*float x;
	float y;
	float z;*/
	x = 0;
	y = 0;
	z = 0;
	//Initilising variables to zero.
}

Vec3::Vec3(float x_, float y_, float z_)
{
	//COMPLETE THIS MEMBER FUNCTION 
	//HERE YOU WILL SET ALL VECTOR COMPONENTS TO THE PARAMETERS SUPPLIED
	x = x_;
	y = y_;
	z = z_;
	//passing the input value to excisting variables
}

Vec3 Vec3::Add(Vec3 b)
{
	//b.x will provide the value of x in vector b.
	//COMPLETE THIS MEMBER FUNCTION 
	//HERE YOU WILL ADD THE COMPONENTS FOR THE TWO VECTORS
	return Vec3( x + b.x, y + b.y, z + b.z );
}

Vec3 Vec3::Subtract(Vec3 b)
{
	//COMPLETE THIS MEMBER FUNCTION 
	//HERE YOU WILL SUBTRACT THE COMPONENTS FOR THE TWO VECTORS
	return Vec3(x - b.x,y - b.y,z - b.z );
}

Vec3 Vec3::ScalarMultiplication(float s)
{
	//COMPLETE THIS MEMBER FUNCTION 
	//HERE YOU WILL MULTIPLY THE SCALAR WITH THE VECTOR COMPONENTS
	/*Vec3 a;*/
	return Vec3( s *x, s * y, s *z );
}

float Vec3::Mag()
{
	//COMPLETE THIS MEMBER FUNCTION 
	//HERE YOU WILL CALCULATE THE MAGNITUDE OF THE VECTOR
	//USE THE FUNCTION sqrt() TO CALCULATE THE SQUARE ROOT
	//USE THE FUNCTION pow(n, exp) TO CALCULATE THE EXPONENT OF A NUMBER}
	float mag = 0;
	mag = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	return mag;
}