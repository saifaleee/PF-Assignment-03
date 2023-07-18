#include <iostream>

using namespace std;

double package_a(double); // function prototype
double package_b(double);
double package_c(double);


int main (){

	double data_used;
	char package;
	cout << "Enter the amount of Gb's You have used in a month" << endl;
	cin >> data_used;
	cout << "Please select a package plan from the below options" << endl;
	cout << "Package A: For Rs. 100 per month, 1 GB data is provided. Additional data can be purchased for Rs. 20 per 100 MB." << endl << "Package B: For Rs. 200 per month, 2.5 GB data is provided. Additional data can be purchased Rs. 10 per 100 MB." << endl << "Package C: For Rs. 1000 per month, unlimited access is provided" << endl;
	cin >> package;
	if (package == 'a'){
		double price_a = package_a(data_used); // call to function
		cout << "Your Total bill is :" << price_a << endl;
		}
	else if (package == 'b'){
		double price_b = package_b(data_used);
		cout << "Your Total bill is :" << price_b << endl;}
	else if (package == 'c'){
		double price_c = package_c(data_used);
		cout << "Your Total bill is :" << price_c << endl;}	
	else 
		cout << "Invalid input " << endl;	
		
	double priceb = package_b(data_used); // storing prices of other packages for later comparison between packges
	double pricec = package_c(data_used);
	double pricea = package_a(data_used); 
	if ( package == 'a' ){ // if user selects package a ,then we compare rest of package prices with pacckage a
	if (pricea < priceb && pricea < pricec ){ // checking which package has the lowest bill
	cout << "You have selected a perfect package for yourself" << endl;
	}		
	else if ( priceb < pricea && priceb < pricec ){
	cout << "We suggest you choose package B with savings upto : ";
	double savings = pricea - priceb;
	cout << savings << endl;
	}
	else if ( pricec < pricea && pricec < priceb ){
	cout << "We suggest you choose package C with savings upto : ";
	double savings = pricea - pricec;
	cout << savings << endl;
	}
	}
	
	if ( package == 'b' ){ // if user selects package b ,then we compare rest of package prices with pacckage b
	if (priceb < pricea && priceb < pricec ){ // checking which package has the lowest bill
	cout << "You have selected a perfect package for yourself" << endl;
	}		
	else if ( pricea < priceb && pricea < pricec ){
	cout << "We suggest you choose package A with savings upto : ";
	double savings = priceb - pricea; 
	cout << savings << endl;
	}
	else if ( pricec < priceb && pricec < pricea ){
	cout << "We suggest you choose package C with savings upto : ";
	double savings = priceb - pricec;
	cout << savings << endl;
	}
	}
	
	if ( package == 'c' ){
	if (pricec < pricea && pricec < priceb ){ // checking which package has the lowest bill
	cout << "You have selected a perfect package for yourself" << endl;
	}		
	else if ( pricea < pricec && pricea < priceb ){
	cout << "We suggest you choose package A with savings upto : ";
	double savings = pricec - pricea;
	cout << savings << endl;
	}
	else if ( priceb < pricea && priceb < pricec ){
	cout << "We suggest you choose package B with savings upto : ";
	double savings = pricec - priceb;
	cout << savings << endl;
	}
	}
return 0;
}
double package_a(double gb){

	double data_per_month = 1;
	double price_per_month = 100;
	double additional_data_price = 204.8; // cost of 1gb extra per month (converted mbs to GBs where 1gb=1024mb)
	double extra_gb = gb - 1;
	double price = (data_per_month*price_per_month) + (extra_gb*additional_data_price);
	return (price);
}
double package_b(double gb){

	double data_per_month = 2.5;
	double price_per_month = 200;
	double additional_data_price = 102.4; // cost of 1gb extra per month
	double extra_gb = gb - 2.5;
	double price = (data_per_month*price_per_month) + (extra_gb*additional_data_price);
	return (price);

}
double package_c(double gb){

	double data_per_month = gb;
	double price_per_month = 1000;
	double price = price_per_month;
	return (price);
}

