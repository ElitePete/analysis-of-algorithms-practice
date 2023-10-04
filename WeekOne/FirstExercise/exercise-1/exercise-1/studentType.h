#pragma once
#include <iostream>
#include <string>


using namespace std;


class studentType {
private:
    string firstName;
    string lastName;
    char courseGrade;
    int testScore;
    int programmingScore;
    double GPA;

public:
    studentType();
    studentType(string fn, string ln, char cg, int ts, int ps, double gpa);

    // Set bois
    void setFirstName(const string& fn);
    void setLastName(const string& ln);
    void setGrade(char cg);
    void setTestScore(int ts);
    void setProgScore(int ps);
    void setGPA(double gpa);

    // Get bois
    string getFirstName() const;
    string getLastName() const;
    char getGrade() const;
    int getTestScore() const;
    int getProgScore() const;
    double getGPA() const;

    void setStudent(string fn, string ln, char cg, int ts, int ps, double gpa);
    void print() const;
};
