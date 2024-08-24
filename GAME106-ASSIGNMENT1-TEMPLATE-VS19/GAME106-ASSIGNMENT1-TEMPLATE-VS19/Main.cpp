#include <iostream>

#include "Vec3.h"

using namespace std;

int main()
{
	Vec3 v1(-6, 8, 1);
	Vec3 v2(5, 12, 1);
	Vec3 result;

	cout << "v1 = (" << v1.x << ", " << v1.y << ", " << v1.z << ")" << endl;

	result = v1.Add(v2);

	cout << "The addition of vectors v1 and v2 is (" << result.x << ", " << result.y << ", " << result.z << ")" << endl;

	result = v1.Subtract(v2);

	cout << "The subtraction of vectors v1 and v2 is (" << result.x << ", " << result.y << ", " << result.z << ")" << endl;

	result = v1.ScalarMultiplication(5);

	cout << "The scalar multiplication of 5 times vector v1 is (" << result.x << ", " << result.y << ", " << result.z << ")" << endl;

	cout << "The magnitude of vector v1 is " << v1.Mag() << endl;

	return 0;
}