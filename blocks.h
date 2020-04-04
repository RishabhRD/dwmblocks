//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{" ", "~/.local/bin/statusbar/music",0,5},

	{" ", "~/.local/bin/statusbar/volume",0,10},

	{" ☀ ", "xbacklight | sed 's/\\..*//'",	0,11},
	
	{" ", "~/.local/bin/statusbar/battery BAT0",5,0},

	{"  ", "~/.local/bin/statusbar/clock",	5,0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
