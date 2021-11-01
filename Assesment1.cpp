#include<iostream> 
#include<string> // using string identifier to be able to use getline
using namespace std;
int main()
{
	int age, price1, price2, total, avg; //initializing age and prices as int
	string name;                            // initiallizing name as string
	cout << "Please enter your full name:" << endl; // asking user to enter thei full name
	getline(cin, name);                              //using getline so the program can take full name of user with gaps (cin alone cant do that)
	cout << "Please enter your age:" << endl;         // asking user to input their age
	cin >> age;
	cout << "Enter two Product Price(0-100):" << endl;// asking user to input two product prices
	cin >> price1>> price2;                           // taking product prices
	if (price1 < 100 && price1 >0 || price2 < 100 && price2 >0) //checking if the product prices are less than 100 and more than 0
	{
				cout << "_______________________________________________________________________________________" << endl; //this is just so it the output looks clean
				total = price1 + price2;  //summing up prices value and assigning them to total
				avg = total / 2;    // getting average by dividing total with 2
				switch (avg / 10)      //dividing average with 10 so we use less cases
				{
				case 10:
				case 9:
				case 8:
				case 7:
				{
					cout << "\n"<< name << "\n" << age << "\nYou're spending quite a lot without saving anything" << endl; // if avg meets one of the above cases then this command will be exectued 
					break;
				}
				case 6:
				case 5:
				{
					cout << "\n" << name << "\n" << age << "\nMedium spending and saving, well done" << endl;//if avg meets one of the above cases then this command will be exectued
					break;
				}
				case 4:
				case 3:
				case 2:
				case 1:
				{
					cout << "\n" << name << "\n" << age << "\nIt seems like you didnt spend much" << endl;//if avg meets one of the above cases then this command will be exectued
					break;
				}
				default:
				{
					cout << "\n" << name << "\n" << age << "\nYou practically didnt buy anything at all" << endl;// if avg doesnt meet any of the above cases then this will be executed
					break;
				}
				}

	}

	else
	{
		cout << "Invalid! Please enter the correct values" << endl; // this will be executed if values are more than 100 or less than 0 or if are not numbers
	}


	return 0;

}