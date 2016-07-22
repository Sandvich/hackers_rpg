#include <stdio.h>
#include "player.h"

player::modify_integrity(int modifier) {
	this->integrity = this->integrity + modifier
	if (this->integrity <= 1) {
		return false
	} else {
		return true
	}
};

/* A basic player object.
 * The exact contents are flexible, but certain things are required.
 * Players will make their own player objects by using this class as a base. */