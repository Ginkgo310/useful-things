Main:
	g++ -Wall bathtowel_position.cpp -o Bath -std=c++11 -pthread -lrt
Limit:
	g++ -Wall limit_test.cpp -o Limit PigpioMS.o -lpigpio -std=c++17 -pthread -lrt
PigpioMS.o: ./PigpioMS/PigpioMS.cpp
	g++ -Wall -c ./PigpioMS/PigpioMS.cpp -lpigpio -std=c++17 -pthread 
