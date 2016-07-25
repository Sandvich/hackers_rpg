/* Test player H file */
#include "program.h"

#ifndef __PLAYERONE_H_INCLUDED__
#define __PLAYERONE_H_INCLUDED__

class PlayerOne: public Program {
	void report();
	void retreat();
	void heal(int amount);
public:
	int action();
	using Program::Program;
};

#endif