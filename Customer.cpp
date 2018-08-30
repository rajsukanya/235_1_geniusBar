#include <iostream>
#include "Customer.h"
using namespace std;

Customer::Customer()
{
}

Customer::Customer(string name, string device, int wait_time)
{
}

string Customer::getName()
{
  cout << "getName" <<endl;
}

string Customer::getDevice()
{
  cout << "getDevice" <<endl;
  cout << "Finished" <<endl;
}

int Customer::getWaitTime()
{
  cout << "inside getWaitTime" <<endl;
  cout << "getWaitTime" <<endl;
}

void Customer::updateWaitTime(int new_wait_time)
{
  cout << "updateWaitTime" <<endl;
}
