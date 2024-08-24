#ifndef VEC3_H
#define VEC3_H

#include <iostream>
#include <math.h>

using namespace std;

class Vec3
{
	public:
		Vec3();
		Vec3(float x_, float y_, float z_);

		Vec3 Add(Vec3 b);

		Vec3 Subtract(Vec3 b);

		Vec3 ScalarMultiplication(float s);

		float Mag();

		float x;
		float y;
		float z;
};

#endif