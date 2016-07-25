#include <iostream>
#include "playerone.h"

void PlayerOne::report() {
	std::cout << "Reporting on the status of the battlefield." << std::endl;
}

void PlayerOne::retreat() {
	std::cout << "Retreating from combat." << std::endl;
	delete(this);
}

void PlayerOne::heal(int amount) {
	if (!this->acted) {
		this->acted = true;
		std::cout << "Attempting to heal " << amount << " points of integrity." << std::endl;
		this->modify_integrity(amount);
		std::cout << "New integrity is: " << this->integrity << std::endl;
	} else {
		std::cout << "Cannot act again this turn!" << std::endl;
	}
}

int PlayerOne::action() {
	std::cout << "Starting action phase wih character " << this->name << std::endl;
	if (this->function_count>1) {
		this->retreat();
	} else {
		if (this->function_count == 1) {
			this->heal(20);
			this->heal(10);
		} else {
			this->report();
		}
	}
	this->function_count++;
	this->acted = false;
	return this->function_count;
}