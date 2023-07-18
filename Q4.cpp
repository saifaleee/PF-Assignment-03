#include <iostream>
#include <cmath> // library to use power function
#include <string>

using namespace std;

double root1(double,double,double); // function prototypes
double root2(double,double,double);

int main (){

	string imgroots = "Roots of Quadratic Equation are imaginary";
	double a=0,b=0,c=0; // values of coefficients of a quadratic equation where A is coefficient of x^2 and b is coefficient of x while c is a constant
	double z=0;
	cout << "Enter the following values to find roots of Quadratic Equation" << endl;
	cout << "**************************************************************" << endl;
	cout << "Enter the value of a : ";
	cin >> a;
	cout << "Enter the value of b : ";
	cin >> b;
	cout << "Enter the value of c : ";
	cin >> c;
	
	z = ((pow(b, 2)) - 4*a*c); // checking the answer of b^2-4ac, if the answer is greater than 0 than , 2 real roots exists. If answer is equal to 0, then only 1 root exists, and if the answer is less than 0 then complex (imaginary roots) exists.

	z>=0?(z>0?(cout << "First root is " << root1(a,b,c) << " and Second Root is " << root2(a,b,c) << endl) :(cout << "Root is " << root1(a,b,c) << endl )):cout << imgroots << endl ; // priting roots using nested ternery operator

return  0;
}

double root1(double a,double b,double c){ // function for 1st root

	double root;
	double z = ((pow(b, 2)) - 4*a*c);
	root = (-b+sqrt(z))/(2*a);
	
	return (root);
}
double root2(double a,double b,double c){ // function for 2nd root

	double root;
	double z = ((pow(b, 2)) - 4*a*c);
	root = (-b-sqrt(z))/(2*a);
	
	return (root);
}
