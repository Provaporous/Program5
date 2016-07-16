#include <cstring>
#include <iostream>
#include "mystring.h"
//--------------------------------------------------------------------------------------
//--					Program 5 - Mystring
//--		Austin Gottselig
//--		Section 3
//--
//--		Insert function doesnt work :(
//--		
//--------------------------------------------------------------------------------------
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
	delete[]  s.str;
	s.str = new char[200];
	if (delim == '\n')
	{
		cin.getline(s.str,200);
	}
	else
	{
		cin.getline(s.str, 200,delim);
	}
	

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

// empty string
MyString::MyString()
{
	
	size = 0;		// no letters
	str = new char[size + 1];
	str[0] = '\0';
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
MyString::~MyString()   // DESTRUCTOR
{
	delete [] str;
}// destructor
MyString::MyString(const MyString& s)    // CONSTRUCTOR
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

MyString& MyString::operator=(const MyString& s)   // Assignment operator
{
	delete [] str;
	size = s.size;
	str = new char[size + 1];
	strcpy(str, s.str);
	return *this;
}
MyString MyString::operator+(const MyString & s)  // concatination operator, edited from suggested
{
	MyString temp = *this;
	delete[] temp.str;
	temp.size += s.size;
	temp.str = new char[temp.size + 1];
	strcpy(temp.str, str);
	strcat(temp.str, s.str);

	return temp;
}
// assignment operator

MyString& MyString::operator+=(const MyString& s)
{
	
	MyString temp = *this;
	delete [] str;
	size += s.size;
	str = new char[size + 1];
	strcpy(str, temp.str);
	strcat(str, s.str);

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
	
	/*
	
	Cannot get to work without memory error
	This gets close but with garbage data tacked on, and unix throws an error with it

	MyString strtemp;
	strtemp.str = new char[size + 1];
	strcpy(strtemp.str, str);
	size = size + s.size;
	delete[] str;
	str = new char[size + 1];
	for (int i = 0; i < index; i++)
	{
		str[i] = strtemp.str[i];
	}
	for (int i = index; i < s.size+index; i++)
	{
		str[i] = s.str[i-index];
	}
	for (int i = (index + s.size); i < size;i++)
	{
		str[i] = strtemp.str[i-index+4];
	}

	

	*/
	return *this;
}
// insert s into the string at position "index"
// find index of the first occurrence of s inside the string


int MyString::indexOf(const MyString & s) const
{
	bool maybe = false;
	bool found = false;
	int maybeindex = -1;
	for (int i = 0; i < size; i++)
	{
		if (str[i] == s.str[0])
		{
			maybe = true;
			maybeindex = i;
		}
		while (maybe == true)
		{
			for (int j = 0; j < s.size; j++)
			{
				if (str[j + i] != s.str[j])maybe = false;
			}
			if (maybe == true) found = true;
			if (found = true) return maybeindex;
			else maybeindex = -1;
		}
	}
	return -1;
	

}//  return the index, or -1 if not found



int MyString::getLength() const
{
	
	
	return strlen(str);
}// return string length
const char* MyString::getCString() const
{
	return str;
}// return c-string equiv

MyString MyString::substring(unsigned int i, unsigned int j) const
{
	MyString temp=*this;
	
	return temp;
}
MyString MyString::substring(unsigned int start) const
{
	MyString temp = *this;
	/*
	
	
	temp.size = size - start;
	delete[] temp.str;
	temp.str = new char[temp.size + 1];
	for (int j = 0; j < temp.size; j++)
	{
		temp.str[0] = str[start + j];
	}
	*/
	return temp;
}
