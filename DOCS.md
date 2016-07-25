# Program Docs
Players use *programs* to attack *hosts*. A program is a class derived from the *Program* class. It is very strictly defined.

To qualify as a program, a class must have:
* a public *int action()* member function, which allows the program to take its turn and returns the program's knowledge of the current game turn.
* private or protected data members that track the program's integrity and initiative (health and turn order) as well as the name of the program.
* a private or protected data member that tracks the current combat turn.
* (a) private or protected member function(s) that can be used to increase or decrease integrity, which do not allow it to go above the starting integrity.
* (a) private or protected member function(s) that can be used to change initiative.
* A public member function that allows the program to be attacked - after reducing the program's integrity it must check if it has been destroyed or not, and remove it from the battle if appropriate.
The simplest way of qualifying for these is to derive the class from the existing *Program* class.
**Note: Some functions require the class to be derived from Program - if you are writing your own, you may be able to work around this by naming it Program and not including the existing h file for Program.**

Optionally (normally a good idea), a program may have member functions that the *action* member function executes. These are made up of existing code blocks defined in the hackers core header and *may not* include arbitrary code, only calls to functions defined in that header. The *action* function, however, may contain arbitrary code. It should only make decisions as to which member functions to execute, however, and should not do anything else of its own accord (eg modifying integrity or the like).
**Note: If a program (for whatever reason) has no additional member functions, the program's *inititive* (see below) is 0. However, it won't do anything, as the *action* function will have nothing to call.**

## Code Blocks
As part of character creation and as rewards, characters will collect *code blocks*. These are short, predefined segments of code that are used to act during a program's turn. **They will eventually be put on cards and given to players so that the players can write action functions with the cards, but this is not yet ready.**

Each code block inserted into a program increases its *initiative* (see below) by 1 regardless of the number of times it is used - this means that code reuse is very important!

Certain code blocks have special limitations on their use:
* A block prefaced by "public:" **must** be placed into a public member function (*action* is allowed). This means that any other program could, in theory, execute said function.
* Several blocks contain the code "this->acted = true;". These are termed *standard blocks*, others being termed *free blocks*. A maximum of one standard block can be executed each turn.

## Initiative and Integrity
*Initiative* is the number of *code blocks* used in the program. It is not calculated automatically (yet?). The lower the number, the more often and more quickly the program will take turns.

To be precise, a program will act on turns *n(I+1)*, where n is any natural integer above 1 and I is the initiative of the program. That is, a program with initiative 11 will act on turns 12, 24, 36 and so on.

*Integrity* is effectively health. When integrity reaches 0 or below, the program is destroyed and can no longer act. It is calculated by *(S-I)*10*, where S is the programmer's skill and I is the program's initiative. This means that more skilled programmers can write larger and more complex programs, and that smaller programs are more robust (as in real life).