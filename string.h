#ifndef STRING_H
#define STRING_H

class String
{
	
	
	
private:
	static unsigned instanceCounter;
	static char const null;
	String(char);
	String(char const * = "");
	//String(String const &);
	char *ptrchars;
	void upperCase(char*)const;

public:
	static String getInstance(char ch);
	static String getInstance(char const * = "");
	static String getInstance(String const &);
	String(String const&);
	String toUpper() const;
	String &refresh(char const *chars);
	void displayString();
	static unsigned getInstanceCounter();
	~String();

};
#endif

