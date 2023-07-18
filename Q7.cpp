#include <iostream>

using namespace std;

void print_burgermenu(); // function prototype
void print_pizzamenu();
void print_sandwichmenu();

int main (){

	int select_menu,burger_menu,amount,pizza_menu,size,sandwichmenu;
	int total_charges;
	cout << "Welcome" << endl;
	cout << "Press 1 to Open the Menu for Burgers" << endl;
	cout << "Press 2 to Open the Menu for Pizzas" << endl;
	cout << "Press 3 to Open the Menu for Sandwiches" << endl;
	cin >> select_menu;
	
	switch (select_menu){
	
		case 1:
			print_burgermenu(); // print menu options (function)
			cin >> burger_menu;
			cout << "Please enter the amount you want to order" << endl;
			cin >> amount;
			switch (burger_menu){
			
				case 1:
					total_charges = 600*amount;
					break;
				case 2:
					total_charges = 650*amount;
					break;
				case 3:
					total_charges = 700*amount;
					break;
				default:
			cout << "Invalid Entry, Please try again" << endl;
			break;	
			}
		
			break;
		case 2:
			print_pizzamenu(); // prints pizza menu
			cin >> pizza_menu;
			cout << "Please enter the amount you want to order" << endl;
			cin >> amount;
			cout << "Please Select The Size You want to order" << endl;
			cout << "Press 1 for Small Size (850 pkr)" << endl; 
			cout << "Press 2 for Medium Size (1200 pkr)" << endl; 
			cout << "Press 3 for Large Size (1600 pkr)" << endl; 
			cin >> size;
			switch (size){
			
				case 1:
					total_charges = 850*amount;
					break;
				case 2:
					total_charges = 1200*amount;
					break;
				case 3:
					total_charges = 1600*amount;
					break;
				default:
				cout << "Invalid Entry, Please try again" << endl;
				break;
			
			}
		break;
		case 3:
			print_sandwichmenu(); // prints sandwich menu
			cin >> sandwichmenu;
			cout << "Please enter the amount you want to order" << endl;
			cin >> amount;
			switch (sandwichmenu){
			
				case 1:
					total_charges = 300*amount;
					break;
				case 2:
					total_charges = 325*amount;
					break;
				case 3:
					total_charges = 315*amount;
					break;
				default:
			cout << "Invalid Entry, Please try again" << endl;
			break;	
			}
		
		break;
		default :
			cout << "Invalid Entry, Please try again" << endl;
		break;
	}
	cout << "Your total Charges are : " << total_charges << endl; // displays your bill
	
return 0;
}

void print_burgermenu(){ // function definitions

	cout << "Crispy Chicken Burger (600 Pkr) : Press 1 to select this Item" <<endl;
	cout << "Beef Burger (650 Pkr) : Press 2 to select this Item" <<endl;
	cout << "Fish Burger (700 Pkr) : Press 3 to select this Item" <<endl;
	

}

void print_pizzamenu(){
	
	cout << "Please Select one Type of Pizza" <<endl;
	cout << "Chicken Tikka : Press 1 to select this Item" <<endl;
	cout << "Chicken Fajita : Press 2 to select this Item" <<endl;
	cout << "Four Seasons : Press 3 to select this Item" <<endl;
	
}

void print_sandwichmenu(){

	cout << "Club (300 Pkr) : Press 1 to select this Item" <<endl;
	cout << "Chicken (325 Pkr) : Press 2 to select this Item" <<endl;
	cout << "Vegetables (315 Pkr) : Press 3 to select this Item" <<endl;

}

