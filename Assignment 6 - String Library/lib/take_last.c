#include "../include/personal_string.h"

/*
 * Modifies s so that it consists of only its last n characters. If n
 * is ≥ the length of s, the original string is unmodified. For example
 * if we call take_last("Brubeck" 5), when the function finishes,
 * the original string becomes "ubeck"
 */
void take_last(char *s, int n) {
	// Loop n times, placing the last n chars at the beginning of the c string
	for (int i = 0, s_length = str_len(s); i < n; i++)
		s[i] = s[s_length - n + i];

	s[n] = '\0'; // Apply null terminator at index n
}