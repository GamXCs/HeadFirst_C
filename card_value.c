#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Strings end in a null character (\O) so 
    we have to add an extra index to account for it.
    card_name only takes 2 inputs*/
    char card_name[3];
    puts("Enter the card name: ");
    scanf("%2s", card_name);

    int val = 0;
    int count = 0;

    if (card_name[0] == 'K') {
        val = 10;
        count -= 1;
    } else if (card_name[0] == 'Q') {
        val = 10;
        count -= 1;
    } else if (card_name[0] == 'J') {
        val = 10;
        count -= 1;
    } else if (card_name[0] == 'A') {
        val = 11;
         count -= 1;

    } else {
        val = atoi(card_name);
    }
    if (val >= 3 && val <= 6){
       puts("Count has gone up");
    } else if (val == 10) {
        puts("Count has gone down");
    }

    printf("The card value is: %i\n", val);
    return 0;
}