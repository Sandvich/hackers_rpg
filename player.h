/* Player H file. */

#ifndef __PLAYER_H_INCLUDED__
#define __PLAYER_H_INCLUDED__

class player() {
	int function_count = 0; //For remembering which function we call next
	/* Most player-defined functions should go here,
	 * This is because they should not be accesible by other objects - said other objects will
	 * be other entites within a given battle.*/
protected:

public:
	int action(); // Since the mainloop executes this function, it must be public.
};

#endif