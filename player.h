/* Player H file. */
#include <string>

#ifndef __PLAYER_H_INCLUDED__
#define __PLAYER_H_INCLUDED__

class Player {
protected:
	int function_count; //For remembering which function we call next
	bool modify_integrity(int modifier);
	/* Most player-defined functions should go here,
	 * This is because they should not be accesible by other objects - said other objects will
	 * be other entites within a given battle.*/
	std::string name;
	int integrity;
	int initiative;
public:
	Player(std::string name, int skill, int initiative);
	int action(); // Since the mainloop executes this function, it must be public.
};

#endif