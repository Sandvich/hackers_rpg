#include <iostream>
#include <string>
#include "program.h"
#include "playerone.h"

int main() {
	// Test creating a basic program.
	Program *p = new Program("Name", 15, 10);
	PlayerOne *player = new PlayerOne("Test Combatant", 15, 10);
	player->action();
	player->attacked(10);
	player->action();
	p->attacked(70);
	return 0;
}