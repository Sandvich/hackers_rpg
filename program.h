/* Program H file. */
#include <string>

#ifndef __PROGRAM_H_INCLUDED__
#define __PROGRAM_H_INCLUDED__

class Program {
protected:
	~Program();
	int function_count; //For remembering which function we call next
	bool modify_integrity(int modifier);
	void modify_initiative(int modifier);
	std::string name;
	int integrity;
	int initiative;
	/* Most player-defined functions should go here,
	 * This is because they should not be accesible by other objects - said other objects will
	 * include other entites within a given battle.*/
public:
	Program(std::string name, int skill, int initiative);
	int action(); // Since the mainloop executes this function, it must be public.
	void attacked(int damage);
	/* A few player-defined functions must go here - they will be explicitly mentioned
	 * by the code blocks in question (particularly powerful blocks may insist on being
	 * public to limit their usefulness.*/
};

#endif