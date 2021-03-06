#include "../include/personal_string.h"

/*
 * Removes whitespace characters from the beginning of s
 */
void rm_right_space(char *s) {
	int shift_amount = 0, s_length = str_len(s);  // Contains the amount of left shifts we need to do

	for (int i = s_length - 1; i >= 0 && *(s + i) == ' '; i--)  // Counts all of the white spaces starting from the end of the c string
		shift_amount++;

	*(s + s_length - shift_amount) = '\0'; // Apply null terminator on top of the first white space found at the end
}