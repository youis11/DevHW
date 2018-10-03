#ifndef _STRING_H

#define _STRING_H

#include <string.h>
#include <assert.h>

class STRING 
{

private:
	char* string = nullptr;
	unsigned int allocated_memory = 0u;

public:

	STRING() {}
	
	STRING(const char* string) {
		assert(string != nullptr);
		if (string != nullptr) {
			allocated_memory = strlen(string) + 1;
			this->string = new char(allocated_memory);
			strcpy_s(this->string, allocated_memory, string);
		}
	}

	~STRING() {
		if (string != nullptr) {
			delete[] string;
			string = nullptr;
			allocated_memory = 0;
		}
	}

	STRING (const STRING &string) {
		assert(string.string != nullptr);
		if (string.string != nullptr) {
			allocated_memory = strlen(string.string) + 1;
			this->string = new char(allocated_memory);
			strcpy_s(this->string, allocated_memory, string.string);
		}

	}

	STRING operator= (const char* string) {
		assert(string != nullptr);
		if (string != nullptr) {
			allocated_memory = strlen(string) + 1;
			delete[] string;
			this->string = new char(allocated_memory);
			strcpy_s(this->string, allocated_memory, string);
		}
		return *this;// this->string = (char*)string;
	}

	STRING operator= (const STRING &string) {
		assert(string.string != nullptr);
		if (string.string != nullptr) {
			allocated_memory = strlen(string.string) + 1;
			delete[] string.string;
			this->string = new char(allocated_memory);
			strcpy_s(this->string, allocated_memory, string.string);
		}
		return *this;//this->string = string.string;
	}

	STRING operator+= (const char* string) {
		assert(string != nullptr);
		if (string != nullptr) {
			allocated_memory = strlen(string) + 1;
			delete[] string;
			this->string = new char(allocated_memory);
			strcpy_s(this->string, allocated_memory, string);
		}
		return (this->string += string);
	}

	/*bool operator== (const STRING &otherString) const {
		return(text == otherString.text);
	}

	bool operator== (const char* otherText) const {
		return(text == otherText);
	}*/

	const char* GetString() const {
		return string;
	}
};


#endif // !_STRING_H

