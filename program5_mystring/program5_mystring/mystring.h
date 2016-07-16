
#include <iostream>
using namespace std;

//--------------------------------------------------------------------------------------
//--					Program 5 - Mystring
//--		Austin Gottselig
//--		Section 3
//--
//--		Insert function doesnt work :(
//--		
//--------------------------------------------------------------------------------------



class MyString
{
  friend ostream& operator<< (ostream& os, const MyString& s);
  friend istream& operator>> (istream& is, MyString& s);
  friend istream& getline (istream& is, MyString& s, char delim = '\n');

  friend MyString operator+ (const MyString& s1, const MyString& s2);

  friend bool operator< (const MyString& s1, const MyString& s2);
  friend bool operator> (const MyString& s1, const MyString& s2);
  friend bool operator<=(const MyString& s1, const MyString& s2);
  friend bool operator>=(const MyString& s1, const MyString& s2);
  friend bool operator==(const MyString& s1, const MyString& s2);
  friend bool operator!=(const MyString& s1, const MyString& s2);

public:
  MyString();				// empty string
  MyString(const char* c);		// conversion from c-string
  MyString(int i);			// conversion from int
  ~MyString();				// destructor
  MyString(const MyString& s);		// copy constructor
  MyString& operator=(const MyString& s);   // assignment operator
  MyString operator+(const MyString& s);    // concatination operator, edited from suggested
  MyString& operator+=(const MyString& s);  // concatenation/assignment

  // bracket operators to access char positions
  char& operator[] (unsigned int index);
  const char& operator[] (unsigned int index) const;

  // insert s into the string at position "index"
  MyString& insert(unsigned int index, const MyString& s);

  // find index of the first occurrence of s inside the string
  //  return the index, or -1 if not found
  int indexOf(const MyString& s) const;
  
  int getLength() const;		// return string length
  const char* getCString() const;	// return c-string equiv

  MyString substring(unsigned int i, unsigned int j) const;
  MyString substring(unsigned int start) const;

private:

  // declare your member data here
	char* str;		// pointer to my dynamic array of chars
	int size;

};