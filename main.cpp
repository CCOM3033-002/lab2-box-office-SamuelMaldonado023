// Samuel Maldonado Batista // SamuelMaldonado023
// This program will show the tickets sales and revenue the theather made

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    string moviename;
    double adulttickets = 10.00;
    double childtickets = 6.00;
    double amountadults,amountchildren,totalrevenue,netboxoffice,distributorcut;
    int printwidth = 30;
    int printsmallwidth = 5;

//Ask for user input


    cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater." << endl;

    cout << setw(printwidth) << left << "Enter the name of the movie:" << right;
        cin >> moviename;
        cin.ignore(100,'\n');
    cout << setw(printwidth) << left << "Enter the amount of adult tickets sold:" << right << setw(printsmallwidth) ;
        cin >> amountadults;
        cin.ignore(100,'\n');
    cout << setw(printwidth) << left << "Enter the amount of child tickets sold:" << right << setw(printsmallwidth);
        cin >> amountchildren;
        cin.ignore(100,'\n');



// Calculate revenue
totalrevenue = (amountadults * adulttickets) + (amountchildren * childtickets);
netboxoffice = totalrevenue / 20;
distributorcut = totalrevenue - netboxoffice;

//Display results
    cout << endl;
    cout << setw(printwidth) << left << "Movie Name" << right << setw(printsmallwidth) << "\"" << moviename << "\"" << endl ;
    cout << setw(printwidth) << left << "Adult Tickets Sold:" << right << setw(printsmallwidth) << amountadults<< endl;
    cout << setw(printwidth) << left << "Child Tickets Sold:" << right << setw(printsmallwidth) << amountchildren<< endl;
    cout << setw(printwidth) << left << "Gross Box Office Profit:" << right << "$" << setw(printsmallwidth) << totalrevenue << endl;
    cout << setw(printwidth) << left << "Net Box Office Profit:" << right << "$" << setw(printsmallwidth) << netboxoffice<< endl;
    cout << setw(printwidth) << left << "Amount Paid to Distributor:" << right << "$" << setw(printsmallwidth) << distributorcut << endl;

    return 0;

}

