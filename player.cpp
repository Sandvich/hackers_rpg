#include <iostream>
#include "player.h"

/* A basic player object.
 * The exact contents are flexible, but certain things are required.
 * Players will make their own player objects by using this class as a base. */

Player::Player(std::string name, int skill, int initiative) {
	this->name = name;
	this->integrity = (skill - initiative)*10;
	this->initiative = initiative;
	this->function_count = 0;
	std::cout << "Successfully created combatant with name: " << name << std::endl;
	std::cout << "Combatant has integrity: " << this->integrity << std::endl;
}

bool Player::modify_integrity(int modifier) {
	this->integrity = this->integrity + modifier;
	if (this->integrity <= 1) {
		return false;
	} else {
		return true;
	}
};

int Player::action() {
	// Code to decide which predefined function to execute.
	this->function_count++;
	return this->function_count;
}