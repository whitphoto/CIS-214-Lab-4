#ifndef STRING_H
#define STRING_H

class String
{
	
	
	
privae:
	static unsidgner instanceCounter;
	staic char const null;
	String(char);
	String(char const *="");
	//String(String const &);
	char *ptrchars;
	void upperCase(char*)const;

public
	static String getInstance(char ch);
	static String getInstance(char const *="");
	static String getInstance(String const &);
	String(String const&);
	String toUpper() const;
	String &refresh(char const *chars);
	void displayString();
	static unsigned getInstanceCounter();
	~String();

};
#endif

