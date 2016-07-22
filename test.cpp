#include <iostream>
#include <string>
#include "program.h"
#include "playerone.h"

int main() {
	// Test creating a basic program.
	Program *p = new Program("Name", 15, 10);
	PlayerOne *player = new PlayerOne("Test Combatant", 15, 10);
	player->action();
	player->action();
	return 0;
}