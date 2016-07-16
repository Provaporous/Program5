#ifndef _STUDENT_H
#define _STUDENT_H  
#include <string> 
using namespace std;
class Student
{
public:
	virtual void PrintRecord() = 0;
	virtual void SetFName(string fn);
	virtual void SetLName(string ln);
	virtual void SetCourse(string cn);
protected:
	Student();                              
	Student(string fn, string ln, string cn);  
	string FirstName;
	string LastName;
	string Course;
};

class Biology : public Student
{
public:
	Biology();
	Biology(string fn, string ln);
	void PrintRecord();
	void SetLab(int s);
	void SetTerm1(int s);
	void SetTerm2(int s);
	void SetTerm3(int s);
	void SetFinal(int s);
private:
	double lab, term1, term2, term3, bfinal;
};

class Theater : public Student
{
public:
	Theater();
	Theater(string fn, string ln);
	void PrintRecord();
	void SetPart(int s);
	void SetMidterm(int s);
	void SetFinal(int s);
private:
	double participation,midterm,tfinal;
};

class CompSci : public Student
{
public:
	CompSci();
	CompSci(string fn, string ln);
	void PrintRecord();
	void SetProg1(int s);
	void SetProg2(int s);
	void SetProg3(int s);
	void SetProg4(int s);
	void SetProg5(int s);
	void SetProg6(int s);
	void SetTest1(int s);
	void SetTest2(int s);
	void SetFinal(int s);
private:
	double p1,p2,p3,p4,p5,p6,test1,test2,csfinal;
};




























#endif