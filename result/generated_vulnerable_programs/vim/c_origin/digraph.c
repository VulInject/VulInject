



#include "vim.h"

#if defined(FEAT_DIGRAPHS) || defined(PROTO)

typedef int result_T;

typedef struct digraph
{
    char_u	char1;
    char_u	char2;
    result_T	result;
} digr_T;

static void printdigraph(digr_T *dp, result_T *previous);


static garray_T	user_digraphs = {0, 0, (int)sizeof(digr_T), 10, NULL};


static digr_T digraphdefault[] = {
	{'N', 'U', 0x0a},	
	{'S', 'H', 0x01},
	{'S', 'X', 0x02},
	{'E', 'X', 0x03},
	{'E', 'T', 0x04},
	{'E', 'Q', 0x05},
	{'A', 'K', 0x06},
	{'B', 'L', 0x07},
	{'B', 'S', 0x08},
	{'H', 'T', 0x09},
	{'L', 'F', 0x0a},
	{'V', 'T', 0x0b},
	{'F', 'F', 0x0c},
	{'C', 'R', 0x0d},
	{'S', 'O', 0x0e},
	{'S', 'I', 0x0f},
	{'D', 'L', 0x10},
	{'D', '1', 0x11},
	{'D', '2', 0x12},
	{'D', '3', 0x13},
	{'D', '4', 0x14},
	{'N', 'K', 0x15},
	{'S', 'Y', 0x16},
	{'E', 'B', 0x17},
	{'C', 'N', 0x18},
	{'E', 'M', 0x19},
	{'S', 'B', 0x1a},
	{'E', 'C', 0x1b},
	{'F', 'S', 0x1c},
	{'G', 'S', 0x1d},
	{'R', 'S', 0x1e},
	{'U', 'S', 0x1f},
	{'S', 'P', 0x20},
	{'N', 'b', 0x23},
	{'D', 'O', 0x24},
	{'A', 't', 0x40},
	{'<', '(', 0x5b},
	{'/', '/', 0x5c},
	{')', '>', 0x5d},
	{'\'', '>', 0x5e},
	{'\'', '!', 0x60},
	{'(', '!', 0x7b},
	{'!', '!', 0x7c},
	{'!', ')', 0x7d},
	{'\'', '?', 0x7e},
	{'D', 'T', 0x7f},
	{'P', 'A', 0x80},
	{'H', 'O', 0x81},
	{'B', 'H', 0x82},
	{'N', 'H', 0x83},
	{'I', 'N', 0x84},
	{'N', 'L', 0x85},
	{'S', 'A', 0x86},
	{'E', 'S', 0x87},
	{'H', 'S', 0x88},
	{'H', 'J', 0x89},
	{'V', 'S', 0x8a},
	{'P', 'D', 0x8b},
	{'P', 'U', 0x8c},
	{'R', 'I', 0x8d},
	{'S', '2', 0x8e},
	{'S', '3', 0x8f},
	{'D', 'C', 0x90},
	{'P', '1', 0x91},
	{'P', '2', 0x92},
	{'T', 'S', 0x93},
	{'C', 'C', 0x94},
	{'M', 'W', 0x95},
	{'S', 'G', 0x96},
	{'E', 'G', 0x97},
	{'S', 'S', 0x98},
	{'G', 'C', 0x99},
	{'S', 'C', 0x9a},
	{'C', 'I', 0x9b},
	{'S', 'T', 0x9c},
	{'O', 'C', 0x9d},
	{'P', 'M', 0x9e},
	{'A', 'C', 0x9f},
	{'N', 'S', 0xa0},
#   define DG_START_LATIN 0xa1
	{'!', 'I', 0xa1},
	{'~', '!', 0xa1},	
	{'C', 't', 0xa2},
	{'c', '|', 0xa2},	
	{'P', 'd', 0xa3},
	{'$', '$', 0xa3},	
	{'C', 'u', 0xa4},
	{'o', 'x', 0xa4},	
	{'Y', 'e', 0xa5},
	{'Y', '-', 0xa5},	
	{'B', 'B', 0xa6},
	{'|', '|', 0xa6},	
	{'S', 'E', 0xa7},
	{'\'', ':', 0xa8},
	{'C', 'o', 0xa9},
	{'c', 'O', 0xa9},	
	{'-', 'a', 0xaa},
	{'<', '<', 0xab},
	{'N', 'O', 0xac},
	{'-', ',', 0xac},	
	{'-', '-', 0xad},
	{'R', 'g', 0xae},
	{'\'', 'm', 0xaf},
	{'-', '=', 0xaf},	
	{'D', 'G', 0xb0},
	{'~', 'o', 0xb0},	
	{'+', '-', 0xb1},
	{'2', 'S', 0xb2},
	{'2', '2', 0xb2},	
	{'3', 'S', 0xb3},
	{'3', '3', 0xb3},	
	{'\'', '\'', 0xb4},
	{'M', 'y', 0xb5},
	{'P', 'I', 0xb6},
	{'p', 'p', 0xb6},	
	{'.', 'M', 0xb7},
	{'~', '.', 0xb7},	
	{'\'', ',', 0xb8},
	{'1', 'S', 0xb9},
	{'1', '1', 0xb9},	
	{'-', 'o', 0xba},
	{'>', '>', 0xbb},
	{'1', '4', 0xbc},
	{'1', '2', 0xbd},
	{'3', '4', 0xbe},
	{'?', 'I', 0xbf},
	{'~', '?', 0xbf},	
	{'A', '!', 0xc0},
	{'A', '`', 0xc0},	
	{'A', '\'', 0xc1},
	{'A', '>', 0xc2},
	{'A', '^', 0xc2},	
	{'A', '?', 0xc3},
	{'A', '~', 0xc3},	
	{'A', ':', 0xc4},
	{'A', '"', 0xc4},	
	{'A', 'A', 0xc5},
	{'A', '@', 0xc5},	
	{'A', 'E', 0xc6},
	{'C', ',', 0xc7},
	{'E', '!', 0xc8},
	{'E', '`', 0xc8},	
	{'E', '\'', 0xc9},
	{'E', '>', 0xca},
	{'E', '^', 0xca},	
	{'E', ':', 0xcb},
	{'E', '"', 0xcb},	
	{'I', '!', 0xcc},
	{'I', '`', 0xcc},	
	{'I', '\'', 0xcd},
	{'I', '>', 0xce},
	{'I', '^', 0xce},	
	{'I', ':', 0xcf},
	{'I', '"', 0xcf},	
	{'D', '-', 0xd0},
	{'N', '?', 0xd1},
	{'N', '~', 0xd1},	
	{'O', '!', 0xd2},
	{'O', '`', 0xd2},	
	{'O', '\'', 0xd3},
	{'O', '>', 0xd4},
	{'O', '^', 0xd4},	
	{'O', '?', 0xd5},
	{'O', '~', 0xd5},	
	{'O', ':', 0xd6},
	{'*', 'X', 0xd7},
	{'/', '\\', 0xd7},	
	{'O', '/', 0xd8},
	{'U', '!', 0xd9},
	{'U', '`', 0xd9},	
	{'U', '\'', 0xda},
	{'U', '>', 0xdb},
	{'U', '^', 0xdb},	
	{'U', ':', 0xdc},
	{'Y', '\'', 0xdd},
	{'T', 'H', 0xde},
	{'I', 'p', 0xde},	
	{'s', 's', 0xdf},
	{'a', '!', 0xe0},
	{'a', '`', 0xe0},	
	{'a', '\'', 0xe1},
	{'a', '>', 0xe2},
	{'a', '^', 0xe2},	
	{'a', '?', 0xe3},
	{'a', '~', 0xe3},	
	{'a', ':', 0xe4},
	{'a', '"', 0xe4},	
	{'a', 'a', 0xe5},
	{'a', '@', 0xe5},	
	{'a', 'e', 0xe6},
	{'c', ',', 0xe7},
	{'e', '!', 0xe8},
	{'e', '`', 0xe8},	
	{'e', '\'', 0xe9},
	{'e', '>', 0xea},
	{'e', '^', 0xea},	
	{'e', ':', 0xeb},
	{'e', '"', 0xeb},	
	{'i', '!', 0xec},
	{'i', '`', 0xec},	
	{'i', '\'', 0xed},
	{'i', '>', 0xee},
	{'i', '^', 0xee},	
	{'i', ':', 0xef},
	{'d', '-', 0xf0},
	{'n', '?', 0xf1},
	{'n', '~', 0xf1},	
	{'o', '!', 0xf2},
	{'o', '`', 0xf2},	
	{'o', '\'', 0xf3},
	{'o', '>', 0xf4},
	{'o', '^', 0xf4},	
	{'o', '?', 0xf5},
	{'o', '~', 0xf5},	
	{'o', ':', 0xf6},
	{'-', ':', 0xf7},
	{'o', '/', 0xf8},
	{'u', '!', 0xf9},
	{'u', '`', 0xf9},	
	{'u', '\'', 0xfa},
	{'u', '>', 0xfb},
	{'u', '^', 0xfb},	
	{'u', ':', 0xfc},
	{'y', '\'', 0xfd},
	{'t', 'h', 0xfe},
	{'y', ':', 0xff},
	{'y', '"', 0xff},	

#   define USE_UNICODE_DIGRAPHS

	{'A', '-', 0x0100},
	{'a', '-', 0x0101},
	{'A', '(', 0x0102},
	{'a', '(', 0x0103},
	{'A', ';', 0x0104},
	{'a', ';', 0x0105},
	{'C', '\'', 0x0106},
	{'c', '\'', 0x0107},
	{'C', '>', 0x0108},
	{'c', '>', 0x0109},
	{'C', '.', 0x010a},
	{'c', '.', 0x010b},
	{'C', '<', 0x010c},
	{'c', '<', 0x010d},
	{'D', '<', 0x010e},
	{'d', '<', 0x010f},
	{'D', '/', 0x0110},
	{'d', '/', 0x0111},
	{'E', '-', 0x0112},
	{'e', '-', 0x0113},
	{'E', '(', 0x0114},
	{'e', '(', 0x0115},
	{'E', '.', 0x0116},
	{'e', '.', 0x0117},
	{'E', ';', 0x0118},
	{'e', ';', 0x0119},
	{'E', '<', 0x011a},
	{'e', '<', 0x011b},
	{'G', '>', 0x011c},
	{'g', '>', 0x011d},
	{'G', '(', 0x011e},
	{'g', '(', 0x011f},
	{'G', '.', 0x0120},
	{'g', '.', 0x0121},
	{'G', ',', 0x0122},
	{'g', ',', 0x0123},
	{'H', '>', 0x0124},
	{'h', '>', 0x0125},
	{'H', '/', 0x0126},
	{'h', '/', 0x0127},
	{'I', '?', 0x0128},
	{'i', '?', 0x0129},
	{'I', '-', 0x012a},
	{'i', '-', 0x012b},
	{'I', '(', 0x012c},
	{'i', '(', 0x012d},
	{'I', ';', 0x012e},
	{'i', ';', 0x012f},
	{'I', '.', 0x0130},
	{'i', '.', 0x0131},
	{'I', 'J', 0x0132},
	{'i', 'j', 0x0133},
	{'J', '>', 0x0134},
	{'j', '>', 0x0135},
	{'K', ',', 0x0136},
	{'k', ',', 0x0137},
	{'k', 'k', 0x0138},
	{'L', '\'', 0x0139},
	{'l', '\'', 0x013a},
	{'L', ',', 0x013b},
	{'l', ',', 0x013c},
	{'L', '<', 0x013d},
	{'l', '<', 0x013e},
	{'L', '.', 0x013f},
	{'l', '.', 0x0140},
	{'L', '/', 0x0141},
	{'l', '/', 0x0142},
	{'N', '\'', 0x0143},
	{'n', '\'', 0x0144},
	{'N', ',', 0x0145},
	{'n', ',', 0x0146},
	{'N', '<', 0x0147},
	{'n', '<', 0x0148},
	{'\'', 'n', 0x0149},
	{'N', 'G', 0x014a},
	{'n', 'g', 0x014b},
	{'O', '-', 0x014c},
	{'o', '-', 0x014d},
	{'O', '(', 0x014e},
	{'o', '(', 0x014f},
	{'O', '"', 0x0150},
	{'o', '"', 0x0151},
	{'O', 'E', 0x0152},
	{'o', 'e', 0x0153},
	{'R', '\'', 0x0154},
	{'r', '\'', 0x0155},
	{'R', ',', 0x0156},
	{'r', ',', 0x0157},
	{'R', '<', 0x0158},
	{'r', '<', 0x0159},
	{'S', '\'', 0x015a},
	{'s', '\'', 0x015b},
	{'S', '>', 0x015c},
	{'s', '>', 0x015d},
	{'S', ',', 0x015e},
	{'s', ',', 0x015f},
	{'S', '<', 0x0160},
	{'s', '<', 0x0161},
	{'T', ',', 0x0162},
	{'t', ',', 0x0163},
	{'T', '<', 0x0164},
	{'t', '<', 0x0165},
	{'T', '/', 0x0166},
	{'t', '/', 0x0167},
	{'U', '?', 0x0168},
	{'u', '?', 0x0169},
	{'U', '-', 0x016a},
	{'u', '-', 0x016b},
	{'U', '(', 0x016c},
	{'u', '(', 0x016d},
	{'U', '0', 0x016e},
	{'u', '0', 0x016f},
	{'U', '"', 0x0170},
	{'u', '"', 0x0171},
	{'U', ';', 0x0172},
	{'u', ';', 0x0173},
	{'W', '>', 0x0174},
	{'w', '>', 0x0175},
	{'Y', '>', 0x0176},
	{'y', '>', 0x0177},
	{'Y', ':', 0x0178},
	{'Z', '\'', 0x0179},
	{'z', '\'', 0x017a},
	{'Z', '.', 0x017b},
	{'z', '.', 0x017c},
	{'Z', '<', 0x017d},
	{'z', '<', 0x017e},
	{'O', '9', 0x01a0},
	{'o', '9', 0x01a1},
	{'O', 'I', 0x01a2},
	{'o', 'i', 0x01a3},
	{'y', 'r', 0x01a6},
	{'U', '9', 0x01af},
	{'u', '9', 0x01b0},
	{'Z', '/', 0x01b5},
	{'z', '/', 0x01b6},
	{'E', 'D', 0x01b7},
	{'A', '<', 0x01cd},
	{'a', '<', 0x01ce},
	{'I', '<', 0x01cf},
	{'i', '<', 0x01d0},
	{'O', '<', 0x01d1},
	{'o', '<', 0x01d2},
	{'U', '<', 0x01d3},
	{'u', '<', 0x01d4},
	{'A', '1', 0x01de},
	{'a', '1', 0x01df},
	{'A', '7', 0x01e0},
	{'a', '7', 0x01e1},
	{'A', '3', 0x01e2},
	{'a', '3', 0x01e3},
	{'G', '/', 0x01e4},
	{'g', '/', 0x01e5},
	{'G', '<', 0x01e6},
	{'g', '<', 0x01e7},
	{'K', '<', 0x01e8},
	{'k', '<', 0x01e9},
	{'O', ';', 0x01ea},
	{'o', ';', 0x01eb},
	{'O', '1', 0x01ec},
	{'o', '1', 0x01ed},
	{'E', 'Z', 0x01ee},
	{'e', 'z', 0x01ef},
	{'j', '<', 0x01f0},
	{'G', '\'', 0x01f4},
	{'g', '\'', 0x01f5},
	{';', 'S', 0x02bf},
	{'\'', '<', 0x02c7},
	{'\'', '(', 0x02d8},
	{'\'', '.', 0x02d9},
	{'\'', '0', 0x02da},
	{'\'', ';', 0x02db},
	{'\'', '"', 0x02dd},
#   define DG_START_GREEK 0x0386
	{'A', '%', 0x0386},
	{'E', '%', 0x0388},
	{'Y', '%', 0x0389},
	{'I', '%', 0x038a},
	{'O', '%', 0x038c},
	{'U', '%', 0x038e},
	{'W', '%', 0x038f},
	{'i', '3', 0x0390},
	{'A', '*', 0x0391},
	{'B', '*', 0x0392},
	{'G', '*', 0x0393},
	{'D', '*', 0x0394},
	{'E', '*', 0x0395},
	{'Z', '*', 0x0396},
	{'Y', '*', 0x0397},
	{'H', '*', 0x0398},
	{'I', '*', 0x0399},
	{'K', '*', 0x039a},
	{'L', '*', 0x039b},
	{'M', '*', 0x039c},
	{'N', '*', 0x039d},
	{'C', '*', 0x039e},
	{'O', '*', 0x039f},
	{'P', '*', 0x03a0},
	{'R', '*', 0x03a1},
	{'S', '*', 0x03a3},
	{'T', '*', 0x03a4},
	{'U', '*', 0x03a5},
	{'F', '*', 0x03a6},
	{'X', '*', 0x03a7},
	{'Q', '*', 0x03a8},
	{'W', '*', 0x03a9},
	{'J', '*', 0x03aa},
	{'V', '*', 0x03ab},
	{'a', '%', 0x03ac},
	{'e', '%', 0x03ad},
	{'y', '%', 0x03ae},
	{'i', '%', 0x03af},
	{'u', '3', 0x03b0},
	{'a', '*', 0x03b1},
	{'b', '*', 0x03b2},
	{'g', '*', 0x03b3},
	{'d', '*', 0x03b4},
	{'e', '*', 0x03b5},
	{'z', '*', 0x03b6},
	{'y', '*', 0x03b7},
	{'h', '*', 0x03b8},
	{'i', '*', 0x03b9},
	{'k', '*', 0x03ba},
	{'l', '*', 0x03bb},
	{'m', '*', 0x03bc},
	{'n', '*', 0x03bd},
	{'c', '*', 0x03be},
	{'o', '*', 0x03bf},
	{'p', '*', 0x03c0},
	{'r', '*', 0x03c1},
	{'*', 's', 0x03c2},
	{'s', '*', 0x03c3},
	{'t', '*', 0x03c4},
	{'u', '*', 0x03c5},
	{'f', '*', 0x03c6},
	{'x', '*', 0x03c7},
	{'q', '*', 0x03c8},
	{'w', '*', 0x03c9},
	{'j', '*', 0x03ca},
	{'v', '*', 0x03cb},
	{'o', '%', 0x03cc},
	{'u', '%', 0x03cd},
	{'w', '%', 0x03ce},
	{'\'', 'G', 0x03d8},
	{',', 'G', 0x03d9},
	{'T', '3', 0x03da},
	{'t', '3', 0x03db},
	{'M', '3', 0x03dc},
	{'m', '3', 0x03dd},
	{'K', '3', 0x03de},
	{'k', '3', 0x03df},
	{'P', '3', 0x03e0},
	{'p', '3', 0x03e1},
	{'\'', '%', 0x03f4},
	{'j', '3', 0x03f5},
#   define DG_START_CYRILLIC 0x0401
	{'I', 'O', 0x0401},
	{'D', '%', 0x0402},
	{'G', '%', 0x0403},
	{'I', 'E', 0x0404},
	{'D', 'S', 0x0405},
	{'I', 'I', 0x0406},
	{'Y', 'I', 0x0407},
	{'J', '%', 0x0408},
	{'L', 'J', 0x0409},
	{'N', 'J', 0x040a},
	{'T', 's', 0x040b},
	{'K', 'J', 0x040c},
	{'V', '%', 0x040e},
	{'D', 'Z', 0x040f},
	{'A', '=', 0x0410},
	{'B', '=', 0x0411},
	{'V', '=', 0x0412},
	{'G', '=', 0x0413},
	{'D', '=', 0x0414},
	{'E', '=', 0x0415},
	{'Z', '%', 0x0416},
	{'Z', '=', 0x0417},
	{'I', '=', 0x0418},
	{'J', '=', 0x0419},
	{'K', '=', 0x041a},
	{'L', '=', 0x041b},
	{'M', '=', 0x041c},
	{'N', '=', 0x041d},
	{'O', '=', 0x041e},
	{'P', '=', 0x041f},
	{'R', '=', 0x0420},
	{'S', '=', 0x0421},
	{'T', '=', 0x0422},
	{'U', '=', 0x0423},
	{'F', '=', 0x0424},
	{'H', '=', 0x0425},
	{'C', '=', 0x0426},
	{'C', '%', 0x0427},
	{'S', '%', 0x0428},
	{'S', 'c', 0x0429},
	{'=', '"', 0x042a},
	{'Y', '=', 0x042b},
	{'%', '"', 0x042c},
	{'J', 'E', 0x042d},
	{'J', 'U', 0x042e},
	{'J', 'A', 0x042f},
	{'a', '=', 0x0430},
	{'b', '=', 0x0431},
	{'v', '=', 0x0432},
	{'g', '=', 0x0433},
	{'d', '=', 0x0434},
	{'e', '=', 0x0435},
	{'z', '%', 0x0436},
	{'z', '=', 0x0437},
	{'i', '=', 0x0438},
	{'j', '=', 0x0439},
	{'k', '=', 0x043a},
	{'l', '=', 0x043b},
	{'m', '=', 0x043c},
	{'n', '=', 0x043d},
	{'o', '=', 0x043e},
	{'p', '=', 0x043f},
	{'r', '=', 0x0440},
	{'s', '=', 0x0441},
	{'t', '=', 0x0442},
	{'u', '=', 0x0443},
	{'f', '=', 0x0444},
	{'h', '=', 0x0445},
	{'c', '=', 0x0446},
	{'c', '%', 0x0447},
	{'s', '%', 0x0448},
	{'s', 'c', 0x0449},
	{'=', '\'', 0x044a},
	{'y', '=', 0x044b},
	{'%', '\'', 0x044c},
	{'j', 'e', 0x044d},
	{'j', 'u', 0x044e},
	{'j', 'a', 0x044f},
	{'i', 'o', 0x0451},
	{'d', '%', 0x0452},
	{'g', '%', 0x0453},
	{'i', 'e', 0x0454},
	{'d', 's', 0x0455},
	{'i', 'i', 0x0456},
	{'y', 'i', 0x0457},
	{'j', '%', 0x0458},
	{'l', 'j', 0x0459},
	{'n', 'j', 0x045a},
	{'t', 's', 0x045b},
	{'k', 'j', 0x045c},
	{'v', '%', 0x045e},
	{'d', 'z', 0x045f},
	{'Y', '3', 0x0462},
	{'y', '3', 0x0463},
	{'O', '3', 0x046a},
	{'o', '3', 0x046b},
	{'F', '3', 0x0472},
	{'f', '3', 0x0473},
	{'V', '3', 0x0474},
	{'v', '3', 0x0475},
	{'C', '3', 0x0480},
	{'c', '3', 0x0481},
	{'G', '3', 0x0490},
	{'g', '3', 0x0491},
#   define DG_START_HEBREW 0x05d0
	{'A', '+', 0x05d0},
	{'B', '+', 0x05d1},
	{'G', '+', 0x05d2},
	{'D', '+', 0x05d3},
	{'H', '+', 0x05d4},
	{'W', '+', 0x05d5},
	{'Z', '+', 0x05d6},
	{'X', '+', 0x05d7},
	{'T', 'j', 0x05d8},
	{'J', '+', 0x05d9},
	{'K', '%', 0x05da},
	{'K', '+', 0x05db},
	{'L', '+', 0x05dc},
	{'M', '%', 0x05dd},
	{'M', '+', 0x05de},
	{'N', '%', 0x05df},
	{'N', '+', 0x05e0},
	{'S', '+', 0x05e1},
	{'E', '+', 0x05e2},
	{'P', '%', 0x05e3},
	{'P', '+', 0x05e4},
	{'Z', 'j', 0x05e5},
	{'Z', 'J', 0x05e6},
	{'Q', '+', 0x05e7},
	{'R', '+', 0x05e8},
	{'S', 'h', 0x05e9},
	{'T', '+', 0x05ea},
#   define DG_START_ARABIC 0x060c
	{',', '+', 0x060c},
	{';', '+', 0x061b},
	{'?', '+', 0x061f},
	{'H', '\'', 0x0621},
	{'a', 'M', 0x0622},
	{'a', 'H', 0x0623},
	{'w', 'H', 0x0624},
	{'a', 'h', 0x0625},
	{'y', 'H', 0x0626},
	{'a', '+', 0x0627},
	{'b', '+', 0x0628},
	{'t', 'm', 0x0629},
	{'t', '+', 0x062a},
	{'t', 'k', 0x062b},
	{'g', '+', 0x062c},
	{'h', 'k', 0x062d},
	{'x', '+', 0x062e},
	{'d', '+', 0x062f},
	{'d', 'k', 0x0630},
	{'r', '+', 0x0631},
	{'z', '+', 0x0632},
	{'s', '+', 0x0633},
	{'s', 'n', 0x0634},
	{'c', '+', 0x0635},
	{'d', 'd', 0x0636},
	{'t', 'j', 0x0637},
	{'z', 'H', 0x0638},
	{'e', '+', 0x0639},
	{'i', '+', 0x063a},
	{'+', '+', 0x0640},
	{'f', '+', 0x0641},
	{'q', '+', 0x0642},
	{'k', '+', 0x0643},
	{'l', '+', 0x0644},
	{'m', '+', 0x0645},
	{'n', '+', 0x0646},
	{'h', '+', 0x0647},
	{'w', '+', 0x0648},
	{'j', '+', 0x0649},
	{'y', '+', 0x064a},
	{':', '+', 0x064b},
	{'"', '+', 0x064c},
	{'=', '+', 0x064d},
	{'/', '+', 0x064e},
	{'\'', '+', 0x064f},
	{'1', '+', 0x0650},
	{'3', '+', 0x0651},
	{'0', '+', 0x0652},
	{'a', 'S', 0x0670},
	{'p', '+', 0x067e},
	{'v', '+', 0x06a4},
	{'g', 'f', 0x06af},
	{'0', 'a', 0x06f0},
	{'1', 'a', 0x06f1},
	{'2', 'a', 0x06f2},
	{'3', 'a', 0x06f3},
	{'4', 'a', 0x06f4},
	{'5', 'a', 0x06f5},
	{'6', 'a', 0x06f6},
	{'7', 'a', 0x06f7},
	{'8', 'a', 0x06f8},
	{'9', 'a', 0x06f9},
#   define DG_START_LATIN_EXTENDED 0x1e02
	{'B', '.', 0x1e02},
	{'b', '.', 0x1e03},
	{'B', '_', 0x1e06},
	{'b', '_', 0x1e07},
	{'D', '.', 0x1e0a},
	{'d', '.', 0x1e0b},
	{'D', '_', 0x1e0e},
	{'d', '_', 0x1e0f},
	{'D', ',', 0x1e10},
	{'d', ',', 0x1e11},
	{'F', '.', 0x1e1e},
	{'f', '.', 0x1e1f},
	{'G', '-', 0x1e20},
	{'g', '-', 0x1e21},
	{'H', '.', 0x1e22},
	{'h', '.', 0x1e23},
	{'H', ':', 0x1e26},
	{'h', ':', 0x1e27},
	{'H', ',', 0x1e28},
	{'h', ',', 0x1e29},
	{'K', '\'', 0x1e30},
	{'k', '\'', 0x1e31},
	{'K', '_', 0x1e34},
	{'k', '_', 0x1e35},
	{'L', '_', 0x1e3a},
	{'l', '_', 0x1e3b},
	{'M', '\'', 0x1e3e},
	{'m', '\'', 0x1e3f},
	{'M', '.', 0x1e40},
	{'m', '.', 0x1e41},
	{'N', '.', 0x1e44},
	{'n', '.', 0x1e45},
	{'N', '_', 0x1e48},
	{'n', '_', 0x1e49},
	{'P', '\'', 0x1e54},
	{'p', '\'', 0x1e55},
	{'P', '.', 0x1e56},
	{'p', '.', 0x1e57},
	{'R', '.', 0x1e58},
	{'r', '.', 0x1e59},
	{'R', '_', 0x1e5e},
	{'r', '_', 0x1e5f},
	{'S', '.', 0x1e60},
	{'s', '.', 0x1e61},
	{'T', '.', 0x1e6a},
	{'t', '.', 0x1e6b},
	{'T', '_', 0x1e6e},
	{'t', '_', 0x1e6f},
	{'V', '?', 0x1e7c},
	{'v', '?', 0x1e7d},
	{'W', '!', 0x1e80},
	{'W', '`', 0x1e80}, 
	{'w', '!', 0x1e81},
	{'w', '`', 0x1e81}, 
	{'W', '\'', 0x1e82},
	{'w', '\'', 0x1e83},
	{'W', ':', 0x1e84},
	{'w', ':', 0x1e85},
	{'W', '.', 0x1e86},
	{'w', '.', 0x1e87},
	{'X', '.', 0x1e8a},
	{'x', '.', 0x1e8b},
	{'X', ':', 0x1e8c},
	{'x', ':', 0x1e8d},
	{'Y', '.', 0x1e8e},
	{'y', '.', 0x1e8f},
	{'Z', '>', 0x1e90},
	{'z', '>', 0x1e91},
	{'Z', '_', 0x1e94},
	{'z', '_', 0x1e95},
	{'h', '_', 0x1e96},
	{'t', ':', 0x1e97},
	{'w', '0', 0x1e98},
	{'y', '0', 0x1e99},
	{'A', '2', 0x1ea2},
	{'a', '2', 0x1ea3},
	{'E', '2', 0x1eba},
	{'e', '2', 0x1ebb},
	{'E', '?', 0x1ebc},
	{'e', '?', 0x1ebd},
	{'I', '2', 0x1ec8},
	{'i', '2', 0x1ec9},
	{'O', '2', 0x1ece},
	{'o', '2', 0x1ecf},
	{'U', '2', 0x1ee6},
	{'u', '2', 0x1ee7},
	{'Y', '!', 0x1ef2},
	{'Y', '`', 0x1ef2}, 
	{'y', '!', 0x1ef3},
	{'y', '`', 0x1ef3}, 
	{'Y', '2', 0x1ef6},
	{'y', '2', 0x1ef7},
	{'Y', '?', 0x1ef8},
	{'y', '?', 0x1ef9},
#   define DG_START_GREEK_EXTENDED 0x1f00
	{';', '\'', 0x1f00},
	{',', '\'', 0x1f01},
	{';', '!', 0x1f02},
	{',', '!', 0x1f03},
	{'?', ';', 0x1f04},
	{'?', ',', 0x1f05},
	{'!', ':', 0x1f06},
	{'?', ':', 0x1f07},
#   define DG_START_PUNCTUATION 0x2002
	{'1', 'N', 0x2002},
	{'1', 'M', 0x2003},
	{'3', 'M', 0x2004},
	{'4', 'M', 0x2005},
	{'6', 'M', 0x2006},
	{'1', 'T', 0x2009},
	{'1', 'H', 0x200a},
	{'-', '1', 0x2010},
	{'-', 'N', 0x2013},
	{'-', 'M', 0x2014},
	{'-', '3', 0x2015},
	{'!', '2', 0x2016},
	{'=', '2', 0x2017},
	{'\'', '6', 0x2018},
	{'\'', '9', 0x2019},
	{'.', '9', 0x201a},
	{'9', '\'', 0x201b},
	{'"', '6', 0x201c},
	{'"', '9', 0x201d},
	{':', '9', 0x201e},
	{'9', '"', 0x201f},
	{'/', '-', 0x2020},
	{'/', '=', 0x2021},
	{'o', 'o', 0x2022},
	{'.', '.', 0x2025},
	{',', '.', 0x2026},
	{'%', '0', 0x2030},
	{'1', '\'', 0x2032},
	{'2', '\'', 0x2033},
	{'3', '\'', 0x2034},
	{'4', '\'', 0x2057},
	{'1', '"', 0x2035},
	{'2', '"', 0x2036},
	{'3', '"', 0x2037},
	{'C', 'a', 0x2038},
	{'<', '1', 0x2039},
	{'>', '1', 0x203a},
	{':', 'X', 0x203b},
	{'\'', '-', 0x203e},
	{'/', 'f', 0x2044},
#   define DG_START_SUB_SUPER 0x2070
	{'0', 'S', 0x2070},
	{'4', 'S', 0x2074},
	{'5', 'S', 0x2075},
	{'6', 'S', 0x2076},
	{'7', 'S', 0x2077},
	{'8', 'S', 0x2078},
	{'9', 'S', 0x2079},
	{'+', 'S', 0x207a},
	{'-', 'S', 0x207b},
	{'=', 'S', 0x207c},
	{'(', 'S', 0x207d},
	{')', 'S', 0x207e},
	{'n', 'S', 0x207f},
	{'0', 's', 0x2080},
	{'1', 's', 0x2081},
	{'2', 's', 0x2082},
	{'3', 's', 0x2083},
	{'4', 's', 0x2084},
	{'5', 's', 0x2085},
	{'6', 's', 0x2086},
	{'7', 's', 0x2087},
	{'8', 's', 0x2088},
	{'9', 's', 0x2089},
	{'+', 's', 0x208a},
	{'-', 's', 0x208b},
	{'=', 's', 0x208c},
	{'(', 's', 0x208d},
	{')', 's', 0x208e},
#   define DG_START_CURRENCY 0x20a4
	{'L', 'i', 0x20a4},
	{'P', 't', 0x20a7},
	{'W', '=', 0x20a9},
	{'=', 'e', 0x20ac}, 
	{'E', 'u', 0x20ac}, 
	{'=', 'R', 0x20bd}, 
	{'=', 'P', 0x20bd}, 
#   define DG_START_OTHER1 0x2103
	{'o', 'C', 0x2103},
	{'c', 'o', 0x2105},
	{'o', 'F', 0x2109},
	{'N', '0', 0x2116},
	{'P', 'O', 0x2117},
	{'R', 'x', 0x211e},
	{'S', 'M', 0x2120},
	{'T', 'M', 0x2122},
	{'O', 'm', 0x2126},
	{'A', 'O', 0x212b},
	{'1', '3', 0x2153},
	{'2', '3', 0x2154},
	{'1', '5', 0x2155},
	{'2', '5', 0x2156},
	{'3', '5', 0x2157},
	{'4', '5', 0x2158},
	{'1', '6', 0x2159},
	{'5', '6', 0x215a},
	{'1', '8', 0x215b},
	{'3', '8', 0x215c},
	{'5', '8', 0x215d},
	{'7', '8', 0x215e},
#   define DG_START_ROMAN 0x2160
	{'1', 'R', 0x2160},
	{'2', 'R', 0x2161},
	{'3', 'R', 0x2162},
	{'4', 'R', 0x2163},
	{'5', 'R', 0x2164},
	{'6', 'R', 0x2165},
	{'7', 'R', 0x2166},
	{'8', 'R', 0x2167},
	{'9', 'R', 0x2168},
	{'a', 'R', 0x2169},
	{'b', 'R', 0x216a},
	{'c', 'R', 0x216b},
	{'1', 'r', 0x2170},
	{'2', 'r', 0x2171},
	{'3', 'r', 0x2172},
	{'4', 'r', 0x2173},
	{'5', 'r', 0x2174},
	{'6', 'r', 0x2175},
	{'7', 'r', 0x2176},
	{'8', 'r', 0x2177},
	{'9', 'r', 0x2178},
	{'a', 'r', 0x2179},
	{'b', 'r', 0x217a},
	{'c', 'r', 0x217b},
#   define DG_START_ARROWS 0x2190
	{'<', '-', 0x2190},
	{'-', '!', 0x2191},
	{'-', '>', 0x2192},
	{'-', 'v', 0x2193},
	{'<', '>', 0x2194},
	{'U', 'D', 0x2195},
	{'<', '=', 0x21d0},
	{'=', '>', 0x21d2},
	{'=', '=', 0x21d4},
#   define DG_START_MATH 0x2200
	{'F', 'A', 0x2200},
	{'d', 'P', 0x2202},
	{'T', 'E', 0x2203},
	{'/', '0', 0x2205},
	{'D', 'E', 0x2206},
	{'N', 'B', 0x2207},
	{'(', '-', 0x2208},
	{'-', ')', 0x220b},
	{'*', 'P', 0x220f},
	{'+', 'Z', 0x2211},
	{'-', '2', 0x2212},
	{'-', '+', 0x2213},
	{'*', '-', 0x2217},
	{'O', 'b', 0x2218},
	{'S', 'b', 0x2219},
	{'R', 'T', 0x221a},
	{'0', '(', 0x221d},
	{'0', '0', 0x221e},
	{'-', 'L', 0x221f},
	{'-', 'V', 0x2220},
	{'P', 'P', 0x2225},
	{'A', 'N', 0x2227},
	{'O', 'R', 0x2228},
	{'(', 'U', 0x2229},
	{')', 'U', 0x222a},
	{'I', 'n', 0x222b},
	{'D', 'I', 0x222c},
	{'I', 'o', 0x222e},
	{'.', ':', 0x2234},
	{':', '.', 0x2235},
	{':', 'R', 0x2236},
	{':', ':', 0x2237},
	{'?', '1', 0x223c},
	{'C', 'G', 0x223e},
	{'?', '-', 0x2243},
	{'?', '=', 0x2245},
	{'?', '2', 0x2248},
	{'=', '?', 0x224c},
	{'H', 'I', 0x2253},
	{'!', '=', 0x2260},
	{'=', '3', 0x2261},
	{'=', '<', 0x2264},
	{'>', '=', 0x2265},
	{'<', '*', 0x226a},
	{'*', '>', 0x226b},
	{'!', '<', 0x226e},
	{'!', '>', 0x226f},
	{'(', 'C', 0x2282},
	{')', 'C', 0x2283},
	{'(', '_', 0x2286},
	{')', '_', 0x2287},
	{'0', '.', 0x2299},
	{'0', '2', 0x229a},
	{'-', 'T', 0x22a5},
	{'.', 'P', 0x22c5},
	{':', '3', 0x22ee},
	{'.', '3', 0x22ef},
#   define DG_START_TECHNICAL 0x2302
	{'E', 'h', 0x2302},
	{'<', '7', 0x2308},
	{'>', '7', 0x2309},
	{'7', '<', 0x230a},
	{'7', '>', 0x230b},
	{'N', 'I', 0x2310},
	{'(', 'A', 0x2312},
	{'T', 'R', 0x2315},
	{'I', 'u', 0x2320},
	{'I', 'l', 0x2321},
	{'<', '/', 0x2329},
	{'/', '>', 0x232a},
#   define DG_START_OTHER2 0x2423
	{'V', 's', 0x2423},
	{'1', 'h', 0x2440},
	{'3', 'h', 0x2441},
	{'2', 'h', 0x2442},
	{'4', 'h', 0x2443},
	{'1', 'j', 0x2446},
	{'2', 'j', 0x2447},
	{'3', 'j', 0x2448},
	{'4', 'j', 0x2449},
	{'1', '.', 0x2488},
	{'2', '.', 0x2489},
	{'3', '.', 0x248a},
	{'4', '.', 0x248b},
	{'5', '.', 0x248c},
	{'6', '.', 0x248d},
	{'7', '.', 0x248e},
	{'8', '.', 0x248f},
	{'9', '.', 0x2490},
#   define DG_START_DRAWING 0x2500
	{'h', 'h', 0x2500},
	{'H', 'H', 0x2501},
	{'v', 'v', 0x2502},
	{'V', 'V', 0x2503},
	{'3', '-', 0x2504},
	{'3', '_', 0x2505},
	{'3', '!', 0x2506},
	{'3', '/', 0x2507},
	{'4', '-', 0x2508},
	{'4', '_', 0x2509},
	{'4', '!', 0x250a},
	{'4', '/', 0x250b},
	{'d', 'r', 0x250c},
	{'d', 'R', 0x250d},
	{'D', 'r', 0x250e},
	{'D', 'R', 0x250f},
	{'d', 'l', 0x2510},
	{'d', 'L', 0x2511},
	{'D', 'l', 0x2512},
	{'L', 'D', 0x2513},
	{'u', 'r', 0x2514},
	{'u', 'R', 0x2515},
	{'U', 'r', 0x2516},
	{'U', 'R', 0x2517},
	{'u', 'l', 0x2518},
	{'u', 'L', 0x2519},
	{'U', 'l', 0x251a},
	{'U', 'L', 0x251b},
	{'v', 'r', 0x251c},
	{'v', 'R', 0x251d},
	{'V', 'r', 0x2520},
	{'V', 'R', 0x2523},
	{'v', 'l', 0x2524},
	{'v', 'L', 0x2525},
	{'V', 'l', 0x2528},
	{'V', 'L', 0x252b},
	{'d', 'h', 0x252c},
	{'d', 'H', 0x252f},
	{'D', 'h', 0x2530},
	{'D', 'H', 0x2533},
	{'u', 'h', 0x2534},
	{'u', 'H', 0x2537},
	{'U', 'h', 0x2538},
	{'U', 'H', 0x253b},
	{'v', 'h', 0x253c},
	{'v', 'H', 0x253f},
	{'V', 'h', 0x2542},
	{'V', 'H', 0x254b},
	{'F', 'D', 0x2571},
	{'B', 'D', 0x2572},
#   define DG_START_BLOCK 0x2580
	{'T', 'B', 0x2580},
	{'L', 'B', 0x2584},
	{'F', 'B', 0x2588},
	{'l', 'B', 0x258c},
	{'R', 'B', 0x2590},
	{'.', 'S', 0x2591},
	{':', 'S', 0x2592},
	{'?', 'S', 0x2593},
#   define DG_START_SHAPES 0x25a0
	{'f', 'S', 0x25a0},
	{'O', 'S', 0x25a1},
	{'R', 'O', 0x25a2},
	{'R', 'r', 0x25a3},
	{'R', 'F', 0x25a4},
	{'R', 'Y', 0x25a5},
	{'R', 'H', 0x25a6},
	{'R', 'Z', 0x25a7},
	{'R', 'K', 0x25a8},
	{'R', 'X', 0x25a9},
	{'s', 'B', 0x25aa},
	{'S', 'R', 0x25ac},
	{'O', 'r', 0x25ad},
	{'U', 'T', 0x25b2},
	{'u', 'T', 0x25b3},
	{'P', 'R', 0x25b6},
	{'T', 'r', 0x25b7},
	{'D', 't', 0x25bc},
	{'d', 'T', 0x25bd},
	{'P', 'L', 0x25c0},
	{'T', 'l', 0x25c1},
	{'D', 'b', 0x25c6},
	{'D', 'w', 0x25c7},
	{'L', 'Z', 0x25ca},
	{'0', 'm', 0x25cb},
	{'0', 'o', 0x25ce},
	{'0', 'M', 0x25cf},
	{'0', 'L', 0x25d0},
	{'0', 'R', 0x25d1},
	{'S', 'n', 0x25d8},
	{'I', 'c', 0x25d9},
	{'F', 'd', 0x25e2},
	{'B', 'd', 0x25e3},
#   define DG_START_SYMBOLS 0x2605
	{'*', '2', 0x2605},
	{'*', '1', 0x2606},
	{'<', 'H', 0x261c},
	{'>', 'H', 0x261e},
	{'0', 'u', 0x263a},
	{'0', 'U', 0x263b},
	{'S', 'U', 0x263c},
	{'F', 'm', 0x2640},
	{'M', 'l', 0x2642},
	{'c', 'S', 0x2660},
	{'c', 'H', 0x2661},
	{'c', 'D', 0x2662},
	{'c', 'C', 0x2663},
	{'M', 'd', 0x2669},
	{'M', '8', 0x266a},
	{'M', '2', 0x266b},
	{'M', 'b', 0x266d},
	{'M', 'x', 0x266e},
	{'M', 'X', 0x266f},
#   define DG_START_DINGBATS 0x2713
	{'O', 'K', 0x2713},
	{'X', 'X', 0x2717},
	{'-', 'X', 0x2720},
#   define DG_START_CJK_SYMBOLS 0x3000
	{'I', 'S', 0x3000},
	{',', '_', 0x3001},
	{'.', '_', 0x3002},
	{'+', '"', 0x3003},
	{'+', '_', 0x3004},
	{'*', '_', 0x3005},
	{';', '_', 0x3006},
	{'0', '_', 0x3007},
	{'<', '+', 0x300a},
	{'>', '+', 0x300b},
	{'<', '\'', 0x300c},
	{'>', '\'', 0x300d},
	{'<', '"', 0x300e},
	{'>', '"', 0x300f},
	{'(', '"', 0x3010},
	{')', '"', 0x3011},
	{'=', 'T', 0x3012},
	{'=', '_', 0x3013},
	{'(', '\'', 0x3014},
	{')', '\'', 0x3015},
	{'(', 'I', 0x3016},
	{')', 'I', 0x3017},
	{'-', '?', 0x301c},
#   define DG_START_HIRAGANA 0x3041
	{'A', '5', 0x3041},
	{'a', '5', 0x3042},
	{'I', '5', 0x3043},
	{'i', '5', 0x3044},
	{'U', '5', 0x3045},
	{'u', '5', 0x3046},
	{'E', '5', 0x3047},
	{'e', '5', 0x3048},
	{'O', '5', 0x3049},
	{'o', '5', 0x304a},
	{'k', 'a', 0x304b},
	{'g', 'a', 0x304c},
	{'k', 'i', 0x304d},
	{'g', 'i', 0x304e},
	{'k', 'u', 0x304f},
	{'g', 'u', 0x3050},
	{'k', 'e', 0x3051},
	{'g', 'e', 0x3052},
	{'k', 'o', 0x3053},
	{'g', 'o', 0x3054},
	{'s', 'a', 0x3055},
	{'z', 'a', 0x3056},
	{'s', 'i', 0x3057},
	{'z', 'i', 0x3058},
	{'s', 'u', 0x3059},
	{'z', 'u', 0x305a},
	{'s', 'e', 0x305b},
	{'z', 'e', 0x305c},
	{'s', 'o', 0x305d},
	{'z', 'o', 0x305e},
	{'t', 'a', 0x305f},
	{'d', 'a', 0x3060},
	{'t', 'i', 0x3061},
	{'d', 'i', 0x3062},
	{'t', 'U', 0x3063},
	{'t', 'u', 0x3064},
	{'d', 'u', 0x3065},
	{'t', 'e', 0x3066},
	{'d', 'e', 0x3067},
	{'t', 'o', 0x3068},
	{'d', 'o', 0x3069},
	{'n', 'a', 0x306a},
	{'n', 'i', 0x306b},
	{'n', 'u', 0x306c},
	{'n', 'e', 0x306d},
	{'n', 'o', 0x306e},
	{'h', 'a', 0x306f},
	{'b', 'a', 0x3070},
	{'p', 'a', 0x3071},
	{'h', 'i', 0x3072},
	{'b', 'i', 0x3073},
	{'p', 'i', 0x3074},
	{'h', 'u', 0x3075},
	{'b', 'u', 0x3076},
	{'p', 'u', 0x3077},
	{'h', 'e', 0x3078},
	{'b', 'e', 0x3079},
	{'p', 'e', 0x307a},
	{'h', 'o', 0x307b},
	{'b', 'o', 0x307c},
	{'p', 'o', 0x307d},
	{'m', 'a', 0x307e},
	{'m', 'i', 0x307f},
	{'m', 'u', 0x3080},
	{'m', 'e', 0x3081},
	{'m', 'o', 0x3082},
	{'y', 'A', 0x3083},
	{'y', 'a', 0x3084},
	{'y', 'U', 0x3085},
	{'y', 'u', 0x3086},
	{'y', 'O', 0x3087},
	{'y', 'o', 0x3088},
	{'r', 'a', 0x3089},
	{'r', 'i', 0x308a},
	{'r', 'u', 0x308b},
	{'r', 'e', 0x308c},
	{'r', 'o', 0x308d},
	{'w', 'A', 0x308e},
	{'w', 'a', 0x308f},
	{'w', 'i', 0x3090},
	{'w', 'e', 0x3091},
	{'w', 'o', 0x3092},
	{'n', '5', 0x3093},
	{'v', 'u', 0x3094},
	{'"', '5', 0x309b},
	{'0', '5', 0x309c},
	{'*', '5', 0x309d},
	{'+', '5', 0x309e},
#   define DG_START_KATAKANA 0x30a1
	{'a', '6', 0x30a1},
	{'A', '6', 0x30a2},
	{'i', '6', 0x30a3},
	{'I', '6', 0x30a4},
	{'u', '6', 0x30a5},
	{'U', '6', 0x30a6},
	{'e', '6', 0x30a7},
	{'E', '6', 0x30a8},
	{'o', '6', 0x30a9},
	{'O', '6', 0x30aa},
	{'K', 'a', 0x30ab},
	{'G', 'a', 0x30ac},
	{'K', 'i', 0x30ad},
	{'G', 'i', 0x30ae},
	{'K', 'u', 0x30af},
	{'G', 'u', 0x30b0},
	{'K', 'e', 0x30b1},
	{'G', 'e', 0x30b2},
	{'K', 'o', 0x30b3},
	{'G', 'o', 0x30b4},
	{'S', 'a', 0x30b5},
	{'Z', 'a', 0x30b6},
	{'S', 'i', 0x30b7},
	{'Z', 'i', 0x30b8},
	{'S', 'u', 0x30b9},
	{'Z', 'u', 0x30ba},
	{'S', 'e', 0x30bb},
	{'Z', 'e', 0x30bc},
	{'S', 'o', 0x30bd},
	{'Z', 'o', 0x30be},
	{'T', 'a', 0x30bf},
	{'D', 'a', 0x30c0},
	{'T', 'i', 0x30c1},
	{'D', 'i', 0x30c2},
	{'T', 'U', 0x30c3},
	{'T', 'u', 0x30c4},
	{'D', 'u', 0x30c5},
	{'T', 'e', 0x30c6},
	{'D', 'e', 0x30c7},
	{'T', 'o', 0x30c8},
	{'D', 'o', 0x30c9},
	{'N', 'a', 0x30ca},
	{'N', 'i', 0x30cb},
	{'N', 'u', 0x30cc},
	{'N', 'e', 0x30cd},
	{'N', 'o', 0x30ce},
	{'H', 'a', 0x30cf},
	{'B', 'a', 0x30d0},
	{'P', 'a', 0x30d1},
	{'H', 'i', 0x30d2},
	{'B', 'i', 0x30d3},
	{'P', 'i', 0x30d4},
	{'H', 'u', 0x30d5},
	{'B', 'u', 0x30d6},
	{'P', 'u', 0x30d7},
	{'H', 'e', 0x30d8},
	{'B', 'e', 0x30d9},
	{'P', 'e', 0x30da},
	{'H', 'o', 0x30db},
	{'B', 'o', 0x30dc},
	{'P', 'o', 0x30dd},
	{'M', 'a', 0x30de},
	{'M', 'i', 0x30df},
	{'M', 'u', 0x30e0},
	{'M', 'e', 0x30e1},
	{'M', 'o', 0x30e2},
	{'Y', 'A', 0x30e3},
	{'Y', 'a', 0x30e4},
	{'Y', 'U', 0x30e5},
	{'Y', 'u', 0x30e6},
	{'Y', 'O', 0x30e7},
	{'Y', 'o', 0x30e8},
	{'R', 'a', 0x30e9},
	{'R', 'i', 0x30ea},
	{'R', 'u', 0x30eb},
	{'R', 'e', 0x30ec},
	{'R', 'o', 0x30ed},
	{'W', 'A', 0x30ee},
	{'W', 'a', 0x30ef},
	{'W', 'i', 0x30f0},
	{'W', 'e', 0x30f1},
	{'W', 'o', 0x30f2},
	{'N', '6', 0x30f3},
	{'V', 'u', 0x30f4},
	{'K', 'A', 0x30f5},
	{'K', 'E', 0x30f6},
	{'V', 'a', 0x30f7},
	{'V', 'i', 0x30f8},
	{'V', 'e', 0x30f9},
	{'V', 'o', 0x30fa},
	{'.', '6', 0x30fb},
	{'-', '6', 0x30fc},
	{'*', '6', 0x30fd},
	{'+', '6', 0x30fe},
#   define DG_START_BOPOMOFO 0x3105
	{'b', '4', 0x3105},
	{'p', '4', 0x3106},
	{'m', '4', 0x3107},
	{'f', '4', 0x3108},
	{'d', '4', 0x3109},
	{'t', '4', 0x310a},
	{'n', '4', 0x310b},
	{'l', '4', 0x310c},
	{'g', '4', 0x310d},
	{'k', '4', 0x310e},
	{'h', '4', 0x310f},
	{'j', '4', 0x3110},
	{'q', '4', 0x3111},
	{'x', '4', 0x3112},
	{'z', 'h', 0x3113},
	{'c', 'h', 0x3114},
	{'s', 'h', 0x3115},
	{'r', '4', 0x3116},
	{'z', '4', 0x3117},
	{'c', '4', 0x3118},
	{'s', '4', 0x3119},
	{'a', '4', 0x311a},
	{'o', '4', 0x311b},
	{'e', '4', 0x311c},
	{'a', 'i', 0x311e},
	{'e', 'i', 0x311f},
	{'a', 'u', 0x3120},
	{'o', 'u', 0x3121},
	{'a', 'n', 0x3122},
	{'e', 'n', 0x3123},
	{'a', 'N', 0x3124},
	{'e', 'N', 0x3125},
	{'e', 'r', 0x3126},
	{'i', '4', 0x3127},
	{'u', '4', 0x3128},
	{'i', 'u', 0x3129},
	{'v', '4', 0x312a},
	{'n', 'G', 0x312b},
	{'g', 'n', 0x312c},
#   define DG_START_OTHER3 0x3220
	{'1', 'c', 0x3220},
	{'2', 'c', 0x3221},
	{'3', 'c', 0x3222},
	{'4', 'c', 0x3223},
	{'5', 'c', 0x3224},
	{'6', 'c', 0x3225},
	{'7', 'c', 0x3226},
	{'8', 'c', 0x3227},
	{'9', 'c', 0x3228},
	
	
	{'f', 'f', 0xfb00},
	{'f', 'i', 0xfb01},
	{'f', 'l', 0xfb02},
	{'f', 't', 0xfb05},
	{'s', 't', 0xfb06},

	{NUL, NUL, NUL}  
};


    int
do_digraph(int c)
{
    static int	backspaced;	
    static int	lastchar;	

    if (c == -1)		
    {
	backspaced = -1;
    }
    else if (p_dg)
    {
	if (backspaced >= 0)
	    c = digraph_get(backspaced, c, FALSE);
	backspaced = -1;
	if ((c == K_BS || c == Ctrl_H) && lastchar >= 0)
	    backspaced = lastchar;
    }
    lastchar = c;
    return c;
}


    char_u *
get_digraph_for_char(int val_arg)
{
    int		val = val_arg;
    int		i;
    int		use_defaults;
    digr_T	*dp;
    static      char_u      r[3];

#if defined(USE_UNICODE_DIGRAPHS)
    if (!enc_utf8)
    {
	char_u	    buf[6], *to;
	vimconv_T   vc;

	
	i = mb_char2bytes(val, buf);
	vc.vc_type = CONV_NONE;
	if (convert_setup(&vc, p_enc, (char_u *)"utf-8") == OK)
	{
	    vc.vc_fail = TRUE;
	    to = string_convert(&vc, buf, &i);
	    if (to != NULL)
	    {
		val = utf_ptr2char(to);
		vim_free(to);
	    }
	    (void)convert_setup(&vc, NULL, NULL);
	}
    }
#endif

    for (use_defaults = 0; use_defaults <= 1; use_defaults++)
    {
	if (use_defaults == 0)
	    dp = (digr_T *)user_digraphs.ga_data;
	else
	    dp = digraphdefault;
	for (i = 0; use_defaults ? dp->char1 != NUL
					       : i < user_digraphs.ga_len; ++i)
	{
	    if (dp->result == val)
	    {
		r[0] = dp->char1;
		r[1] = dp->char2;
		r[2] = NUL;
		return r;
	    }
	    ++dp;
	}
    }
    return NULL;
}


    int
get_digraph(
    int		cmdline)	
{
    int		c, cc;

    ++no_mapping;
    ++allow_keys;
    c = plain_vgetc();
    --no_mapping;
    --allow_keys;

    if (c == ESC)		
	return NUL;

    if (IS_SPECIAL(c))	
	return c;
    if (cmdline)
    {
	if (char2cells(c) == 1
#if defined(FEAT_CRYPT) || defined(FEAT_EVAL)
		&& cmdline_star == 0
#endif
	   )
	    putcmdline(c, TRUE);
    }
    else
	add_to_showcmd(c);
    ++no_mapping;
    ++allow_keys;
    cc = plain_vgetc();
    --no_mapping;
    --allow_keys;
    if (cc != ESC)	    
	return digraph_get(c, cc, TRUE);
    return NUL;
}


    static int
getexactdigraph(int char1, int char2, int meta_char)
{
    int		i;
    int		retval = 0;
    digr_T	*dp;

    if (IS_SPECIAL(char1) || IS_SPECIAL(char2))
	return char2;

    
    dp = (digr_T *)user_digraphs.ga_data;
    for (i = 0; i < user_digraphs.ga_len; ++i)
    {
	if ((int)dp->char1 == char1 && (int)dp->char2 == char2)
	{
	    retval = dp->result;
	    break;
	}
	++dp;
    }

    
    if (retval == 0)
    {
	dp = digraphdefault;
	while (dp->char1 != 0)
	{
	    if ((int)dp->char1 == char1 && (int)dp->char2 == char2)
	    {
		retval = dp->result;
		break;
	    }
	    ++dp;
	}
    }
#ifdef USE_UNICODE_DIGRAPHS
    if (retval != 0 && !enc_utf8)
    {
	char_u	    buf[6], *to;
	vimconv_T   vc;

	
	i = utf_char2bytes(retval, buf);
	retval = 0;
	vc.vc_type = CONV_NONE;
	if (convert_setup(&vc, (char_u *)"utf-8", p_enc) == OK)
	{
	    vc.vc_fail = TRUE;
	    to = string_convert(&vc, buf, &i);
	    if (to != NULL)
	    {
		retval = (*mb_ptr2char)(to);
		vim_free(to);
	    }
	    (void)convert_setup(&vc, NULL, NULL);
	}
    }
#endif

    
    if (!has_mbyte && retval > 0xff)
	retval = 0;

    if (retval == 0)		
    {
	if (char1 == ' ' && meta_char)	
	    return (char2 | 0x80);
	return char2;
    }
    return retval;
}


    int
digraph_get(int char1, int char2, int meta_char)
{
    int	    retval;

    if (((retval = getexactdigraph(char1, char2, meta_char)) == char2)
	    && (char1 != char2)
	    && ((retval = getexactdigraph(char2, char1, meta_char)) == char1))
	return char2;
    return retval;
}


    static void
registerdigraph(int char1, int char2, int n)
{
    int		i;
    digr_T	*dp;

    
    dp = (digr_T *)user_digraphs.ga_data;
    for (i = 0; i < user_digraphs.ga_len; ++i)
    {
	if ((int)dp->char1 == char1 && (int)dp->char2 == char2)
	{
	    dp->result = n;
	    return;
	}
	++dp;
    }

    
    if (ga_grow(&user_digraphs, 1) == FAIL)
	return;

    dp = (digr_T *)user_digraphs.ga_data + user_digraphs.ga_len;
    dp->char1 = char1;
    dp->char2 = char2;
    dp->result = n;
    ++user_digraphs.ga_len;
}


    static int
check_digraph_chars_valid(int char1, int char2)
{
    if (char2 == 0)
    {
	char_u msg[MB_MAXBYTES + 1];

	msg[mb_char2bytes(char1, msg)] = NUL;

	semsg(_(e_digraph_must_be_just_two_characters_str), msg);
	return FALSE;
    }
    if (char1 == ESC || char2 == ESC)
    {
	emsg(_(e_escape_not_allowed_in_digraph));
	return FALSE;
    }
    return TRUE;
}




    void
putdigraph(char_u *str)
{
    int		char1, char2, n;

    while (*str != NUL)
    {
	str = skipwhite(str);
	if (*str == NUL)
	    return;
	char1 = *str++;
	char2 = *str++;

	if (!check_digraph_chars_valid(char1, char2))
	    return;

	str = skipwhite(str);
	if (!VIM_ISDIGIT(*str))
	{
	    emsg(_(e_number_expected));
	    return;
	}
	n = getdigits(&str);

	registerdigraph(char1, char2, n);
    }
}

#if defined(USE_UNICODE_DIGRAPHS)
    static void
digraph_header(char *msg)
{
    if (msg_col > 0)
	msg_putchar('\n');
    msg_outtrans_attr((char_u *)msg, HL_ATTR(HLF_CM));
    msg_putchar('\n');
}
#endif

    void
listdigraphs(int use_headers)
{
    int		i;
    digr_T	*dp;
    result_T	previous = 0;

    msg_putchar('\n');

    dp = digraphdefault;
    while (dp->char1 != NUL && !got_int)
    {
#if defined(USE_UNICODE_DIGRAPHS)
	digr_T tmp;

	
	tmp.char1 = dp->char1;
	tmp.char2 = dp->char2;
	tmp.result = getexactdigraph(tmp.char1, tmp.char2, FALSE);
	if (tmp.result != 0 && tmp.result != tmp.char2
					  && (has_mbyte || tmp.result <= 255))
	    printdigraph(&tmp, use_headers ? &previous : NULL);
#else

	if (getexactdigraph(dp->char1, dp->char2, FALSE) == dp->result
		&& (has_mbyte || dp->result <= 255))
	    printdigraph(dp, use_headers ? &previous : NULL);
#endif
	++dp;
	ui_breakcheck();
    }

    dp = (digr_T *)user_digraphs.ga_data;
    for (i = 0; i < user_digraphs.ga_len && !got_int; ++i)
    {
#if defined(USE_UNICODE_DIGRAPHS)
	if (previous >= 0 && use_headers)
	    digraph_header(_("Custom"));
	previous = -1;
#endif
	printdigraph(dp, NULL);
	ui_breakcheck();
	++dp;
    }

    
    
    set_must_redraw(UPD_CLEAR);
}

    static void
digraph_getlist_appendpair(digr_T *dp, list_T *l)
{
    char_u	buf[30];
    char_u	*p;
    list_T	*l2;
    listitem_T	*li, *li2;


    li = listitem_alloc();
    if (li == NULL)
	return;
    list_append(l, li);
    li->li_tv.v_type = VAR_LIST;
    li->li_tv.v_lock = 0;

    l2 = list_alloc();
    li->li_tv.vval.v_list = l2;
    if (l2 == NULL)
	return;
    ++l2->lv_refcount;

    li2 = listitem_alloc();
    if (li2 == NULL)
	return;
    list_append(l2, li2);
    li2->li_tv.v_type = VAR_STRING;
    li2->li_tv.v_lock = 0;

    buf[0] = dp->char1;
    buf[1] = dp->char2;
    buf[2] = NUL;
    li2->li_tv.vval.v_string = vim_strsave(&buf[0]);

    li2 = listitem_alloc();
    if (li2 == NULL)
	return;
    list_append(l2, li2);
    li2->li_tv.v_type = VAR_STRING;
    li2->li_tv.v_lock = 0;

    p = buf;
    if (has_mbyte)
	p += (*mb_char2bytes)(dp->result, p);
    else
	*p++ = (char_u)dp->result;
    *p = NUL;

    li2->li_tv.vval.v_string = vim_strsave(buf);
}

    static void
digraph_getlist_common(int list_all, typval_T *rettv)
{
    int		i;
    digr_T	*dp;

    if (rettv_list_alloc(rettv) == FAIL)
	return;

    if (list_all)
    {
	dp = digraphdefault;
	while (dp->char1 != NUL && !got_int)
	{
#ifdef USE_UNICODE_DIGRAPHS
	    digr_T tmp;

	    tmp.char1 = dp->char1;
	    tmp.char2 = dp->char2;
	    tmp.result = getexactdigraph(tmp.char1, tmp.char2, FALSE);
	    if (tmp.result != 0 && tmp.result != tmp.char2
					  && (has_mbyte || tmp.result <= 255))
		digraph_getlist_appendpair(&tmp, rettv->vval.v_list);
#else
	    if (getexactdigraph(dp->char1, dp->char2, FALSE) == dp->result
		    && (has_mbyte || dp->result <= 255))
		digraph_getlist_appendpair(dp, rettv->vval.v_list);
#endif
	    ++dp;
	}
    }

    dp = (digr_T *)user_digraphs.ga_data;
    for (i = 0; i < user_digraphs.ga_len && !got_int; ++i)
    {
	digraph_getlist_appendpair(dp, rettv->vval.v_list);
	++dp;
    }
}

static struct dg_header_entry {
    int	    dg_start;
    char    *dg_header;
} header_table[] = {
    {DG_START_LATIN, N_("Latin supplement")},
    {DG_START_GREEK, N_("Greek and Coptic")},
    {DG_START_CYRILLIC, N_("Cyrillic")},
    {DG_START_HEBREW, N_("Hebrew")},
    {DG_START_ARABIC, N_("Arabic")},
    {DG_START_LATIN_EXTENDED, N_("Latin extended")},
    {DG_START_GREEK_EXTENDED, N_("Greek extended")},
    {DG_START_PUNCTUATION, N_("Punctuation")},
    {DG_START_SUB_SUPER, N_("Super- and subscripts")},
    {DG_START_CURRENCY, N_("Currency")},
    {DG_START_OTHER1, N_("Other")},
    {DG_START_ROMAN, N_("Roman numbers")},
    {DG_START_ARROWS, N_("Arrows")},
    {DG_START_MATH, N_("Mathematical operators")},
    {DG_START_TECHNICAL, N_("Technical")},
    {DG_START_OTHER2, N_("Other")},
    {DG_START_DRAWING, N_("Box drawing")},
    {DG_START_BLOCK, N_("Block elements")},
    {DG_START_SHAPES, N_("Geometric shapes")},
    {DG_START_SYMBOLS, N_("Symbols")},
    {DG_START_DINGBATS, N_("Dingbats")},
    {DG_START_CJK_SYMBOLS, N_("CJK symbols and punctuation")},
    {DG_START_HIRAGANA, N_("Hiragana")},
    {DG_START_KATAKANA, N_("Katakana")},
    {DG_START_BOPOMOFO, N_("Bopomofo")},
    {DG_START_OTHER3, N_("Other")},
    {0xfffffff, NULL},
};

    static void
printdigraph(digr_T *dp, result_T *previous)
{
    char_u	buf[30];
    char_u	*p;

    int		list_width;

    if ((dy_flags & DY_UHEX) || has_mbyte)
	list_width = 13;
    else
	list_width = 11;

    if (dp->result == 0)
	return;

#if defined(USE_UNICODE_DIGRAPHS)
    if (previous != NULL)
    {
	int i;

	for (i = 0; header_table[i].dg_header != NULL; ++i)
	    if (*previous < header_table[i].dg_start
		    && dp->result >= header_table[i].dg_start
		    && dp->result < header_table[i + 1].dg_start)
	    {
		digraph_header(_(header_table[i].dg_header));
		break;
	    }
	*previous = dp->result;
    }
#endif
    if (msg_col > Columns - list_width)
	msg_putchar('\n');
    if (msg_col)
	while (msg_col % list_width != 0)
	    msg_putchar(' ');

    p = buf;
    *p++ = dp->char1;
    *p++ = dp->char2;
    *p++ = ' ';
    *p = NUL;
    msg_outtrans(buf);
    p = buf;
    if (has_mbyte)
    {
	
	if (enc_utf8 && utf_iscomposing(dp->result))
	    *p++ = ' ';
	p += (*mb_char2bytes)(dp->result, p);
    }
    else
	*p++ = (char_u)dp->result;
    *p = NUL;
    msg_outtrans_attr(buf, HL_ATTR(HLF_8));
    p = buf;
    if (char2cells(dp->result) == 1)
	*p++ = ' ';
    vim_snprintf((char *)p, sizeof(buf) - (p - buf), " %3d", dp->result);
    msg_outtrans(buf);
}

# ifdef FEAT_EVAL

    static int
get_digraph_chars(typval_T *arg, int *char1, int *char2)
{
    char_u	buf_chars[NUMBUFLEN];
    char_u	*chars = tv_get_string_buf_chk(arg, buf_chars);
    char_u	*p = chars;

    if (p != NULL)
    {
	if (*p != NUL)
	{
	    *char1 = mb_cptr2char_adv(&p);
	    if (*p != NUL)
	    {
		*char2 = mb_cptr2char_adv(&p);
		if (*p == NUL)
		{
		    if (check_digraph_chars_valid(*char1, *char2))
			return OK;
		    return FAIL;
		}
	    }
	}
    }
    semsg(_(e_digraph_must_be_just_two_characters_str), chars);
    return FAIL;
}

    static int
digraph_set_common(typval_T *argchars, typval_T *argdigraph)
{
    int		char1, char2;
    char_u	*digraph;
    char_u	*p;
    char_u	buf_digraph[NUMBUFLEN];
    varnumber_T n;

    if (get_digraph_chars(argchars, &char1, &char2) == FAIL)
	return FALSE;

    digraph = tv_get_string_buf_chk(argdigraph, buf_digraph);
    if (digraph == NULL)
	return FALSE;
    p = digraph;
    n = mb_cptr2char_adv(&p);
    if (*p != NUL)
    {
	semsg(_(e_digraph_argument_must_be_one_character_str), digraph);
	return FALSE;
    }

    registerdigraph(char1, char2, (int)n);
    return TRUE;
}
# endif

#endif 

#if defined(FEAT_EVAL) || defined(PROTO)

    void
f_digraph_get(typval_T *argvars, typval_T *rettv)
{
# ifdef FEAT_DIGRAPHS
    int		code;
    char_u	buf[NUMBUFLEN];
    char_u	*digraphs;

    rettv->v_type = VAR_STRING;
    rettv->vval.v_string = NULL;  

    if (in_vim9script() && check_for_string_arg(argvars, 0) == FAIL)
	return;

    digraphs = tv_get_string_chk(&argvars[0]);

    if (digraphs == NULL)
	return;
    else if (STRLEN(digraphs) != 2)
    {
	semsg(_(e_digraph_must_be_just_two_characters_str), digraphs);
	return;
    }
    code = digraph_get(digraphs[0], digraphs[1], FALSE);

    if (has_mbyte)
	buf[(*mb_char2bytes)(code, buf)] = NUL;
    else
    {
	buf[0] = code;
	buf[1] = NUL;
    }

    rettv->vval.v_string = vim_strsave(buf);
# else
    emsg(_(e_no_digraphs_version));
# endif
}


    void
f_digraph_getlist(typval_T *argvars, typval_T *rettv)
{
# ifdef FEAT_DIGRAPHS
    int     flag_list_all;

    if (in_vim9script() && check_for_opt_bool_arg(argvars, 0) == FAIL)
	return;

    if (argvars[0].v_type == VAR_UNKNOWN)
	flag_list_all = FALSE;
    else
    {
	int	    error = FALSE;
	varnumber_T flag = tv_get_number_chk(&argvars[0], &error);

	if (error)
	    return;
	flag_list_all = flag ? TRUE : FALSE;
    }

    digraph_getlist_common(flag_list_all, rettv);
# else
    emsg(_(e_no_digraphs_version));
# endif
}


    void
f_digraph_set(typval_T *argvars, typval_T *rettv)
{
# ifdef FEAT_DIGRAPHS
    rettv->v_type = VAR_BOOL;
    rettv->vval.v_number = VVAL_FALSE;

    if (in_vim9script()
	    && (check_for_string_arg(argvars, 0) == FAIL
		|| check_for_string_arg(argvars, 1) == FAIL))
	return;

    if (!digraph_set_common(&argvars[0], &argvars[1]))
	return;

    rettv->vval.v_number = VVAL_TRUE;
# else
    emsg(_(e_no_digraphs_version));
# endif
}


    void
f_digraph_setlist(typval_T * argvars, typval_T *rettv)
{
# ifdef FEAT_DIGRAPHS
    list_T	*pl, *l;
    listitem_T	*pli;

    rettv->v_type = VAR_BOOL;
    rettv->vval.v_number = VVAL_FALSE;

    if (argvars[0].v_type != VAR_LIST)
    {
	emsg(_(e_digraph_setlist_argument_must_be_list_of_lists_with_two_items));
	return;
    }

    pl = argvars[0].vval.v_list;
    if (pl == NULL)
    {
	
	rettv->vval.v_number = VVAL_TRUE;
	return;
    }

    FOR_ALL_LIST_ITEMS(pl, pli)
    {
	if (pli->li_tv.v_type != VAR_LIST)
	{
	    emsg(_(e_digraph_setlist_argument_must_be_list_of_lists_with_two_items));
	    return;
	}

	l = pli->li_tv.vval.v_list;
	if (l == NULL || l->lv_len != 2)
	{
	    emsg(_(e_digraph_setlist_argument_must_be_list_of_lists_with_two_items));
	    return;
	}

	if (!digraph_set_common(&l->lv_first->li_tv,
						 &l->lv_first->li_next->li_tv))
	    return;
    }
    rettv->vval.v_number = VVAL_TRUE;
# else
    emsg(_(e_no_digraphs_version));
# endif
}

#endif 


#if defined(FEAT_KEYMAP) || defined(PROTO)


typedef struct
{
    char_u	*from;
    char_u	*to;
} kmap_T;

#define KMAP_MAXLEN 20	    

static void keymap_unload(void);


    char *
keymap_init(void)
{
    curbuf->b_kmap_state &= ~KEYMAP_INIT;

    if (*curbuf->b_p_keymap == NUL)
    {
	
	
	keymap_unload();
	do_cmdline_cmd((char_u *)"unlet! b:keymap_name");
    }
    else
    {
	char_u	*buf;
	size_t  buflen;

	
	
	buflen = STRLEN(curbuf->b_p_keymap) + STRLEN(p_enc) + 14;
	buf = alloc(buflen);
	if (buf == NULL)
	    return e_out_of_memory;

	
	vim_snprintf((char *)buf, buflen, "keymap/%s_%s.vim",
						   curbuf->b_p_keymap, p_enc);
	if (source_runtime(buf, 0) == FAIL)
	{
	    
	    vim_snprintf((char *)buf, buflen, "keymap/%s.vim",
							  curbuf->b_p_keymap);
	    if (source_runtime(buf, 0) == FAIL)
	    {
		vim_free(buf);
		return N_(e_keymap_file_not_found);
	    }
	}
	vim_free(buf);
    }

    return NULL;
}


    void
ex_loadkeymap(exarg_T *eap)
{
    char_u	*line;
    char_u	*p;
    char_u	*s;
    kmap_T	*kp;
#define KMAP_LLEN   200	    
    char_u	buf[KMAP_LLEN + 11];
    int		i;
    char_u	*save_cpo = p_cpo;

    if (!sourcing_a_script(eap))
    {
	emsg(_(e_using_loadkeymap_not_in_sourced_file));
	return;
    }

    
    keymap_unload();

    curbuf->b_kmap_state = 0;
    ga_init2(&curbuf->b_kmap_ga, sizeof(kmap_T), 20);

    
    p_cpo = (char_u *)"C";

    
    for (;;)
    {
	line = eap->ea_getline(0, eap->cookie, 0, TRUE);
	if (line == NULL)
	    break;

	p = skipwhite(line);
	if (*p != '"' && *p != NUL && ga_grow(&curbuf->b_kmap_ga, 1) == OK)
	{
	    kp = (kmap_T *)curbuf->b_kmap_ga.ga_data + curbuf->b_kmap_ga.ga_len;
	    s = skiptowhite(p);
	    kp->from = vim_strnsave(p, s - p);
	    p = skipwhite(s);
	    s = skiptowhite(p);
	    kp->to = vim_strnsave(p, s - p);

	    if (kp->from == NULL || kp->to == NULL
		    || STRLEN(kp->from) + STRLEN(kp->to) >= KMAP_LLEN
		    || *kp->from == NUL || *kp->to == NUL)
	    {
		if (kp->to != NULL && *kp->to == NUL)
		    emsg(_(e_empty_keymap_entry));
		vim_free(kp->from);
		vim_free(kp->to);
	    }
	    else
		++curbuf->b_kmap_ga.ga_len;
	}
	vim_free(line);
    }

    
    for (i = 0; i < curbuf->b_kmap_ga.ga_len; ++i)
    {
	vim_snprintf((char *)buf, sizeof(buf), "<buffer> %s %s",
				((kmap_T *)curbuf->b_kmap_ga.ga_data)[i].from,
				 ((kmap_T *)curbuf->b_kmap_ga.ga_data)[i].to);
	(void)do_map(MAPTYPE_NOREMAP, buf, MODE_LANGMAP, FALSE);
    }

    p_cpo = save_cpo;

    curbuf->b_kmap_state |= KEYMAP_LOADED;
    status_redraw_curbuf();
}


    static void
keymap_unload(void)
{
    char_u	buf[KMAP_MAXLEN + 10];
    int		i;
    char_u	*save_cpo = p_cpo;
    kmap_T	*kp;

    if (!(curbuf->b_kmap_state & KEYMAP_LOADED))
	return;

    
    p_cpo = (char_u *)"C";

    
    kp = (kmap_T *)curbuf->b_kmap_ga.ga_data;
    for (i = 0; i < curbuf->b_kmap_ga.ga_len; ++i)
    {
	vim_snprintf((char *)buf, sizeof(buf), "<buffer> %s", kp[i].from);
	(void)do_map(MAPTYPE_UNMAP, buf, MODE_LANGMAP, FALSE);
    }
    keymap_clear(&curbuf->b_kmap_ga);

    p_cpo = save_cpo;

    ga_clear(&curbuf->b_kmap_ga);
    curbuf->b_kmap_state &= ~KEYMAP_LOADED;
    status_redraw_curbuf();
}

    void
keymap_clear(garray_T *kmap)
{
    int	    i;
    kmap_T  *kp = (kmap_T *)kmap->ga_data;

    for (i = 0; i < kmap->ga_len; ++i)
    {
	vim_free(kp[i].from);
	vim_free(kp[i].to);
    }
}
#endif 
