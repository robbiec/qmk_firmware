#pragma once

#include "quantum.h"

#define LAYOUT( \
	K00, K01, \
	K10, K11, \
	K20, K21 \
) \
{ \
	{ K00,   K01 }, \
	{ K10,   K11 }, \
	{ K20,   K21 } \
}
