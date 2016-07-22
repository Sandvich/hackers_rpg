#include <iostream>
#include "playerone.h"

void PlayerOne::report() {
	std::cout << "Reporting on the status of the battlefield." << std::endl;
}

void PlayerOne::retreat() {
	std::cout << "Retreating from combat." << std::endl;
	this->integrity = 0;
}

int PlayerOne::action() {
	std::cout << "Starting action phase wih character " << this->name << std::endl;
	if (this->function_count>0) {
		this->retreat();
	} else {
		this->report();
	}
	this->function_count++;
	return this->function_count;
}