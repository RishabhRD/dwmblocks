//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"", "~/.local/bin/statusbar/music",5,12},

	{"", "~/.local/bin/statusbar/showRecord.sh",0,14},

	{"", "~/.local/bin/statusbar/caps.sh",0,15},

	{"", "~/.local/bin/statusbar/ip_addr.sh ethernet enp2s0f2",5,0},

	{"", "~/.local/bin/statusbar/ip_addr.sh wifi wlp3s0",5,0},

	{"📩 ", "~/.local/bin/statusbar/mailbox",0,13},

	{"", "~/.local/bin/statusbar/volume",5,10},

	{"☀: ", "~/.local/bin/statusbar/brightness",	5,11},
	
	{"📅 ", "~/.local/bin/statusbar/clock",	5,0},

	{"", "~/.local/bin/statusbar/battery BAT0",5,0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
