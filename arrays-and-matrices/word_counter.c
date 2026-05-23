#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    int i, n, words = 0, consonants = 0, vowels = 0, spaces = 0;

    printf("Enter the expected size of your sentence: ");
    scanf("%d", &n);
    getchar(); 

    // Allocate n + 1 memory elements to safely hold the null terminator '\0'
    char *sentence = (char*)malloc((n + 1) * sizeof(char));

    printf("\nNow enter the sentence: ");
    scanf("%[^\n]", sentence);
    getchar();

    int inWord = 0; 

    for(i = 0; sentence[i] != '\0'; i++) {
        char ch = tolower(sentence[i]);

        if(ch >= 'a' && ch <= 'z') {
            if(!inWord) { 
                words++; 
                inWord = 1; 
            } 
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
                vowels++;
            else 
                consonants++;
        } 
        else if(ch == ' ') {
            spaces++; // Fixed: This now accurately counts the spaces
            inWord = 0; 
        }
    }

    printf("\nThe sentence provided by you contains\n%d words\n%d vowels\n%d consonants\n%d spaces\n", words, vowels, consonants, spaces);
    
    // Good practice: Always clear dynamic memory before exiting
    free(sentence); 

    getchar();
    return 0;
}