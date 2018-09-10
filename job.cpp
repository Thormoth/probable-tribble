#include "job.h"
#include <iostream>
using namespace std;


Job::Job()
{

}

Job::Job(int p, string j, Customer c)
{
  priority = p;
  customer = c;
}

string Job::display() const
{

return "display job information";
}

int Job::get_priority() const
{

  return 0;
}

void Job::assign(string n)
{

}
