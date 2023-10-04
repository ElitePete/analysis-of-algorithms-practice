#include "studentType.h"


studentType::studentType() : firstName(""), lastName(""), courseGrade('*'), testScore(0), programmingScore(0), GPA(0.0) {}

studentType::studentType(string fn, string ln, char cg, int ts, int ps, double gpa) {

	setStudent(fn, ln, cg, ts, ps, gpa);

}
void studentType::setStudent(string fn, string ln, char cg, int ts, int ps, double gpa) {

	firstName = fn;
	lastName = ln;
	courseGrade = cg;
	testScore = ts;
	programmingScore = ps;
	GPA = gpa;


}
// Set bois
void studentType::setFirstName(const string& fn) { firstName = fn; }
void studentType::setLastName(const string& ln) { lastName = ln; }
void studentType::setGrade(char cg) { courseGrade = cg; }
void studentType::setTestScore(int ts) { testScore = ts; }
void studentType::setProgScore(int ps) { programmingScore = ps; }
void studentType::setGPA(double gpa) { GPA = gpa; }

// Get bois
string studentType::getFirstName() const { return firstName; }
string studentType::getLastName() const { return lastName; }
char studentType::getGrade() const { return courseGrade; }
int studentType::getTestScore() const { return testScore; }
int studentType::getProgScore() const { return programmingScore; }
double studentType::getGPA() const { return GPA; }


void studentType::print() const {

	cout << "Name: " << firstName << " " << lastName << endl;
	cout << "Grade: " << courseGrade << endl;
	cout << "Test Score: " << testScore << endl;
	cout << "Programming score: " << programmingScore << endl;
	cout << "GPA: " << GPA << endl;

}
