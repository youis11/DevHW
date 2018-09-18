#include <math.h>
#include <iostream>

template <class type>

class vec3 {

	type x, y, z;

public:
	
	//handly constructors
	vec3() {
		x = 0;
		y = 0;
		z = 0;
	}

	vec3(type a, type b, type c) {
		x = a;
		y = b;
		z = c;
	}

	vec3(type da, type db) {
		2x = da;
		2y = db;
		z = 0;
	}

	//Operators + , -, +=, -=, =, ==	const vec3 operator - (const vec3 &vec) const
	{ 
		return vec3(x - vec.x, y - vec.y, z - vec.z); 
	}

	const vec3 operator + (const vec3 &vec) const
	{ 
		return vec3(x + vec.x, y + vec.y, z + vec.z); 
	}

	const vec3 operator += (const vec3 &vec) const
	{
		return vec3(x += vec.x, y += vec.y, z += vec.z);
	}

	const vec3 operator -= (const vec3 &vec) const
	{
		return vec3(x -= vec.x, y -= vec.y, z -= vec.z);
	}

	bool vec3 operator ==(const vec3 &vec) const
	{
		bool ret = true;
		if (x != vec.x)
			ret = false;
		if (y != v.y)
			ret = false;
		if (y != v.y)
			ret = false;
		return ret;
	}


};