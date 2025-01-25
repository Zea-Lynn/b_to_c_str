//Turns a binary string into a string you can put into a header file statically for compiling data into a program.

#include <stdint.h>
#include <string.h>
#include <stdio.h>

//assuming char is a byte.
typedef char const * c_str;

c_str t5hingy = "biga ss data";



// #define byterinos\
// 	X('\x00', "\\x00")\
// 	X('\x01', "\\x01")\
// 	X('\x02', "\\x02")\
// 	X('\x03', "\\x03")\
// 	X('\x04', "\\x04")\
// 	X('\x05', "\\x05")\
// 	X('\x06', "\\x06")\
// 	X('\x07', "\\x07")\
// 	X('\x08', "\\x08")\
// 	X('\x09', "\\x09")\
// 	X('\x0a', "\\x0a")\
// 	X('\x0b', "\\x0b")\
// 	X('\x0c', "\\x0c")\
// 	X('\x0d', "\\x0d")\
// 	X('\x0e', "\\x0e")\
// 	X('\x0f', "\\x0f")\
// 	X('\x10', "\\x10")\
// 	X('\x11', "\\x11")\
// 	X('\x12', "\\x12")\
// 	X('\x13', "\\x13")\
// 	X('\x14', "\\x14")\
// 	X('\x15', "\\x15")\
// 	X('\x16', "\\x16")\
// 	X('\x17', "\\x17")\
// 	X('\x18', "\\x18")\
// 	X('\x19', "\\x19")\
// 	X('\x1a', "\\x1a")\
// 	X('\x1b', "\\x1b")\
// 	X('\x1c', "\\x1c")\
// 	X('\x1d', "\\x1d")\
// 	X('\x1e', "\\x1e")\
// 	X('\x1f', "\\x1f")\
// 	X('\x20', "\\x20")\
// 	X('\x21', "\\x21")\
// 	X('\x22', "\\x22")\
// 	X('\x23', "\\x23")\
// 	X('\x24', "\\x24")\
// 	X('\x25', "\\x25")\
// 	X('\x26', "\\x26")\
// 	X('\x27', "\\x27")\
// 	X('\x28', "\\x28")\
// 	X('\x29', "\\x29")\
// 	X('\x2a', "\\x2a")\
// 	X('\x2b', "\\x2b")\
// 	X('\x2c', "\\x2c")\
// 	X('\x2d', "\\x2d")\
// 	X('\x2e', "\\x2e")\
// 	X('\x2f', "\\x2f")\
// 	X('\x30', "\\x30")\
// 	X('\x31', "\\x31")\
// 	X('\x32', "\\x32")\
// 	X('\x33', "\\x33")\
// 	X('\x34', "\\x34")\
// 	X('\x35', "\\x35")\
// 	X('\x36', "\\x36")\
// 	X('\x37', "\\x37")\
// 	X('\x38', "\\x38")\
// 	X('\x39', "\\x39")\
// 	X('\x3a', "\\x3a")\
// 	X('\x3b', "\\x3b")\
// 	X('\x3c', "\\x3c")\
// 	X('\x3d', "\\x3d")\
// 	X('\x3e', "\\x3e")\
// 	X('\x3f', "\\x3f")\
// 	X('\x40', "\\x40")\
// 	X('\x41', "A")\
// 	X('\x42', "B")\
// 	X('\x43', "C")\
// 	X('\x44', "D")\
// 	X('\x45', "E")\
// 	X('\x46', "F")\
// 	X('\x47', "G")\
// 	X('\x48', "H")\
// 	X('\x49', "I")\
// 	X('\x4a', "J")\
// 	X('\x4b', "K")\
// 	X('\x4c', "L")\
// 	X('\x4d', "M")\
// 	X('\x4e', "N")\
// 	X('\x4f', "O")\
// 	X('\x50', "P")\
// 	X('\x51', "Q")\
// 	X('\x52', "R")\
// 	X('\x53', "S")\
// 	X('\x54', "T")\
// 	X('\x55', "U")\
// 	X('\x56', "V")\
// 	X('\x57', "W")\
// 	X('\x58', "X")\
// 	X('\x59', "Y")\
// 	X('\x5a', "Z")\
// 	X('\x5b', "\\x5b")\
// 	X('\x5c', "\\x5c")\
// 	X('\x5d', "\\x5d")\
// 	X('\x5e', "\\x5e")\
// 	X('\x5f', "\\x5f")\
// 	X('\x60', "\\x60")\
// 	X('\x61', "a")\
// 	X('\x62', "b")\
// 	X('\x63', "c")\
// 	X('\x64', "d")\
// 	X('\x65', "e")\
// 	X('\x66', "f")\
// 	X('\x67', "g")\
// 	X('\x68', "h")\
// 	X('\x69', "i")\
// 	X('\x6a', "j")\
// 	X('\x6b', "k")\
// 	X('\x6c', "l")\
// 	X('\x6d', "m")\
// 	X('\x6e', "n")\
// 	X('\x6f', "o")\
// 	X('\x70', "p")\
// 	X('\x71', "q")\
// 	X('\x72', "r")\
// 	X('\x73', "s")\
// 	X('\x74', "t")\
// 	X('\x75', "u")\
// 	X('\x76', "v")\
// 	X('\x77', "w")\
// 	X('\x78', "x")\
// 	X('\x79', "y")\
// 	X('\x7a', "z")\
// 	X('\x7b', "\\x7b")\
// 	X('\x7c', "\\x7c")\
// 	X('\x7d', "\\x7d")\
// 	X('\x7e', "\\x7e")\
// 	X('\x7f', "\\x7f")\
// 	X('\x80', "\\x80")\
// 	X('\x81', "\\x81")\
// 	X('\x82', "\\x82")\
// 	X('\x83', "\\x83")\
// 	X('\x84', "\\x84")\
// 	X('\x85', "\\x85")\
// 	X('\x86', "\\x86")\
// 	X('\x87', "\\x87")\
// 	X('\x88', "\\x88")\
// 	X('\x89', "\\x89")\
// 	X('\x8a', "\\x8a")\
// 	X('\x8b', "\\x8c")\
// 	X('\x8c', "\\x8c")\
// 	X('\x8d', "\\x8d")\
// 	X('\x8e', "\\x8e")\
// 	X('\x8f', "\\x8f")\
// 	X('\x90', "\\x90")\
// 	X('\x91', "\\x91")\
// 	X('\x92', "\\x92")\
// 	X('\x93', "\\x93")\
// 	X('\x94', "\\x94")\
// 	X('\x95', "\\x95")\
// 	X('\x96', "\\x96")\
// 	X('\x97', "\\x97")\
// 	X('\x98', "\\x98")\
// 	X('\x99', "\\x99")\
// 	X('\x9a', "\\x9a")\
// 	X('\x9b', "\\x9b")\
// 	X('\x9c', "\\x9c")\
// 	X('\x9d', "\\x9d")\
// 	X('\x9e', "\\x9e")\
// 	X('\x9f', "\\x9f")\
// 	X('\xa0', "\\xa0")\
// 	X('\xa1', "\\xa1")\
// 	X('\xa2', "\\xa2")\
// 	X('\xa3', "\\xa3")\
// 	X('\xa4', "\\xa4")\
// 	X('\xa5', "\\xa5")\
// 	X('\xa6', "\\xa6")\
// 	X('\xa7', "\\xa7")\
// 	X('\xa8', "\\xa8")\
// 	X('\xa9', "\\xa9")\
// 	X('\xaa', "\\xaa")\
// 	X('\xab', "\\xab")\
// 	X('\xac', "\\xac")\
// 	X('\xad', "\\xad")\
// 	X('\xae', "\\xae")\
// 	X('\xaf', "\\xaf")\
// 	X('\xb0', "\\xb0")\
// 	X('\xb1', "\\xb1")\
// 	X('\xb2', "\\xb2")\
// 	X('\xb3', "\\xb3")\
// 	X('\xb4', "\\xb4")\
// 	X('\xb5', "\\xb5")\
// 	X('\xb6', "\\xb6")\
// 	X('\xb7', "\\xb7")\
// 	X('\xb8', "\\xb8")\
// 	X('\xb9', "\\xb9")\
// 	X('\xba', "\\xba")\
// 	X('\xbb', "\\xbb")\
// 	X('\xbc', "\\xbc")\
// 	X('\xbd', "\\xbd")\
// 	X('\xbe', "\\xbe")\
// 	X('\xbf', "\\xbf")\
// 	X('\xc0', "\\xc0")\
// 	X('\xc1', "\\xc1")\
// 	X('\xc2', "\\xc2")\
// 	X('\xc3', "\\xc3")\
// 	X('\xc4', "\\xc4")\
// 	X('\xc5', "\\xc5")\
// 	X('\xc6', "\\xc6")\
// 	X('\xc7', "\\xc7")\
// 	X('\xc8', "\\xc8")\
// 	X('\xc9', "\\xc9")\
// 	X('\xca', "\\xca")\
// 	X('\xcb', "\\xcb")\
// 	X('\xcc', "\\xcc")\
// 	X('\xcd', "\\xcd")\
// 	X('\xce', "\\xce")\
// 	X('\xcf', "\\xcf")\
// 	X('\xd0', "\\xd0")\
// 	X('\xd1', "\\xd1")\
// 	X('\xd2', "\\xd2")\
// 	X('\xd3', "\\xd3")\
// 	X('\xd4', "\\xd4")\
// 	X('\xd5', "\\xd5")\
// 	X('\xd6', "\\xd6")\
// 	X('\xd7', "\\xd7")\
// 	X('\xd8', "\\xd8")\
// 	X('\xd9', "\\xd9")\
// 	X('\xda', "\\xda")\
// 	X('\xdb', "\\xdb")\
// 	X('\xdc', "\\xdc")\
// 	X('\xdd', "\\xdd")\
// 	X('\xde', "\\xde")\
// 	X('\xdf', "\\xdf")\
// 	X('\xe0', "\\xe0")\
// 	X('\xe1', "\\xe1")\
// 	X('\xe2', "\\xe2")\
// 	X('\xe3', "\\xe3")\
// 	X('\xe4', "\\xe4")\
// 	X('\xe5', "\\xe5")\
// 	X('\xe6', "\\xe6")\
// 	X('\xe7', "\\xe7")\
// 	X('\xe8', "\\xe8")\
// 	X('\xe9', "\\xe9")\
// 	X('\xea', "\\xea")\
// 	X('\xeb', "\\xeb")\
// 	X('\xec', "\\xec")\
// 	X('\xed', "\\xed")\
// 	X('\xee', "\\xee")\
// 	X('\xef', "\\xef")\
// 	X('\xf0', "\\xf0")\
// 	X('\xf1', "\\xf1")\
// 	X('\xf2', "\\xf2")\
// 	X('\xf3', "\\xf3")\
// 	X('\xf4', "\\xf4")\
// 	X('\xf5', "\\xf5")\
// 	X('\xf6', "\\xf6")\
// 	X('\xf7', "\\xf7")\
// 	X('\xf8', "\\xf8")\
// 	X('\xf9', "\\xf9")\
// 	X('\xfa', "\\xfa")\
// 	X('\xfb', "\\xfb")\
// 	X('\xfc', "\\xfc")\
// 	X('\xfd', "\\xfd")\
// 	X('\xfe', "\\xfe")\
// 	X('\xff', "\\xff")\


#define byterinos\
	X('\x00', "\\x00", NULL)\
 	X('\x01', "\\x01", NULL)\
 	X('\x02', "\\x02", NULL)\
 	X('\x03', "\\x03", NULL)\
 	X('\x04', "\\x04", NULL)\
 	X('\x05', "\\x05", NULL)\
 	X('\x06', "\\x06", NULL)\
 	X('\x07', "\\x07", NULL)\
 	X('\x08', "\\x08", NULL)\
 	X('\x09', "\\x09", NULL)\
 	X('\x0a', "\\x0a", NULL)\
 	X('\x0b', "\\x0b", NULL)\
 	X('\x0c', "\\x0c", NULL)\
 	X('\x0d', "\\x0d", NULL)\
 	X('\x0e', "\\x0e", NULL)\
 	X('\x0f', "\\x0f", NULL)\
 	X('\x10', "\\x10", NULL)\
 	X('\x11', "\\x11", NULL)\
 	X('\x12', "\\x12", NULL)\
 	X('\x13', "\\x13", NULL)\
 	X('\x14', "\\x14", NULL)\
 	X('\x15', "\\x15", NULL)\
 	X('\x16', "\\x16", NULL)\
 	X('\x17', "\\x17", NULL)\
 	X('\x18', "\\x18", NULL)\
 	X('\x19', "\\x19", NULL)\
 	X('\x1a', "\\x1a", NULL)\
 	X('\x1b', "\\x1b", NULL)\
 	X('\x1c', "\\x1c", NULL)\
 	X('\x1d', "\\x1d", NULL)\
 	X('\x1e', "\\x1e", NULL)\
 	X('\x1f', "\\x1f", NULL)\
 	X('\x20', "\\x20", NULL)\
 	X('\x21', "\\x21", NULL)\
 	X('\x22', "\\x22", NULL)\
 	X('\x23', "\\x23", NULL)\
 	X('\x24', "\\x24", NULL)\
 	X('\x25', "\\x25", NULL)\
 	X('\x26', "\\x26", NULL)\
 	X('\x27', "\\x27", NULL)\
 	X('\x28', "\\x28", NULL)\
 	X('\x29', "\\x29", NULL)\
 	X('\x2a', "\\x2a", NULL)\
 	X('\x2b', "\\x2b", NULL)\
 	X('\x2c', "\\x2c", NULL)\
 	X('\x2d', "\\x2d", NULL)\
 	X('\x2e', "\\x2e", NULL)\
 	X('\x2f', "\\x2f", NULL)\
 	X('\x30', "\\x30", NULL)\
 	X('\x31', "\\x31", NULL)\
 	X('\x32', "\\x32", NULL)\
 	X('\x33', "\\x33", NULL)\
 	X('\x34', "\\x34", NULL)\
 	X('\x35', "\\x35", NULL)\
 	X('\x36', "\\x36", NULL)\
 	X('\x37', "\\x37", NULL)\
 	X('\x38', "\\x38", NULL)\
 	X('\x39', "\\x39", NULL)\
 	X('\x3a', "\\x3a", NULL)\
 	X('\x3b', "\\x3b", NULL)\
 	X('\x3c', "\\x3c", NULL)\
 	X('\x3d', "\\x3d", NULL)\
 	X('\x3e', "\\x3e", NULL)\
 	X('\x3f', "\\x3f", NULL)\
 	X('\x40', "\\x40", NULL)\
 	X('\x41', "\\x41", NULL)\
 	X('\x42', "\\x42", NULL)\
 	X('\x43', "\\x43", NULL)\
 	X('\x44', "\\x44", NULL)\
 	X('\x45', "\\x45", NULL)\
 	X('\x46', "\\x46", NULL)\
 	X('\x47', "\\x47", NULL)\
 	X('\x48', "\\x48", NULL)\
 	X('\x49', "\\x49", NULL)\
 	X('\x4a', "\\x4a", NULL)\
 	X('\x4b', "\\x4b", NULL)\
 	X('\x4c', "\\x4c", NULL)\
 	X('\x4d', "\\x4d", NULL)\
 	X('\x4e', "\\x4e", NULL)\
 	X('\x4f', "\\x4f", NULL)\
 	X('\x50', "\\x50", NULL)\
 	X('\x51', "\\x51", NULL)\
 	X('\x52', "\\x52", NULL)\
 	X('\x53', "\\x53", NULL)\
 	X('\x54', "\\x54", NULL)\
 	X('\x55', "\\x55", NULL)\
 	X('\x56', "\\x56", NULL)\
 	X('\x57', "\\x57", NULL)\
 	X('\x58', "\\x58", NULL)\
 	X('\x59', "\\x59", NULL)\
 	X('\x5a', "\\x5a", NULL)\
 	X('\x5b', "\\x5b", NULL)\
 	X('\x5c', "\\x5c", NULL)\
 	X('\x5d', "\\x5d", NULL)\
 	X('\x5e', "\\x5e", NULL)\
 	X('\x5f', "\\x5f", NULL)\
 	X('\x60', "\\x60", NULL)\
 	X('\x61', "\\x61", NULL)\
 	X('\x62', "\\x62", NULL)\
 	X('\x63', "\\x63", NULL)\
 	X('\x64', "\\x64", NULL)\
 	X('\x65', "\\x65", NULL)\
 	X('\x66', "\\x66", NULL)\
 	X('\x67', "\\x67", NULL)\
 	X('\x68', "\\x68", NULL)\
 	X('\x69', "\\x69", NULL)\
 	X('\x6a', "\\x6a", NULL)\
 	X('\x6b', "\\x6b", NULL)\
 	X('\x6c', "\\x6c", NULL)\
 	X('\x6d', "\\x6d", NULL)\
 	X('\x6e', "\\x6e", NULL)\
 	X('\x6f', "\\x6f", NULL)\
 	X('\x70', "\\x70", NULL)\
 	X('\x71', "\\x71", NULL)\
 	X('\x72', "\\x72", NULL)\
 	X('\x73', "\\x73", NULL)\
 	X('\x74', "\\x74", NULL)\
 	X('\x75', "\\x75", NULL)\
 	X('\x76', "\\x76", NULL)\
 	X('\x77', "\\x77", NULL)\
 	X('\x78', "\\x78", NULL)\
 	X('\x79', "\\x79", NULL)\
 	X('\x7a', "\\x7a", NULL)\
 	X('\x7b', "\\x7b", NULL)\
 	X('\x7c', "\\x7c", NULL)\
 	X('\x7d', "\\x7d", NULL)\
 	X('\x7e', "\\x7e", NULL)\
 	X('\x7f', "\\x7f", NULL)\
 	X('\x80', "\\x80", NULL)\
 	X('\x81', "\\x81", NULL)\
 	X('\x82', "\\x82", NULL)\
 	X('\x83', "\\x83", NULL)\
 	X('\x84', "\\x84", NULL)\
 	X('\x85', "\\x85", NULL)\
 	X('\x86', "\\x86", NULL)\
 	X('\x87', "\\x87", NULL)\
 	X('\x88', "\\x88", NULL)\
 	X('\x89', "\\x89", NULL)\
 	X('\x8a', "\\x8a", NULL)\
 	X('\x8b', "\\x8b", NULL)\
 	X('\x8c', "\\x8c", NULL)\
 	X('\x8d', "\\x8d", NULL)\
 	X('\x8e', "\\x8e", NULL)\
 	X('\x8f', "\\x8f", NULL)\
 	X('\x90', "\\x90", NULL)\
 	X('\x91', "\\x91", NULL)\
 	X('\x92', "\\x92", NULL)\
 	X('\x93', "\\x93", NULL)\
 	X('\x94', "\\x94", NULL)\
 	X('\x95', "\\x95", NULL)\
 	X('\x96', "\\x96", NULL)\
 	X('\x97', "\\x97", NULL)\
 	X('\x98', "\\x98", NULL)\
 	X('\x99', "\\x99", NULL)\
 	X('\x9a', "\\x9a", NULL)\
 	X('\x9b', "\\x9b", NULL)\
 	X('\x9c', "\\x9c", NULL)\
 	X('\x9d', "\\x9d", NULL)\
 	X('\x9e', "\\x9e", NULL)\
 	X('\x9f', "\\x9f", NULL)\
 	X('\xa0', "\\xa0", NULL)\
 	X('\xa1', "\\xa1", NULL)\
 	X('\xa2', "\\xa2", NULL)\
 	X('\xa3', "\\xa3", NULL)\
 	X('\xa4', "\\xa4", NULL)\
 	X('\xa5', "\\xa5", NULL)\
 	X('\xa6', "\\xa6", NULL)\
 	X('\xa7', "\\xa7", NULL)\
 	X('\xa8', "\\xa8", NULL)\
 	X('\xa9', "\\xa9", NULL)\
 	X('\xaa', "\\xaa", NULL)\
 	X('\xab', "\\xab", NULL)\
 	X('\xac', "\\xac", NULL)\
 	X('\xad', "\\xad", NULL)\
 	X('\xae', "\\xae", NULL)\
 	X('\xaf', "\\xaf", NULL)\
 	X('\xb0', "\\xb0", NULL)\
 	X('\xb1', "\\xb1", NULL)\
 	X('\xb2', "\\xb2", NULL)\
 	X('\xb3', "\\xb3", NULL)\
 	X('\xb4', "\\xb4", NULL)\
 	X('\xb5', "\\xb5", NULL)\
 	X('\xb6', "\\xb6", NULL)\
 	X('\xb7', "\\xb7", NULL)\
 	X('\xb8', "\\xb8", NULL)\
 	X('\xb9', "\\xb9", NULL)\
 	X('\xba', "\\xba", NULL)\
 	X('\xbb', "\\xbb", NULL)\
 	X('\xbc', "\\xbc", NULL)\
 	X('\xbd', "\\xbd", NULL)\
 	X('\xbe', "\\xbe", NULL)\
 	X('\xbf', "\\xbf", NULL)\
 	X('\xc0', "\\xc0", NULL)\
 	X('\xc1', "\\xc1", NULL)\
 	X('\xc2', "\\xc2", NULL)\
 	X('\xc3', "\\xc3", NULL)\
 	X('\xc4', "\\xc4", NULL)\
 	X('\xc5', "\\xc5", NULL)\
 	X('\xc6', "\\xc6", NULL)\
 	X('\xc7', "\\xc7", NULL)\
 	X('\xc8', "\\xc8", NULL)\
 	X('\xc9', "\\xc9", NULL)\
 	X('\xca', "\\xca", NULL)\
 	X('\xcb', "\\xcb", NULL)\
 	X('\xcc', "\\xcc", NULL)\
 	X('\xcd', "\\xcd", NULL)\
 	X('\xce', "\\xce", NULL)\
 	X('\xcf', "\\xcf", NULL)\
 	X('\xd0', "\\xd0", NULL)\
 	X('\xd1', "\\xd1", NULL)\
 	X('\xd2', "\\xd2", NULL)\
 	X('\xd3', "\\xd3", NULL)\
 	X('\xd4', "\\xd4", NULL)\
 	X('\xd5', "\\xd5", NULL)\
 	X('\xd6', "\\xd6", NULL)\
 	X('\xd7', "\\xd7", NULL)\
 	X('\xd8', "\\xd8", NULL)\
 	X('\xd9', "\\xd9", NULL)\
 	X('\xda', "\\xda", NULL)\
 	X('\xdb', "\\xdb", NULL)\
 	X('\xdc', "\\xdc", NULL)\
 	X('\xdd', "\\xdd", NULL)\
 	X('\xde', "\\xde", NULL)\
 	X('\xdf', "\\xdf", NULL)\
 	X('\xe0', "\\xe0", NULL)\
 	X('\xe1', "\\xe1", NULL)\
 	X('\xe2', "\\xe2", NULL)\
 	X('\xe3', "\\xe3", NULL)\
 	X('\xe4', "\\xe4", NULL)\
 	X('\xe5', "\\xe5", NULL)\
 	X('\xe6', "\\xe6", NULL)\
 	X('\xe7', "\\xe7", NULL)\
 	X('\xe8', "\\xe8", NULL)\
 	X('\xe9', "\\xe9", NULL)\
 	X('\xea', "\\xea", NULL)\
 	X('\xeb', "\\xeb", NULL)\
 	X('\xec', "\\xec", NULL)\
 	X('\xed', "\\xed", NULL)\
 	X('\xee', "\\xee", NULL)\
 	X('\xef', "\\xef", NULL)\
 	X('\xf0', "\\xf0", NULL)\
 	X('\xf1', "\\xf1", NULL)\
 	X('\xf2', "\\xf2", NULL)\
 	X('\xf3', "\\xf3", NULL)\
 	X('\xf4', "\\xf4", NULL)\
 	X('\xf5', "\\xf5", NULL)\
 	X('\xf6', "\\xf6", NULL)\
 	X('\xf7', "\\xf7", NULL)\
 	X('\xf8', "\\xf8", NULL)\
 	X('\xf9', "\\xf9", NULL)\
 	X('\xfa', "\\xfa", NULL)\
 	X('\xfb', "\\xfb", NULL)\
 	X('\xfc', "\\xfc", NULL)\
 	X('\xfd', "\\xfd", NULL)\
 	X('\xfe', "\\xfe", NULL)\
 	X('\xff', "\\xff", NULL)\

//returns 0 on success.
int b_to_c_str(uint64_t binary_size, uint8_t * binary, uint64_t * out_str_size, char * out_str){
	int64_t str_size = 0;
	if(!out_str){
		for(int64_t i = 0; i < binary_size; ++i){
			switch(binary[i]){
				#define X(byte, c_str) case (uint8_t)byte: str_size += sizeof(c_str)-1; break;
				byterinos
				#undef X
			}
		}
		++str_size;
		*out_str_size = str_size;
		return 0;
	}else{
		for(int64_t i = 0; i < binary_size; ++i){
			if(str_size >= *out_str_size) return 1;
			else switch(binary[i]){
				#define X(byte, c_str) \
					case (uint8_t)byte: \
					memcpy(out_str+str_size, c_str, sizeof(c_str)); \
					str_size += sizeof(c_str)-1; \
					break;
				byterinos
				#undef X
			}
		}
		if(str_size >= *out_str_size) return 1;
		++str_size;
		out_str[str_size] = 0;
		return 0;
	}
}

int main(){
	char in_buffer[1<<10] = {0};
	char out_buffer[10<<10];

	uint64_t bytes_read ;
	do{
		bytes_read= fread(in_buffer, 1, sizeof(in_buffer), stdin);

		uint64_t out_buffer_size = 0;
		b_to_c_str(bytes_read, in_buffer, &out_buffer_size, 0);
		if(out_buffer_size > sizeof(out_buffer)){
			printf("Error out buffer requers: %lu and has %lu", out_buffer_size, sizeof(out_buffer));
			puts("Error");
			return 1;
		}
		b_to_c_str(bytes_read, in_buffer, &out_buffer_size, out_buffer);
		printf("%s", out_buffer);

	}while(bytes_read);
}
