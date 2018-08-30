all: Customer.h Customer.cpp GeniusBar.h GeniusBar.cpp project_tester.cpp
	g++ -o proj1 Customer.cpp GeniusBar.cpp project_tester.cpp
