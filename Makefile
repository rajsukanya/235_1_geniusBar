all: Customer.hpp Customer.cpp GeniusBar.hpp GeniusBar.cpp project_tester.cpp
	g++ -std=c++11 -o geniusBar Customer.cpp GeniusBar.cpp project_tester.cpp
