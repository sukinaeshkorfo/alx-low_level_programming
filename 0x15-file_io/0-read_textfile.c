#include <stdio.h>

#include <stdlib.h>

#include "main.h"



/**
 *
 *  * read_textfile - that reads a text file and prints
 *
 *   * @filename: variable pointer
 *
 *    * @letters: size letters
 *
 *     * Description: Write a function that reads a text file and prints it
 *
 *      * to the POSIX standard output.
 *
 *       * Return: the actual number of letters it could read and print, 0 otherwise
 *
 *        */



ssize_t read_textfile(const char *filename, size_t letters)

{

		ssize_t o, r, w;

			char *buffer;



				if (filename == NULL)

							return (0);



					buffer= malloc(sizeof(char)*letters);

						if (buffer == NULL)

									return (0);



							



							o = open(filename, O_RDONLY);



								r = read(o, buffer, letters);



									w = write(STDOUT_FILENO, text, let);



										if (o == -1 || r ==-1 || w == -1 || w != r)

												{

															free(buffer);

																	return (0);

																		}



											

											free(buffer);

												close(file);



													return (w);

}
