#include <iostream>
#include <string>

using namespace std;

void print_queries(); // function prototypes
void print_admission_queries();
void print_academic_queries();
void print_account_queries();
void print_IT_queries();
void print_sports_queries();

int main(){

	int select_campus,query_num,adm_queries,academic_queries,account_queries,IT_queries,sports_queries;
	string query; // this variable will store query of user
	cout << "Welcome to FAST-NUCES! Press 1 for Islamabad campus. Press 2 for Lahore campus. Press 3 for Karachi campus. Press 4 for Peshawar campus. Press 5 for Faisalabad campus. Press 0 to talk to an operator." << endl;
	cin >> select_campus;
	
	switch (select_campus){
	
	case 1:
		cout << "Welcome to Islamabad campus." << endl;
		print_queries(); // call to function that will display options to user
		cin >> query_num;
		
		switch (query_num){
		
		case 1:
			print_admission_queries(); 
			cin >> adm_queries;// call to function that will display options to user
			switch(adm_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query; // stored in string data type
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 2:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 3:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				default:
					cout << "Invalid Entry. Please try again" << endl;
					break;	
			}	
		break;	
		case 2:
			print_academic_queries();
			cin >> academic_queries;
			switch (academic_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 2:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 3:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				default :
					cout << "Invalid Entry. Please try again" << endl;
					break;		
			}
		break;	
		case 3:
			print_account_queries();
			cin >> account_queries;
			switch (account_queries){
				
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 2:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 3:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				default :
					cout << "Invalid Entry. Please try again" << endl;
					break;		
			}
		break;	
		case 4:
			print_IT_queries();
			cin >> IT_queries;
			switch (IT_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 0:
					cout <<"Please wait"<<endl;
					break;
				default :
					cout << "Invalid Entry. Please try again" << endl;
					break;	
			}
		break;	
		case 5:
			print_sports_queries();
			cin >> sports_queries;
			switch (sports_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 0:
					cout <<"Please wait"<<endl;
					break;
			}
		break;	
		default:
			cout << "If you know your desired extension, please dial it directly." << endl; 
		break;	
		
		
		}
	break;
		
	case 2:
		cout << "Welcome to Lahore campus." << endl;
		print_queries();
		cin >> query_num;
		
		switch (query_num){
		
		case 1:
			print_admission_queries();
			cout << "Press 4 for admission in school of civil engineering" << endl;
		cout << "Press 5 for admission in school of Science and Humanities" << endl;
			cin >> adm_queries;
			switch(adm_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 2:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 3:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 4:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 5:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;	
				default:
					cout << "Invalid Entry. Please try again" << endl;
					break;	
			}	
		break;	
		case 2:
			print_academic_queries();
			cin >> academic_queries;
			switch (academic_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 2:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 3:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				default :
					cout << "Invalid Entry. Please try again" << endl;
					break;		
			}
		break;	
		case 3:
			print_account_queries();
			cin >> account_queries;
			switch (account_queries){
				
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 2:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 3:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				default :
					cout << "Invalid Entry. Please try again" << endl;
					break;		
			}
		break;	
		case 4:
			print_IT_queries();
			cin >> IT_queries;
			switch (IT_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 0:
					cout <<"Please wait"<<endl;
					break;
				default :
					cout << "Invalid Entry. Please try again" << endl;
					break;	
			}
		break;	
		case 5:
			print_sports_queries();
			cin >> sports_queries;
			switch (sports_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 0:
					cout <<"Please wait"<<endl;
					break;
			}
		break;	
		default:
			cout << "If you know your desired extension, please dial it directly." << endl; 
		break;	
		
		
		}
	break;
		
	case 3:
		cout << "Welcome to Karachi campus." << endl;
		print_queries();
		cin >> query_num;
		
		switch (query_num){
		
		case 1:
			print_admission_queries();
			cin >> adm_queries;
			switch(adm_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 2:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 3:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				default:
					cout << "Invalid Entry. Please try again" << endl;
					break;	
			}	
		break;	
		case 2:
			print_academic_queries();
			cin >> academic_queries;
			switch (academic_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 2:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 3:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				default :
					cout << "Invalid Entry. Please try again" << endl;
					break;		
			}
		break;	
		case 3:
			print_account_queries();
			cin >> account_queries;
			switch (account_queries){
				
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 2:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 3:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				default :
					cout << "Invalid Entry. Please try again" << endl;
					break;		
			}
		break;	
		case 4:
			print_IT_queries();
			cin >> IT_queries;
			switch (IT_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 0:
					cout <<"Please wait"<<endl;
					break;
				default :
					cout << "Invalid Entry. Please try again" << endl;
					break;	
			}
		break;	
		case 5:
			print_sports_queries();
			cin >> sports_queries;
			switch (sports_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 0:
					cout <<"Please wait"<<endl;
					break;
			}
		break;	
		default:
			cout << "If you know your desired extension, please dial it directly." << endl; 
		break;	
		
		
		}
	break;
	
	
	case 4:
		cout << "Welcome to Peshawar campus." << endl;
		print_queries();
		cin >> query_num;
		
		switch (query_num){
		
		case 1:
			cout << "Press 1 for admission in school of computing." << endl;
		cout << "Press 2 for admission in school of electrical engineering." << endl;
			cin >> adm_queries;
			switch(adm_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 2:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;

				default:
					cout << "Invalid Entry. Please try again" << endl;
					break;	
			}	
		break;	
		case 2:
			print_academic_queries();
			cin >> academic_queries;
			switch (academic_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 2:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 3:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				default :
					cout << "Invalid Entry. Please try again" << endl;
					break;		
			}
		break;	
		case 3:
			print_account_queries();
			cin >> account_queries;
			switch (account_queries){
				
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 2:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 3:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				default :
					cout << "Invalid Entry. Please try again" << endl;
					break;		
			}
		break;	
		case 4:
			print_IT_queries();
			cin >> IT_queries;
			switch (IT_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 0:
					cout <<"Please wait"<<endl;
					break;
				default :
					cout << "Invalid Entry. Please try again" << endl;
					break;	
			}
		break;	
		case 5:
			print_sports_queries();
			cin >> sports_queries;
			switch (sports_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 0:
					cout <<"Please wait"<<endl;
					break;
			}
		break;	
		default:
			cout << "If you know your desired extension, please dial it directly." << endl; 
		break;	
		
		
		}
	break;
		
	
	case 5:
		cout << "Welcome to Faisalabad campus." << endl;
		print_queries();
		cin >> query_num;
		
		switch (query_num){
		
		case 1:
			print_admission_queries();
			cout << "Press 4 for admission in school of civil engineering" << endl;
		cout << "Press 5 for admission in school of Science and Humanities" << endl;
			cin >> adm_queries;
			switch(adm_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 2:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 3:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 4:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 5:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;	
				default:
					cout << "Invalid Entry. Please try again" << endl;
					break;	
			}	
		break;	
		case 2:
			print_academic_queries();
			cin >> academic_queries;
			switch (academic_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 2:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 3:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				default :
					cout << "Invalid Entry. Please try again" << endl;
					break;		
			}
		break;	
		case 3:
			print_account_queries();
			cin >> account_queries;
			switch (account_queries){
				
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 2:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 3:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				default :
					cout << "Invalid Entry. Please try again" << endl;
					break;		
			}
		break;	
		case 4:
			print_IT_queries();
			cin >> IT_queries;
			switch (IT_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 0:
					cout <<"Please wait"<<endl;
					break;
				default :
					cout << "Invalid Entry. Please try again" << endl;
					break;	
			}
		break;	
		case 5:
			print_sports_queries();
			cin >> sports_queries;
			switch (sports_queries){
			
				case 1:
					cout <<"Please enter your query:"<<endl;
					cin >> query;
					cout <<"Your query is registered. We will get back to you soon."<<endl;
					break;
				case 0:
					cout <<"Please wait"<<endl;
					break;
			}
		break;	
		default:
			cout << "If you know your desired extension, please dial it directly." << endl; 
		break;	
		
		
		}
	break;
		
	case 0:
		cout << "Please wait to talk to the operator." << endl;
		break;
	default:
		cout << "Invalid Input. Please try Again" << endl;	
	
	
	
	
	}

return 0;
}

void print_queries(){ // function definitions that will display options to user

		cout << "Press 1 for admission related queries." << endl;
		cout << "Press 2 for academics related queries." << endl;
		cout << "Press 3 for accounts and fees related queries." << endl;
		cout << "Press 4 for information technology related queries." << endl;
		cout << "Press 5 for sports related queries." << endl;

}

void print_admission_queries(){

		cout << "Press 1 for admission in school of computing." << endl;
		cout << "Press 2 for admission in school of electrical engineering." << endl;
		cout << "Press 3 for admission in school of management sciences" << endl;
		
}

void print_academic_queries(){
	
		cout << "Press 1 to apply for a degree/transcript generation" << endl;
		cout << "Press 2 to freeze your semester" << endl;
		cout << "Press 3 to add/drop courses" << endl;

}

void print_account_queries(){

		cout << "Press 1 for queries related to fee challan generation" << endl;
		cout << "Press 2 to apply for financial aid" << endl;
		cout << "Press 3 apply for a scholarship" << endl;


}

void print_IT_queries(){
	
		cout << "Press 1 to apply for an email id generation" << endl;
		cout << "Press 0 to talk to an IT expert" << endl;

}

void print_sports_queries(){
	
	cout << "Press 1 to get a sports venue booked" << endl;
	cout << "Press 0 to talk to a representative" << endl;

}
