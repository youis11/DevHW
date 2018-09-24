#ifndef VEC3

#include <iostream>

#define VEC3

template <class TYPE>

class vec3 {

	TYPE x, y, z;

public:

	//handly constructors
	vec3() {
		x = 0;
		y = 0;
		z = 0;
	}

	vec3(TYPE x, TYPE y, TYPE z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	vec3(TYPE dz, TYPE dy, TYPE dz) {
		2x = dz;
		2y = dy;
		2z = dz;
	}

	//Operators + , -, +=, -=, =, ==
	vec3 operator - (const vec3 &vec) const
	{
		return vec3(x - vec.x, y - vec.y, z - vec.z);
	}

	vec3 operator + (const vec3 &vec) const
	{
		return vec3(x + vec.x, y + vec.y, z + vec.z);
	}

	vec3 operator += (const vec3 &vec)
	{
		return vec3(x += vec.x, y += vec.y, z += vec.z);
	}

	vec3 operator -= (const vec3 &vec)
	{
		return vec3(x -= vec.x, y -= vec.y, z -= vec.z);
	}

	vec3 operator = (const vec3 vec)
	{
		return vec3(x = vec.x, y = vec.y, z = vec.z);
	}

	bool vec3 operator==(const vec3 &vec) const
	{	
		return(x == vec.x && y == vec.y && z == vec.z);
	}

	//methods
	void normalize()
	{
		int l = 1.0 / sqrt(x*x + y * y + z * z);
		x *= l;
		y *= l;
		z *= l;
	}

	void zero()
	{
		x = 0;
		y = 0;
		z = 0;
	}

	bool is_zero() const{
		return (x == 0 && y == 0 && z == 0);
	}

	float distance_to(const Vec3 &vector) {
		return sqrt((x - vector.x) * (x - vector.x)) + ((y - vector.y) * (y - vector.y)) + ((z - vector.z) * (z - vector.z)));
	}

	float distance_squared_to(const Vec3 &vector) {
		return ((x - vector.x) * (x - vector.x)) + ((y - vector.y) * (y - vector.y)) + ((z - vector.z) * (z - vector.z)));
	}

};


#endif // !VEC3

