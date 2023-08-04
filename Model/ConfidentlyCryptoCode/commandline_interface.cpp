//
// Created by Greg on 5/25/2023.
//
#include <iostream>
#include <string>
#include "commandline_interface.h"

using namespace std;

int run() {
    printf("Welcome to ConfidentlyCrypto\n");
    char u_input;
    bool running = true;

    while(running) {
        printf("> ");
        cin >> u_input;
        switch (u_input){
            case 'm':
            case 'M':
                printf("Manual Trading\n");
                break;
            case 'a':
            case 'A':
                printf("Auto Trading\n");
                break;
            case 'p':
            case 'P':
                printf("My Portfolio:\n");
                break;
            case 'h':
            case 'H':
                printf("Help Menu:\n");
                break;
            case 'q':
            case 'Q':
                printf("Thanks for using Confidently Crypto\n");
                // TODO run cleanup and log out of sql session
                running = false;
                break;
            default:
                printf("Invalid Input: Press \'H\' to view the help menu\n");
        }
    }
    return 0;
}
