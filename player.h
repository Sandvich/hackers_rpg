/* Player H file. */
#include <string>

#ifndef __PLAYER_H_INCLUDED__
#define __PLAYER_H_INCLUDED__

class player() {
	int function_count = 0; //For remembering which function we call next
	bool modify_integrity(int modifier);
	/* Most player-defined functions should go here,
	 * This is because they should not be accesible by other objects - said other objects will
	 * be other entites within a given battle.*/
protected:
	/* I haven't yet decided on all of these.
	 * More may be added or taken away in the future. */
	std::string name;
	int integrity = 0;
	int initiative;
public:
	int action(); // Since the mainloop executes this function, it must be public.
};

#endif