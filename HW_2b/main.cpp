#include <iostream>
#include <iomanip>
#include <string>
#include <ctype.h>
using namespace std;

void getInfo(char (&street)[30], char (&city)[20], char (&state)[3], char (&zip)[6], char(&address)[60]);
void displayAddress (char(&address)[60]);

int main()
{
	char input = 'Y';

	do 
	{
		system("cls");

		char street[30];
		char city[20];
		char state[3];
		char zip[6];
		char address[60] = "";

		getInfo(street, city, state, zip, address);
		strcat_s(address, street);
		strcat_s(address, ", ");
		strcat_s(address, city);
		strcat_s(address, ", ");
		strcat_s(address, state);
		strcat_s(address, ", ");
		strcat_s(address, zip);
				
		displayAddress(address);
		
		cout << "Do you want to run the program again? (Y/N)"; 
		cin >> input;
		input = toupper(input);
		
	} while (input != 'N');
		
	return 0; 
}
void getInfo(char(&street)[30], char(&city)[20], char(&state)[3], char(&zip)[6], char(&address)[60])
{	
	cin.ignore();

	cout << "Enter your street address: ";
	cin.getline(street, 30);
	cout << "Enter your city: ";
	cin.getline(city, 20);
	cout << "Enter your state (2 Characters): ";
	cin.getline(state, 3);
	cout << "Enter your 5-Digit zip code: ";
	cin.getline(zip, 6);
		
}

void displayAddress(char(&address)[60])
{
	cout << endl << "Your full address is: " << endl << address << endl;
}