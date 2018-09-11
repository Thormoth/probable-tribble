#include <iostream>
#include "customer.h"
#include "job.h"
#include <vector>

using namespace std;

int main()
{
  vector<Customer> customers;
  customers.push_back(Customer("D David", "1 West Street", "123-456"));
  customers.push_back(Customer("A Alice", "2 North Street", "234-567"));
  // customers[0] = Customer("D David", "1 West Street", "123-456");
  // customers[1] = Customer("A Alice", "2 North Street", "234-567");
  // customers[2] = Customer("D David", "1 West Street", "123-456");
  // customers[3] = Customer("D David", "1 West Street", "123-456");
  // customers[4] = Customer("D David", "1 West Street", "123-456");


  cout << customers[1].get_name() << endl;

  return 0;
}
