//
// Created by Greg on 5/25/2023.
//

#ifndef CONFIDENTLYCRYPTOCODE_COMMANDLINE_INTERFACE_H
#define CONFIDENTLYCRYPTOCODE_COMMANDLINE_INTERFACE_H
    /**
     * initializes the main loop and returns the current logged in user
     * @return TODO: returns int for now
     */
    int init();
    /**
     * main loop
     * @return 0 on success, 1 on error
     */
    int run();
    /**
     * cleans up any outstanding allocations outside of run
     * @return 0 on success, 1 on error
     */
    int cleanup();
#endif //CONFIDENTLYCRYPTOCODE_COMMANDLINE_INTERFACE_H
