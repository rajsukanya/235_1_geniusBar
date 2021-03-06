#ifndef CUSTOMER_H
#define CUSTOMER_H

using namespace std;

class Customer
{
  public:
    Customer();
    Customer(string name, string device = "unknown", int wait_time = 0);
    string getName();
    string getDevice();
    int getWaitTime();
    void updateWaitTime(int new_wait_time);
  private:
    string name_;
    string defective_device_;
    int wait_time_;
};

#endif
