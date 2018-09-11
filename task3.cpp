#include <iostream>
#include "customer.h"
#include "job.h"
#include <vector>

using namespace std;

Customer findCustomerByName(){
  
}

int main()
{

  int jobs = 0;
  string cust_name;

  vector<Customer> customers;
  cout << "loading Customers...\n\n";

  customers.push_back(Customer("D David", "1 West Street", "123-456"));
  customers.push_back(Customer("A Alice", "2 North Street", "234-567"));
  customers.push_back(Customer("C Carl", "3 East Street", "345-678"));
  customers.push_back(Customer("Z Zoro", "2 North Street", "456-789s"));

  cout << "Number of jobs for today: ";
  cin >> jobs;
  for (int i = 0; i < jobs; i++) {
    cout << "Job " << i + 1 << ": \n";
    cout << "Customer Name: ";
    cin >> cust_name;
    /* code */
  }


  // cout << customers[1].display_all() << endl << customers[3].display_short() << endl;

  return 0;
}
