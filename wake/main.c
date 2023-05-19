#include <stdio.h>
#include "monty.h"  

int main(int argc, char *argv[])
{
	/**
	 * Get the file path from thr command line arguments
	 */
	char *file_path = argv[1];
    /* Check if the correct number of arguments is provided */
    if (argc != 2) {
        fprintf(stderr, "USAGE: monty file\n");
        return EXIT_FAILURE;
    }

    /* Call a function to read the file, parse the instructions, and execute the opcodes */
    process_file(file_path);

    return EXIT_SUCCESS;
}

