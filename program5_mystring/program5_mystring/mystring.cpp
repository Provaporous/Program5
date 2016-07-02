#include <cstring>
#include <iostream>
#include "mystring.h"

ostream& operator<< (ostream& os, const MyString& s)
{
	
	
	return os;
}
istream& operator >> (istream& is, MyString& s)
{
	
	
	return is;
}

istream & getline(istream & is, MyString & s, char delim)
{
	
	
	return is;
}


MyString operator+ (const MyString& s1, const MyString& s2)
{
	MyString snew;

	return snew;
}

bool operator< (const MyString& s1, const MyString& s2)
{


	return true;
 }
bool operator> (const MyString& s1, const MyString& s2)
{


	return true;
 }
bool operator<=(const MyString& s1, const MyString& s2)
{


	return true;
 }
bool operator>=(const MyString& s1, const MyString& s2)
{


	return true;
 }
bool operator==(const MyString& s1, const MyString& s2)
{


	return true;
 }
bool operator!=(const MyString& s1, const MyString& s2)
{


	return true;
 }


MyString::MyString()// empty string
{

}

MyString::MyString(const char* c)// conversion from c-string
{

}
MyString::MyString(int i)// conversion from int
{

}
MyString::~MyString()
{

}// destructor
MyString::MyString(const MyString& s)
{

}

MyString& MyString::operator=(const MyString& s)
{


	return *this;
}// assignment operator

MyString& MyString::operator+=(const MyString& s)
{
	return *this;
}// concatenation/assignment

char & MyString::operator[](unsigned int index)// bracket operators to access char positions
{
	
}

const char & MyString::operator[](unsigned int index) const
{
	
}

MyString & MyString::insert(unsigned int index, const MyString & s)
{
	

	return *this;
}
// insert s into the string at position "index"
// find index of the first occurrence of s inside the string


int MyString::indexOf(const MyString & s) const
{
	return 0;
}//  return the index, or -1 if not found



int MyString::getLength() const
{
	
	
	return 0;
}// return string length
const char* MyString::getCString() const
{
	
}// return c-string equiv

MyString MyString::substring(unsigned int, unsigned int) const
{
	MyString s;

	return s;
}
MyString MyString::substring(unsigned int) const
{
	MyString s;

	return s;
}
