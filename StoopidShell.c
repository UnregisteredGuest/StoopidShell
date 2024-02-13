#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	system("clear");
	puts("Welcome to StoopidShell!");
	puts("You can do anything you want in StoopidShell.");
	puts("(Just don't enter multiple strings...)");
        while (1) {
                char user_input[32];
                printf("StoopidShell: ");
                if(scanf("%s",user_input) == 1) {;
                	if (strcmp(user_input,"cat") == 0) {
				puts(" /\\_/\\ ");
				puts("( o.o ) ");
				puts(" > ^ < ");
			} else if (strcmp(user_input,"help") == 0) {
				puts("Available commands: help, cat");
			} else {
				puts(" ");
			}
		} else {
			puts("Nothing was entered...");
		}
        }
}
