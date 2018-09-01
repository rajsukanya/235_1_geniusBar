#ifndef GENIUS_BAR_H
#define GENIUS_BAR_H

#include "Customer.hpp"

class GeniusBar
{
  public:
    GeniusBar();
    bool addWaitingCustomer(Customer& new_customer);
    bool assignGeniusToCustomer();
    bool releaseGenius();
    bool updateCustomersWaitTime();
  private:
    static const int TOTAL_NUMBER_OF_GENIUSES = 3;
    static const int MAX_NUMBER_OF_CUSTOMERS = 5;
    static const int WAIT_TIME_INCREMENT = 5;
    int current_wait_time_;
    int number_of_available_geniuses_;
    int number_of_customers_;
    Customer genius_bar_[MAX_NUMBER_OF_CUSTOMERS];
};

#endif
