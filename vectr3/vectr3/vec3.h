#pragma once
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

	bool vec3 operator==(const vec3 &vec) const
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

	bool is_zero() {
		bool ret = true;
		if (x != 0)
			ret = false;
		if (y != 0)
			ret = false;
		if (z != 0)
			ret = false;
		return ret;
	}

	type distance_to(vec3 v) const
	{
		vec3 vec = v - this;
		return sqrt(x*x + y * y + z * z);
	}

}; 
