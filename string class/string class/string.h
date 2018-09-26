#ifndef _STRING

#define _STRING

class STRING 
{

public:
	char* text;

	STRING() {}
	
	STRING(const STRING &otherString) {
		text = otherString.text;
	}

	STRING(const char* text) {
		this->text = (char*)text;
	}

	STRING operator= (const STRING &otherString) {
		return text = otherString.text;
	}

	STRING operator= (const char* otherText) {
		 return text = (char*)otherText;
	}

	bool operator== (const STRING &otherString) const {
		return(text == otherString.text);
	}

	bool operator== (const char* otherText) const {
		return(text == otherText);
	}
};


#endif // !_STRING

