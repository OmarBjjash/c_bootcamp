#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


int main () {
    char user_input[15];
    bool has_more_than_8_char = false;
    bool has_upper_case = false;
    bool has_lower_case = false;
    bool has_numbers = false;
    bool has_symbols = false;
    

    printf("Enter Your Password: ");
    fgets(user_input, sizeof(user_input), stdin);

    for (int i = 0; user_input[i] != '\0'; i++){
        unsigned char character = (unsigned char)user_input[i];

        if(strlen(user_input) >= 8){
            has_more_than_8_char = true;
        }

        if(isupper(character)){
            has_upper_case = true;
        }
        
        if(islower(character)){
            has_lower_case = true;
        }
        
        if(isdigit(character)){
            has_numbers = true;
        }
        
        if(ispunct(character)){
            has_symbols = true;
        }
    }
    
    if(has_lower_case && has_more_than_8_char && has_numbers && has_symbols && has_upper_case){
        printf("Youe Password is strong !\n");
    }
    else{
        printf("Your Password Doesn't meat the application password Plicy.\n");
    }

    return 0;
}