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

    /* Can use a switch statement if we are performing
    checks on one variable*/
    switch(card_name[0]){
    case 'K':
    case 'Q':
    case 'J':
        val = 10;
        break;
    case 'A':
        val = 11;
        break;
    default:
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