//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
 	 {"", "sb-keyboard",    0,      1},
	 {"", "sb-date", 60, 0},
	 {"", "sb-clock", 60, 0},
	 {"", "sb-battery", 60, 0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
