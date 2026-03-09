#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  const double ClassACost = 15.00;
  const double ClassBCost = 12.00;
  const double ClassCCost = 9.00;

  int ticketsA, ticketsB, ticketsC;
  double totalA, totalB, totalC, total;
  cout << "Number of tickets for Class A, B, and C\n";
  cin >> ticketsA >> ticketsB >> ticketsC;
  totalA = ticketsA * ClassACost;
  totalB = ticketsB * ClassBCost;
  totalC = ticketsC * ClassCCost;
  total = totalA + totalB + totalC;

  // TODO: Declare integer variables for tickets sold for each class

  // TODO: Declare double variables for total sales per class and grand total

  // TODO: Prompt user and read number of Class A tickets sold

  // TODO: Prompt user and read number of Class B tickets sold

  // TODO: Prompt user and read number of Class C tickets sold

  // TODO: Calculate sales for each class

  // TODO: Calculate total sales

  cout << setprecision(2) << fixed;
  cout << "Tickets sold for Class A " << ticketsA << " Sales Price for A   " << totalA << endl;
  cout << "Tickets sold for Class B " << ticketsB << " Sales Price for B   " << totalB << endl;
  cout << "Tickets sold for Class C " << ticketsC << " Sales Price for C   " << totalC << endl;
  cout << "Total Sales                              " << total << endl;
}
