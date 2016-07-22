# Program Docs
Players use *programs* to attack *hosts*. A program is a class derived from the *Player* class. It is very strictly defined.

To qualify as a program, a class must have:
* a public *int action()* member function, which allows the program to take its turn and returns the program's knowledge of the current game turn.
* private or protected data members that track the program's integrity and initiative (health and turn order) as well as the name of the program.
* a private or protected data member that tracks the current combat turn.
* (a) private or protected member function(s) that can be used to increase or decrease integrity, which do not allow it to go above the starting integrity.
* (a) private or protected member function(s) that can be used to change initiative.
The simplest way of qualifying for these is to derive the class from the existing *Player* class.

Optionally (normally a good idea), a program may have private or protected member functions that the action member function executes. These are made up of existing code blocks defined in the hackers core header and *may not* include arbitrary code, only calls to functions defined in that header.

## Initiative and Integrity
*Initiative* is the number of code blocks used in the program. It is not calculated automatically (yet?). The lower the number, the more often and more quickly the program will take turns.
To be precise, a program will act on turns n(I+1), where n is any natural integer above 1 and I is the initiative of the program. That is, a program with initiative 11 will act on turns 12, 24, 36 and so on.
*Integrity* is effectively health. When integrity reaches 0 or below, the program is destroyed and can no longer act. It is calculated by (S-I)*10, where S is the programmer's skill and I is the program's initiative. This means that more skilled programmers can write larger programs, and that smaller programs are more robust (as in real life).