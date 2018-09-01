all: Customer.h Customer.cpp GeniusBar.h GeniusBar.cpp project_tester.cpp
	g++ -std=c++11 -o geniusBar Customer.cpp GeniusBar.cpp project_tester.cpp
