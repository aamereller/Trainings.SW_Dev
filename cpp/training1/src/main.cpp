/* This software is published and licensed for use under
 * the terms of the GNU General Public License (GPL),
 * either version 3 of the license or (at your option)
 * any later version.
 * See the file LICENSE for more details.
 */

//This include is required for basic input/output.
#include <iostream>
//Include for standardized types.
#include <cstdint>

void print_types()
{
    std::cout<<"char: "<<sizeof(char)<<" bytes"<<std::endl;
    std::cout<<"short: "<<sizeof(short)<<" bytes"<<std::endl;
    std::cout<<"int: "<<sizeof(int)<<" bytes"<<std::endl;
    std::cout<<"long: "<<sizeof(long)<<" bytes"<<std::endl;
}

/* This function is the program entry point.
 * It must return an int as exit code takes 2 parameters.
 * The first (argc) is the number of command-line arguments
 * given.
 * The second (argv) is a pointer to the command-line
 * arguments array.
 * In case it takes 
 */
int main(int argc, char **argv)
{
    //Print to the STandard Output
    //with a new-line character at the end.
    std::cout<<"Hello World!"<<std::endl;
    print_types();
    //Return the success return code (normally 0).
    return EXIT_SUCCESS;
}
