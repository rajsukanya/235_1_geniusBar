/*
Name: Sukanya Raj
File name: GeniusBar.cpp
Date: 9/6/18
Assignment: Project 1
Description: implementation of class GeniusBar
*/

#include <iostream>
#include "GeniusBar.hpp"
using namespace std;

GeniusBar::GeniusBar()
{
  current_wait_time_ = 0;
  number_of_available_geniuses_ = TOTAL_NUMBER_OF_GENIUSES;
  number_of_customers_ = 0;
  genius_bar_[MAX_NUMBER_OF_CUSTOMERS];
}

//Precondition: number_of_customers_ < MAX_NUMBER_OF_CUSTOMERS
bool GeniusBar::addWaitingCustomer(Customer& new_customer)
{
  if(number_of_customers_ < MAX_NUMBER_OF_CUSTOMERS)
  {
    current_wait_time_ += WAIT_TIME_INCREMENT;
    new_customer.updateWaitTime(current_wait_time_);
    genius_bar_[number_of_customers_] = new_customer;
    number_of_customers_++;
    return true;
  }
  return false;
}

//Precondition: (number_of_customers_ > 0) && (number_of_available_geniuses_ > 0)
bool GeniusBar::assignGeniusToCustomer()
{
  if((number_of_customers_ > 0) && (number_of_available_geniuses_ > 0))
  {
    number_of_customers_--;
    number_of_available_geniuses_--;
    return true;
  }
  return false;
}

//Precondition: number_of_available_geniuses_ < TOTAL_NUMBER_OF_GENIUSES
bool GeniusBar::releaseGenius()
{
  if(number_of_available_geniuses_ < TOTAL_NUMBER_OF_GENIUSES)
  {
    number_of_available_geniuses_++;
    return true;
  }
  return false;
}

//Precondition: number_of_customers_ > 0
bool GeniusBar::updateCustomersWaitTime()
{
  if(number_of_customers_ > 0)
  {
    for(int g = 0; g < number_of_customers_; g++)
    {
      genius_bar_[g].updateWaitTime(genius_bar_[g].getWaitTime() + WAIT_TIME_INCREMENT);
    }
    return true;
  }
  return false;
}
