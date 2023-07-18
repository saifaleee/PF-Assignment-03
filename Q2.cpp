#include <iostream>
#include <string>

using namespace std;

int main (){

	string weather; // string data type variable that will store appropraite weather condition
	
	cout << "Welcome to trip Advisor" << endl;
	cout << "Enter the Outlook " << endl;
	cin >> weather ;
	
	if ( weather == "sunny" ){
	
		double humidity;
		cout << "Enter the Humidity" << endl;
		cin >> humidity;
		if ( humidity < 40 )
			cout << "You can go to trip" << endl;
		else if ( humidity > 60 ) 
			cout << "Stay at Home" << endl;
		else {
		
			string temp;
			cout << "Enter the Temperature" << endl;
			cin >> temp;
			if ( temp == "normal" )
				cout << "You can go for trip" << endl;
			else if ( temp == "high" )
				cout << "Stay at Home " << endl;
			else
				cout << "Invalid Input" << endl;
			
		}
	}
	
	else if ( weather == "overcast" ){
		
		cout << "Enter Chance of Precipitation" << endl;	
		double precipitation;
		cin >> precipitation;
		
		if ( precipitation >= 50 )
			cout << "Stay at Home" << endl;
		else {
			
			string wind;
			cout << "Enter Wind Factor" << endl;
			cin >> wind;
			if ( wind == "strong" )
				cout << "Stay at Home" << endl;
			else if ( wind == "moderate" ) 
				cout << "You can go on trip" << endl;
			else
				cout << "Invalid Input" << endl;
		}		
	}
	
	else if ( weather == "rain" ){
		
		cout << "Enter Visibility" << endl;	
		string visibility;
		cin >> visibility;
		
		if ( visibility == "normal" )
			cout << "You can go on trip" << endl;
		else if ( visibility == "poor" ) 
			cout << "Stay at Home" << endl;
		else
			cout << "Invalid Input" << endl; 		
		}
	
	else 
		cout << "Invalid Input" << endl;	
	
return 0;
}
