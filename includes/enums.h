#ifndef ENUMS_H
# define ENUMS_H

enum	builtin
{
	IS_A_BUILTIN,
	IS_NOT_A_BUILTIN
};

enum	export
{
	HAS_ARG,
	HAS_NO_ARG
};

enum	access
{
	FAIL = -1,
	FOUND_BINARY
};



#endif