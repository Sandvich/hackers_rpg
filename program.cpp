#include <iostream>
#include "program.h"

/* A basic program object.
 * The exact contents are flexible, but certain things are required.
 * Players will make their own player objects by using this class as a base. */

Program::Program(std::string name, int skill, int initiative) {
	this->name = name;
	this->integrity = (skill - initiative)*10;
	this->initiative = initiative;
	this->starting_integrity = integrity;
	this->function_count = 0;
	this->acted = false;
	std::cout << "Successfully created combatant with name: " << name << std::endl;
	std::cout << "Combatant has integrity: " << this->integrity << std::endl;
}

Program::~Program() {
	std::cout << this->name << " is out of the battle!" << std::endl;
}

bool Program::modify_integrity(int modifier) {
	this->integrity = this->integrity + modifier;
	if (this->integrity <= 1) {
		return false;
	} else {
		if (this->integrity > this->starting_integrity) {
			this->integrity = starting_integrity;
		}
		return true;
	}
}

void Program::modify_initiative(int modifier) {
	this->initiative = this->initiative + modifier;
}

void Program::attacked(int damage) {
	std::cout << this->name << " was attacked for " << damage << " points of damage!" << std::endl;
	bool alive = this->modify_integrity(-damage);
	std::cout << this->integrity << " integrity remaining." << std::endl;
	if (!alive) {
		delete(this);
	}
}

int Program::action() {
	// Code to decide which predefined function to execute.
	this->function_count++;
	return this->function_count;
}