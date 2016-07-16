#include <iostream>     
#include <string>     
#include "student.h"     
using namespace std;

Student::Student()
{
	FirstName = "FDefaut";
	LastName = "LDefault";
	Course = "CDefault";
}
Student::Student(string fn, string ln, string cn)
{
	FirstName = fn;
	LastName = ln;
	Course = cn;
}
void Student::SetFName(string fn)
{
	FirstName = fn;
}
void Student::SetLName(string ln)
{
	LastName = ln;
}
void Student::SetCourse(string cn)
{
	Course = cn;
}

//BIOLOGY CLASS

Biology::Biology()
{
	FirstName = "FDefaut";
	LastName = "LDefault";
	Course = "Biology";
	
}
Biology::Biology(string fn, string ln)
{
	FirstName = fn;
	LastName = ln;
	Course = "Biology";
}
void Biology::PrintRecord()
{
	//TO BE DONE
}
void Biology::SetLab(int s)   { lab = s; };
void Biology::SetTerm1(int s) { term1 = s; };
void Biology::SetTerm2(int s) { term2 = s; };
void Biology::SetTerm3(int s) { term3 = s; };
void Biology::SetFinal(int s) { bfinal = s; };


//THEATER CLASS

Theater::Theater()
{
	FirstName = "FDefaut";
	LastName = "LDefault";
	Course = "Theater";

}
Theater::Theater(string fn, string ln)
{
	FirstName = fn;
	LastName = ln;
	Course = "Theater";
}
void Theater::PrintRecord()
{
	//TO BE DONE
}
void Theater::SetPart(int s) { participation = s; };
void Theater::SetMidterm(int s) { midterm = s; };
void Theater::SetFinal(int s) { tfinal = s; };


//COMPUTER SCIENCE CLASS

CompSci::CompSci()
{
	FirstName = "FDefaut";
	LastName = "LDefault";
	Course = "Computer Science";

}
CompSci::CompSci(string fn, string ln)
{
	FirstName = fn;
	LastName = ln;
	Course = "Computer Science";
}
void CompSci::PrintRecord()
{
	//TO BE DONE
}
void CompSci::SetProg1(int s) { p1 = s; };
void CompSci::SetProg2(int s) { p2 = s; };
void CompSci::SetProg3(int s) { p3 = s; };
void CompSci::SetProg4(int s) { p4 = s; };
void CompSci::SetProg5(int s) { p5 = s; };
void CompSci::SetProg6(int s) { p6 = s; };
void CompSci::SetTest1(int s) { test1 = s; };
void CompSci::SetTest2(int s) { test2 = s; };
void CompSci::SetFinal(int s) { csfinal = s; };