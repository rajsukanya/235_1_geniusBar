/*
Name: Sukanya Raj
File name: Customer.cpp
Date: 9/6/18
Assignment: Project 1
Description: implementation of class Customer
*/

#include <iostream>
#include "Customer.hpp"
using namespace std;

Customer::Customer() //default constructor
{
  name_ = "unknown";
  defective_device_ = "unknown";
  wait_time_ = 0;
}

Customer::Customer(string name, string device, int wait_time) //parameterized constructor
{
  name_ = name;
  defective_device_ = device;
  wait_time_ = wait_time;
}

string Customer::getName()
{
  return name_;
}

string Customer::getDevice()
{
  return defective_device_;
}

int Customer::getWaitTime()
{
  return wait_time_;
}

void Customer::updateWaitTime(int new_wait_time)
{
  wait_time_ = new_wait_time;
}
