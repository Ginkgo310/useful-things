Main:
	g++ -Wall bathtowel_position.cpp -o Bath -std=c++11 -pthread -lrt
Limit:
	g++ -Wall limit_test.cpp -o Limit -lpigpio -std=c++11 -pthread
