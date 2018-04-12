//File String.cpp
#include <cstdio>
#include <cstring>
#include <cctype>
#include <cstddef>
#include "string.h"

using namespace std;

unsigned String::instanceCounter = 0;
char const String::null = '\0';
String::String(char ch)
{
		ptrchars = new char[2];
		ptrchars[0] = ch;
		ptrchars[1] = null;
		++instanceCounter;
}

String::String(char const* cptr)
{
	ptrchars = new char[strlen(cptr) +1];
	strcpy(ptrchars, cptr);
	++instanceCounter;
	
}

String::String(String const &newString)
{
	ptrchars = new char[strlen(newString.ptrchars) +1];
	strcpy(ptrchars, newString.ptrchars);
	++instanceCounter;
	
}

String String::getInstance(char ch)
{
	String newInstance(ch);
	return newInstance;
	
}

String String::getInstance(char const* chars)
{
	String newInstance(chars);
	return newInstance;
	
}

String String::getInstance(String const &newString)
{
	String newInstance(newString);
	return newInstance;
	
}

unsigned String::getInstanceCounter()
{
	return instanceCounter;
}

String::~String()
{
	delete [] ptrchars;
	--instanceCounter;
}

String String::toUpper() const
{
	String newInstance(*this);
	upperCase(newInstance.ptrchars);
	return newInstance;
}

String &String::refresh(char const *chars)
{
	size_t newLength = strlen(chars);
	if (strlen(ptrchars) != newLength)
		{
			delete [] ptrchars;
			ptrchars = new char [newLength +1];
			
		}
		
	strcpy(ptrchars, chars);
	return *this;
	
}

void String::displayString()
{
	std::puts(ptrchars);
	
}

void String::upperCase(char *str) const 
{
	for (std::size_t i = 0; i< std::strlen(str); i++)
	str[i] = static_cast<char>(std::toupper(str[1]));
	
}
