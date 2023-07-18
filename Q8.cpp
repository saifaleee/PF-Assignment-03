#include <iostream>

using namespace std;

int main(){
	
	int rupees,preferred_note;
	int note500=0,note100=0,note50=0,note20=0,note10=0,note5=0,note1=0,noteP=0;
	cout << "Enter amount of rupees\n" << endl ;
	cin >> rupees;
	cout << "Enter your Preferred Note" << endl;
	cin >> preferred_note;
	if ( (100000 >= rupees) && (rupees >=100) ){ // cheking limit of entered rupees
	
		if (rupees >= preferred_note)
		{
		noteP = rupees/preferred_note;
			if ( noteP > 200 ){ // setting limit for preffered note at 200
			noteP = 200;}
			
		rupees = rupees - (noteP*preferred_note) ;
							
		}
		
		if (rupees >= 500 && preferred_note != 500 ) // != is used to skip a part because calculation of preffered note is done above
		{
		note500 = rupees/500;
		rupees = rupees - (note500*500);
		}
		
		if (rupees >= 100 && preferred_note != 100 )
		{
		note100 = rupees/100;
		rupees = rupees - (note100*100);
		}
		
		if (rupees >= 50 && preferred_note != 50)
		{
		note50= rupees/50;
		rupees = rupees - (note50*50);
		}
			
		if (rupees >= 20 && preferred_note != 20 )
		{
		note20 = rupees/20;
		rupees = rupees - (note20*20);
		}
				
		if (rupees >= 10 && preferred_note != 10 )
		{
		note10 = rupees/10;
		rupees = rupees - (note10*10);
		}	
		if (rupees >= 5 && preferred_note != 5 )
		{
		note5 = rupees/5;
		rupees = rupees - (note5*5);
		}		
		if (rupees >= 1 && preferred_note != 1 )
		{
		note1 = rupees/1;
		rupees = rupees - (note1*1);
		}			
		
		
	
	}
	else {
	
		cout << "You have entered Value which is out of range. Please try again" << endl;
	
	}
		if (preferred_note == 500) // figuring out which preffered note the user entered and assigning it its correct variable
			note500 = noteP;
		if (preferred_note == 100) 
			note100 = noteP;
		if (preferred_note == 50)
			note50 = noteP;
		if (preferred_note == 20)
			note20 = noteP;	
		if (preferred_note == 10)
			note10 = noteP;	
		if (preferred_note == 5)
			note5 = noteP;	
		if (preferred_note == 1)
			note1 = noteP;
	cout << "Currency Note: Number\n"; // displaying total notes 
	cout << "500\t\t" << note500 << endl;
	cout << "100\t\t" << note100 << endl;
	cout << "50\t\t" << note50 << endl;
	cout << "20\t\t" << note20 << endl;
	cout << "10\t\t" << note10 << endl;
	cout << "5\t\t" << note5 << endl;
	cout << "1\t\t" << note1 << endl;
	
}	
