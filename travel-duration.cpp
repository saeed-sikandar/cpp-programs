#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
	struct time{
		int hour;
		int minutes;
		int timeConverter;
		
	};
	
	time departure_time; 
	cout << "Select 1 for AM and 2 for PM: "; cin >> departure_time.timeConverter;
	cout << "Enter the Departure Hour: "; cin >> departure_time.hour;
	cout << "Enter the Departure Minutes: "; cin >> departure_time.minutes;
	cout << "Departure Time is: " << departure_time.hour << ":" << departure_time.minutes<<endl;
	cout << "========================================================"<<endl;
	
	time arrival_time; 
	cout << "Select 1 for AM and 2 for PM: "; cin >> arrival_time.timeConverter;
	cout << "Enter the Arrival Hour: "; cin >> arrival_time.hour;
	cout << "Enter the Arrival Minutes: "; cin >> arrival_time.minutes;
	cout << "Arrival Time is: " << arrival_time.hour << ":" << departure_time.minutes;
	
	
	
	return 0;
}
