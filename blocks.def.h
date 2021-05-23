//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/     /*Interval*/    /*Signal*/
    {"",        "memory",       30,             10},
    {"",        "volume",       0,              11},
    {"",        "datetime",     60,             12},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
