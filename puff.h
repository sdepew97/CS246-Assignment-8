#define NUMCHARS 256
#include <stdlib.h>
#include <stdio.h>
#include "huff_tree_node.h"

/*
Name: 
Resources: 
*/

//get the smallest leaf from the array and need to decrement size of array outside!! otherwise function malfunctions
huff_tree_node* get_smallest(huff_tree_node *leaves[NUMCHARS], int *array_size); 

//function to get the bit from the current character gotten from the file
int get_bit(int *bits_read, int *current); 

//Frees all the memory used in this part of the program
void free_memory(huff_tree_node *root);  