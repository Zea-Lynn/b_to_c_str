//Turns a binary string into a string you can put into a header file statically for compiling data into a program.

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//assuming char is a byte.
typedef char const * c_str;

c_str t5hingy = "biga ss data";

c_str hex_strs[] = { "\\x00", "\\x01", "\\x02", "\\x03", "\\x04", "\\x05", "\\x06", "\\x07", "\\x08", "\\x09", "\\x0a", "\\x0b", "\\x0c", "\\x0d", "\\x0e", "\\x0f", "\\x10", "\\x11", "\\x12", "\\x13", "\\x14", "\\x15", "\\x16", "\\x17", "\\x18", "\\x19", "\\x1a", "\\x1b", "\\x1c", "\\x1d", "\\x1e", "\\x1f", "\\x20", "\\x21", "\\x22", "\\x23", "\\x24", "\\x25", "\\x26", "\\x27", "\\x28", "\\x29", "\\x2a", "\\x2b", "\\x2c", "\\x2d", "\\x2e", "\\x2f", "\\x30", "\\x31", "\\x32", "\\x33", "\\x34", "\\x35", "\\x36", "\\x37", "\\x38", "\\x39", "\\x3a", "\\x3b", "\\x3c", "\\x3d", "\\x3e", "\\x3f", "\\x40", "\\x41", "\\x42", "\\x43", "\\x44", "\\x45", "\\x46", "\\x47", "\\x48", "\\x49", "\\x4a", "\\x4b", "\\x4c", "\\x4d", "\\x4e", "\\x4f", "\\x50", "\\x51", "\\x52", "\\x53", "\\x54", "\\x55", "\\x56", "\\x57", "\\x58", "\\x59", "\\x5a", "\\x5b", "\\x5c", "\\x5d", "\\x5e", "\\x5f", "\\x60", "\\x61", "\\x62", "\\x63", "\\x64", "\\x65", "\\x66", "\\x67", "\\x68", "\\x69", "\\x6a", "\\x6b", "\\x6c", "\\x6d", "\\x6e", "\\x6f", "\\x70", "\\x71", "\\x72", "\\x73", "\\x74", "\\x75", "\\x76", "\\x77", "\\x78", "\\x79", "\\x7a", "\\x7b", "\\x7c", "\\x7d", "\\x7e", "\\x7f", "\\x80", "\\x81", "\\x82", "\\x83", "\\x84", "\\x85", "\\x86", "\\x87", "\\x88", "\\x89", "\\x8a", "\\x8b", "\\x8c", "\\x8d", "\\x8e", "\\x8f", "\\x90", "\\x91", "\\x92", "\\x93", "\\x94", "\\x95", "\\x96", "\\x97", "\\x98", "\\x99", "\\x9a", "\\x9b", "\\x9c", "\\x9d", "\\x9e", "\\x9f", "\\xa0", "\\xa1", "\\xa2", "\\xa3", "\\xa4", "\\xa5", "\\xa6", "\\xa7", "\\xa8", "\\xa9", "\\xaa", "\\xab", "\\xac", "\\xad", "\\xae", "\\xaf", "\\xb0", "\\xb1", "\\xb2", "\\xb3", "\\xb4", "\\xb5", "\\xb6", "\\xb7", "\\xb8", "\\xb9", "\\xba", "\\xbb", "\\xbc", "\\xbd", "\\xbe", "\\xbf", "\\xc0", "\\xc1", "\\xc2", "\\xc3", "\\xc4", "\\xc5", "\\xc6", "\\xc7", "\\xc8", "\\xc9", "\\xca", "\\xcb", "\\xcc", "\\xcd", "\\xce", "\\xcf", "\\xd0", "\\xd1", "\\xd2", "\\xd3", "\\xd4", "\\xd5", "\\xd6", "\\xd7", "\\xd8", "\\xd9", "\\xda", "\\xdb", "\\xdc", "\\xdd", "\\xde", "\\xdf", "\\xe0", "\\xe1", "\\xe2", "\\xe3", "\\xe4", "\\xe5", "\\xe6", "\\xe7", "\\xe8", "\\xe9", "\\xea", "\\xeb", "\\xec", "\\xed", "\\xee", "\\xef", "\\xf0", "\\xf1", "\\xf2", "\\xf3", "\\xf4", "\\xf5", "\\xf6", "\\xf7", "\\xf8", "\\xf9", "\\xfa", "\\xfb", "\\xfc", "\\xfd", "\\xfe", "\\xff"};
#define hex_strs_size 4

static int is_hex_char(uint8_t c){
	return (c > 0x2f && c < 0x3a)
	|| (c > 0x40 && c < 0x47)
	|| (c > 0x60 && c < 0x67);
}

static int is_pritable(uint8_t c, int use_extended_ascii){
	return (c > 0x1f && c < 0x7e && c != '\\' && c != '"')
	|| (use_extended_ascii && c > 0xa0);
}

static int is_extended(uint8_t c){return c > 128;}

//returns 0 on success.
int b_to_c_str(uint64_t binary_size, uint8_t * binary, uint64_t * out_str_size, char * out_str, int use_ascii, int use_extended_ascii){
	int64_t str_size = 0;
	int was_hex_literal = 0;

	for(int64_t i = 0; i < binary_size; ++i){
		uint8_t byte = binary[i];

		int use_byte = is_pritable(byte, use_extended_ascii);
		use_byte &= !(was_hex_literal && is_hex_char(byte));

		if(use_byte && use_ascii){
			if(out_str){
				if((1 + str_size) >= *out_str_size) return 1; 
				out_str[str_size] = byte;
			}
			++str_size;
			was_hex_literal = 0;
		}else{
			size_t replacement_str_size = hex_strs_size;
			c_str replacement_str = hex_strs[byte];
			was_hex_literal = 1;

			if(byte == '\\'){ replacement_str_size = sizeof("\\\\")-1; replacement_str = "\\\\"; was_hex_literal = 0;}
			if(byte == '"'){ replacement_str_size = sizeof("\\\"")-1; replacement_str = "\\\""; was_hex_literal = 0;}

			if(out_str){
				if((replacement_str_size + str_size) >= *out_str_size) return 1; 
				memcpy(out_str+str_size, replacement_str, replacement_str_size);
			}
			str_size += replacement_str_size;
		}
	}

	if(out_str){
		out_str[str_size] = 0;
	}else{
		*out_str_size = str_size+1;
	}
	return 0;
}

struct{
	c_str file_name;
	int use_ascii, use_extended_ascii;
} argument_data;

int main(int argv, char ** argc){
	memset(&argument_data, 0, sizeof(argument_data));
	uint8_t in_buffer[1<<9] = {0};
	char out_buffer[sizeof(in_buffer) * hex_strs_size] = {0};

	FILE *input = stdin;

	for(int i = 1; i < argv; ++i){
		if(strcmp(argc[i], "-f") == 0){
			++i;
			input = fopen(argc[i], "r");
		}

		if(strcmp(argc[i], "-a") == 0) argument_data.use_ascii = 1;
		if(strcmp(argc[i], "-e") == 0) argument_data.use_extended_ascii = 1;
	}

	uint64_t bytes_read;
	uint64_t out_string_size = 0;
	printf("char const * data = ");
	do{
		bytes_read= fread(in_buffer, 1, sizeof(in_buffer), input);

		uint64_t out_buffer_size = 0;
		b_to_c_str(bytes_read, in_buffer, &out_buffer_size, 0, argument_data.use_ascii, argument_data.use_extended_ascii);
		if(out_buffer_size > sizeof(out_buffer)){
			fprintf(stderr, "Error out buffer requers: %lu and has %lu", out_buffer_size, sizeof(out_buffer));
			return 1;
		}
		b_to_c_str(bytes_read, in_buffer, &out_buffer_size, out_buffer, argument_data.use_ascii, argument_data.use_extended_ascii);
		out_string_size += out_buffer_size-1;
		if(out_buffer_size-1 > 0) printf("\"%s\"\n", out_buffer);
	}while(bytes_read);

	printf(";\nunsigned long data_size = %lu;", out_string_size);
}
