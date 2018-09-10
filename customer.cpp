#include "customer.h"
#include <iostream>

using namespace std;

Customer::Customer()
{
  cout << "You must enter a name\n";
  // delete object to clear up memory;
}

Customer::Customer(string n)
{
  name = n;
  address = "unknown";
  account_number = "unknown";

}


Customer::Customer(string n, string add, string acct)
{
  name = n;
  address = add;
  account_number = acct;

}


//TODO: short format:
//Customer name: Alice
//Address: 2 North Street

string Customer::display_short()const
{

return "ding";
}

//TODO: long format:
// display customer info in format:
//Alice, 2 North Street, 234-567

string Customer::display_all()const
{

  return "dong";
}



bool Customer::operator<(Customer right)const
{


}

string Customer::get_name()const { return name; }
// display customer info in format:
//Alice, 2 North Street, 234-567
