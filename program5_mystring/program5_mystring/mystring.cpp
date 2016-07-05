#include <cstring>
#include <iostream>
#include "mystring.h"

ostream& operator<< (ostream& os, const MyString& s)
{
	os << s.str;
	return os;
}
istream& operator >> (istream& is, MyString& s)
{
	char temp[200];
	is >> temp;
	
	s = temp;
	
	return is;
}

istream & getline(istream & is, MyString & s, char delim)
{
	char temp[200];

	
	return is;
}


MyString operator+ (const MyString& s1, const MyString& s2)
{
	MyString stemp=s1;
	stemp.size = s1.size + s2.size;
	strcat(stemp.str, s2.str);
	

	return stemp;
}

bool operator< (const MyString& s1, const MyString& s2)
{
	if (strcmp(s1.str, s2.str)<0)    //s1 is less than s2
		return true;
	else return false;
 }
bool operator> (const MyString& s1, const MyString& s2)
{
	return (s2 < s1);              //s1 is more than s2
 }
bool operator<=(const MyString& s1, const MyString& s2)
{
	if (s1 < s2 || s1 == s2)return true;
	else return false;
 }
bool operator>=(const MyString& s1, const MyString& s2)
{
	if (s1 > s2 || s1 == s2)return true;
	else return false;

	return true;
 }
bool operator==(const MyString& s1, const MyString& s2)
{
	if (strcmp(s1.str, s2.str)==0)    //s1 is s2
		return true;
	else return false;
 }
bool operator!=(const MyString& s1, const MyString& s2)
{
	if (strcmp(s1.str, s2.str) != 0)    //s1 is s2
		return true;
	else return false;
 }


MyString::MyString()// empty string
{
	
	size = 0;		// no letters
	str = new char[size + 1];
}

MyString::MyString(const char* c)// conversion from c-string
{
	
	size = strlen(c);
	str = new char[size + 1];
	strcpy(str, c);
}
MyString::MyString(int i)// conversion from int
{
	size = 2;
	str = new char[size + 1];
	str[0] = (char)i;
	str[1] = '\n';
}
MyString::~MyString()
{
	delete [] str;
}// destructor
MyString::MyString(const MyString& s)
{
	size = s.size;
	str = new char[size + 50];
	strcpy(str, s.str);
	
	
	/*
	for (int i = 0; i < size + 1; i++)
	{
		str[i] = s[i];
	}
	*/
}

MyString& MyString::operator=(const MyString& s)
{
	delete [] str;
	size = s.size;
	str = new char[size + 1];
	strcpy(str, s.str);
	return *this;
}// assignment operator

MyString& MyString::operator+=(const MyString& s)
{
	return *this;
}// concatenation/assignment

char & MyString::operator[](unsigned int index)// bracket operators to access char positions
{
	return str[index];
}

const char & MyString::operator[](unsigned int index) const
{
	return str[index];
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
	
	
	return strlen(str);
}// return string length
const char* MyString::getCString() const
{
	return str;
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
