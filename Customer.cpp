#include <iostream>
#include "Customer.h"
using namespace std;

Customer::Customer()
{
}

Customer::Customer(string name, string device = "unknown", int wait_time = 0)
{
}

string Customer::getName()
{
  cout << "getName" <<endl;
}

string Customer::getDevice()
{
  cout << "getDevice" <<endl;
}

int Customer::getWaitTime()
{
  cout << "getWaitTime" <<endl;
}

void Customer::updateWaitTime(int new_wait_time)
{
  cout << "updateWaitTime" <<endl;
}
