#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main(){

	int afg,aus,bang,eng,india,ireland,pak,scot,s_africa,srilanka,w_indies,zimb;

	
	srand(time(0)); // seeding function to current cpu time
	cout << "Round One :" << endl;
	afg = rand();  // random number
	aus = rand();
	bang = rand();
	eng = rand();
	india = rand();
	ireland = rand();
	pak = rand();
	scot = rand();
	s_africa = rand();
	srilanka = rand();
	w_indies = rand();
	zimb = rand();
	
	string m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,m13,m14; // string variables for each winning team in each match
	
	cout << "Match 1: Team A vs. Team B, ";
	if ( afg > aus )
		m1 = "Team A";
	else 
		m1 = "Team B";
	cout << "Won by " << m1 << endl;	
	cout << "Match 2: Team C vs. Team D, ";
	if ( bang > eng )
		m2 = "Team C";
	else 
		m2 = "Team D";
	cout << "Won by " << m2 << endl;		
	cout << "Match 3: Team E vs. Team F, ";
	if ( india > ireland )
		m3 = "Team E";
	else 
		m3 = "Team F";		
	cout << "Won by " << m3 << endl;			
	cout << "Match 4: Team G vs. Team H, ";
	if ( pak > scot )
		m4 = "Team G";
	else 
		m4 = "Team H";
	cout << "Won by " << m4 << endl;			
	cout << "Match 5: Team I vs. Team J, ";
	if ( s_africa > srilanka )
		m5 = "Team I";
	else 
		m5 = "Team J";	
	cout << "Won by " << m5 << endl;			
	cout << "Match 6: Team K vs. Team L, ";
	if ( w_indies > zimb )
		m6 = "Team K";
	else 
		m6 = "Team L";		
	cout << "Won by " << m6 << endl;				
		
	cout << "Round Two :" << endl;
	afg = rand();  // giving random numbers again
	aus = rand();
	bang = rand();
	eng = rand();
	india = rand();
	ireland = rand();
	pak = rand();
	scot = rand();
	s_africa = rand();
	srilanka = rand();
	w_indies = rand();
	zimb = rand();
	
	cout << "Match 7: " << m1 << " Vs. " << m2 << ", ";
	if (m1=="Team A" && m2 == "Team C"){
		if ( afg > bang )
			m7 = "Team A";
		else 
			m7 = "Team C";
	}
	if (m1=="Team B" && m2 == "Team C"){
		if ( aus > bang )
			m7 = "Team B";
		else 
			m7 = "Team C";
	}
	if (m1=="Team A" && m2 == "Team D"){
	if ( afg > eng )
			m7 = "Team A";
		else 
			m7 = "Team D";
	}
	if (m1=="Team B" && m2 == "Team D"){
	if ( aus > eng )
			m7 = "Team B";
		else 
			m7 = "Team D";
	}
	cout << "Won by " << m7 << endl;
	
	cout << "Match 8: " << m3 << " Vs. " << m4 << ", ";
	if (m3=="Team E" && m4 == "Team G"){
		if ( india > pak )
			m8 = "Team E";
		else 
			m8 = "Team G";
	}
	if (m3=="Team E" && m4 == "Team H"){
		if ( india > scot )
			m8 = "Team E";
		else 
			m8 = "Team H";
	}
	if (m3=="Team F" && m4 == "Team G"){
		if ( ireland > pak )
			m8 = "Team F";
		else 
			m8 = "Team G";
	}
	if (m3=="Team F" && m4 == "Team H"){
		if ( ireland > scot )
			m8 = "Team F";
		else 
			m8 = "Team H";
	}
	cout << "Won by " << m8 << endl;
	
	cout << "Match 9: " << m5 << " Vs. " << m6 << ", ";
	if (m5=="Team I" && m6 == "Team K"){
		if ( s_africa > w_indies )
			m9 = "Team I";
		else 
			m9 = "Team K";
	}
	if (m5=="Team I" && m6 == "Team L"){
		if ( s_africa > zimb )
			m9 = "Team I";
		else 
			m9 = "Team L";
	}
	if (m5=="Team J" && m6 == "Team K"){
		if ( srilanka > w_indies )
			m9 = "Team J";
		else 
			m9 = "Team K";
	}
	if (m5=="Team J" && m6 == "Team L"){
		if ( srilanka > zimb )
			m9 = "Team J";
		else 
			m9 = "Team L";
	}
	cout << "Won by " << m9 << endl;		
	
	cout << "Round Three (Round-Robin) :" << endl; 
	cout << "Match 10: " << m7 << " Vs. " << m8 << ", ";
	if( (rand()%10) > 5 ){ // random number between 0 and 10
		m10 = m7;
	}
	else{
		m10 = m8;
		 }
	cout << "Won by " << m10 << endl;		
	cout << "Match 11: " << m8 << " Vs. " << m9 << ", ";
	if( (rand()%10) > 5 ){
		m11 = m8;
	}
	else{
		m11 = m9;
		}
	cout << "Won by " << m11 << endl;	
	cout << "Match 12: " << m9 << " Vs. " << m7 << ", ";
	if( (rand()%10) > 5 ){
		m12 = m9;
		
	}
	else{
		m12 = m7;
		}
	cout << "Won by " << m12 << endl;	
	
	if ((m10==m11) || (m10==m12) || (m11==m12)){ // checking weather a toss is needed 
	
		if (m10==m11){
			cout << "Final Match :" << endl;
			cout << "Match 13: " << m10 << " Vs. " << m12 << ", " << endl;
			if( (rand()%10) > 5 )
				m13 = m10;
			else 
				m13 = m12;
			cout << "Won by " << m13 << endl;			
		}
		if (m10==m12){
			cout << "Final Match :" << endl;
			cout << "Match 13: " << m10 << " Vs. " << m11 << ", " << endl;
			if( (rand()%10) > 5 )
				m13 = m10;
			else 
				m13 = m11;
			cout << "Won by " << m13 << endl;		
		}
		if (m11==m12){
			cout << "Final Match :" << endl;
			cout << "Match 13: " << m10 << " Vs. " << m11 << ", " << endl ;
			if( (rand()%10) > 5 )
				m13 = m11;
			else 
				m13 = m10;
			cout << "Won by " << m13 << endl;	
		
		}
	m14 = m13;	
	}
	else {
		if ((rand()%1) == 1){ // toss between 2 matches
		cout << m10 << " qualified for the final after winning the toss." << endl;
		
			cout << "Match 13: " << m11 << " Vs. " << m12 << ", " << endl;
			if( (rand()%10) > 5 )
				m13 = m11;
			else 
				m13 = m12;
			cout << "Won by " << m13 << endl;	
			cout << "Final Match :" << endl;
			cout << "Match 14: " << m13 << " Vs. " << m10 << ", " << endl ;
			if( (rand()%10) > 5 )
				m14 = m13;
			else 
				m14 = m10;
			cout << "Won by " << m14 << endl;		
				
		}
		else
		cout << m11 << " qualified for the final after winning the toss." << endl;
		
			cout << "Match 13: " << m10 << " Vs. " << m12 << ", " << endl;
			if( (rand()%10) > 5 )
				m13 = m10;
			else 
				m13 = m12;
			cout << "Won by " << m13 << endl;	
			cout << "Final Match :" << endl;
			cout << "Match 14: " << m13 << " Vs. " << m11 << ", " << endl ;
			if( (rand()%10) > 5 )
				m14 = m13;
			else 
				m14 = m11;
			cout << "Won by " << m14 << endl;		
		
	
	}
	cout << "Congratulations to " << m14 << " for winning the T20 World Cup 2020." << endl;	
	
	

return 0;
}
