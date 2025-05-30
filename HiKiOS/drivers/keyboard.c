#include "keyboard.h"
#include "ports.h"

char scancode_to_ascii_table[128] = {
    0, 27, '1','2','3','4','5','6','7','8','9','0','-','=','\b',
    '\t','q','w','e','r','t','y','u','i','o','p','[',']','\n', 0,
    'a','s','d','f','g','h','j','k','l',';','\'','`', 0, '\\',
    'z','x','c','v','b','n','m',',','.','/', 0, '*', 0, ' ', 0,
    // Add more keys if needed
};

char scancode_to_ascii(char scancode) {
    return scancode_to_ascii_table[(int)scancode];
}
