#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int simpleParse(const char *exp);

int main() {
    char exp1[] = "1 + 1";
	// Expected Value = 2
    char exp2[] = "3 + 7 - 4 * 1";
	// Expected Value = 6
    char exp3[] = "9 * 13 / 2 + 18 * 110 - 812 \% 97 + 3";
	// Expected Value = 2005
    
}

