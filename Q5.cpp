#include <iostream>
#include <string>

using namespace std;

void check_color1(int); // function prototype
void check_color2(int);

string color1,color2;

int main(){

	int option,num1,num2,color;
	cout << "You are given 2 options to select from" << endl;
	cout << "Enter 1, to find the color of the number you entered (according to given grid) " << endl;
	cout << "Enter 2, to find if 2 numbers on the grid have the same color or not (according to given grid) " << endl;
	cin >> option;
	
	if (option == 1){
		
		cout << "Please Enter Number of square from the Grid : ";
		cin >> num1;
		if ((num1 >= 1 && num1 <=9) || (num1 >= 19 && num1 <=27) || (num1 >= 37 && num1 <=45) || (num1 >= 55 && num1 <=63) || (num1 >= 73 && num1 <=81)){ // checking row1
		
			color = num1%3; // check column
			if (color == 1)
			cout << "The Color of the Square is Gray" << endl;
			if (color == 2)
			cout << "The Color of the Square is Blue" << endl;
			if (color == 0)
			cout << "The Color of the Square is Red" << endl;
		}
		else if ((num1 >= 10 && num1 <=18) || (num1 >= 28 && num1 <=36) || (num1 >= 46 && num1 <=54) || (num1 >= 64 && num1 <=72)){ // checking row 2
			color = num1%3; // column
			if (color == 1)
			cout << "The Color of the Square is Blue" << endl;
			if (color == 2)
			cout << "The Color of the Square is Red" << endl;
			if (color == 0)
			cout << "The Color of the Square is Gray" << endl;
		}
		else 
			cout << "Invalid Entry, Please try again" << endl;
	}
	else if ( option == 2 )
	{
	cout << "Please Enter 1st Number from the Grid :";
	cin >> num1;
	cout << "Please Enter 2nd Number from the Grid :";
	cin >> num2;
	check_color1(num1); // passing arguments to function that will print its color on console
	check_color2(num2);
	if ( color1 == color2 ) // checking if the colors match
		cout << "Both numbers on the grid have the same color" << endl;
	else 
		cout << "Both numbers on the grid do not have the same color" << endl;	
	}
	else 
		cout << "Invalid Entry, Please try again" << endl;
return 0;
}

void check_color1(int num1){ // function that checks color grid
int color;
if ((num1 >= 1 && num1 <=9) || (num1 >= 19 && num1 <=27) || (num1 >= 37 && num1 <=45) || (num1 >= 55 && num1 <=63) || (num1 >= 73 && num1 <=81)){
		
			color = num1%3;
			if (color == 1){
			cout << "The Color of the Square is Gray" << endl;
			color1 = "Gray"; // initializing global variable
			}
			if (color == 2){
			cout << "The Color of the Square is Blue" << endl;
			color1 = "Blue";
			}
			if (color == 0){
			cout << "The Color of the Square is Red" << endl;
			color1 = "Red";
			}
		}
		else if ((num1 >= 10 && num1 <=18) || (num1 >= 28 && num1 <=36) || (num1 >= 46 && num1 <=54) || (num1 >= 64 && num1 <=72)){
			color = num1%3;
			if (color == 1){
			cout << "The Color of the Square is Blue" << endl;
			color1 = "Blue";
			}
			if (color == 2){
			cout << "The Color of the Square is Red" << endl;
			color1 = "Red";
			}
			if (color == 0){
			cout << "The Color of the Square is Gray" << endl;
			color1 = "Gray";
			}
		}
		else 
			cout << "Invalid Entry, Please try again" << endl;

}
void check_color2(int num1){ // function that checks color grid of second number
int color;
if ((num1 >= 1 && num1 <=9) || (num1 >= 19 && num1 <=27) || (num1 >= 37 && num1 <=45) || (num1 >= 55 && num1 <=63) || (num1 >= 73 && num1 <=81)){
		
			color = num1%3;
			if (color == 1){
			cout << "The Color of the Square is Gray" << endl;
			color2 = "Gray"; // initializing global variable
			}
			if (color == 2){
			cout << "The Color of the Square is Blue" << endl;
			color2 = "Blue";
			}
			if (color == 0){
			cout << "The Color of the Square is Red" << endl;
			color2 = "Red";
			}
		}
		else if ((num1 >= 10 && num1 <=18) || (num1 >= 28 && num1 <=36) || (num1 >= 46 && num1 <=54) || (num1 >= 64 && num1 <=72)){
			color = num1%3;
			if (color == 1){
			cout << "The Color of the Square is Blue" << endl;
			color2 = "Blue";
			}
			if (color == 2){
			cout << "The Color of the Square is Red" << endl;
			color2 = "Red";
			}
			if (color == 0){
			cout << "The Color of the Square is Gray" << endl;
			color2 = "Gray";
			}
		}
		else 
			cout << "Invalid Entry, Please try again" << endl;

}
