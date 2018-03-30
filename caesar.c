#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Uses caesar's cipher to convert plaintext to ciphertext

int main(int argc, string argv[]) {

    // Check inputs and outputs

    // There must be 2 command line inputs
    if(argc==2) {

    // The key is an integer, so convert the string to an integer
        int k = atoi(argv[1]);

    // Ask the user for plaintext
        string ptext = get_string("plaintext: ");

    // For every character in the plaintext, shift the character by the number in the key
        for(int i = 0; i < strlen(ptext); i++) {

    // Convert the ith character of the plaintext to an ASCII number
            int numValue = ptext[i];

    // Check if the ith character is alphabetical
            if(isalpha(ptext[i])) {

    // Take the modulo in case the shiftValue is larger than the alphabet
                    int shiftValue = (numValue + k%26);

    // Add the key to the plain character to get the cipher character for the ith character


    // Preserve case

                    if(isupper(ptext[i])) {
                        if (shiftValue > 90) {
                            shiftValue -= 26;
                        }
                    } else if(islower(ptext[i])) {
                        if (shiftValue > 122) {
                            shiftValue -= 26;
                        }
                    }

            printf("%c", shiftValue);

            }
        }

    }
    printf("\n");
}