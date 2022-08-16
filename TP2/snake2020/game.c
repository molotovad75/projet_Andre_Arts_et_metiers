#include <stdio.h>
#include <stdlib.h>
#include "grid.h"

int main(){
	char grid[8][7] = {
		"bwrwbw",
		"wrwbwr",
		"bwrwbw",
		"wrwbwr",
		"bwrwbw",
		"wrwbwr",
		"bwrwbw",
		"wrwbwr"
    	};

	
	//debug(grid);

	//printf("%3f \n", compute_size(63,16)); /*(colonnes , lignes)*/

	draw_grid();
	return 0;
}
