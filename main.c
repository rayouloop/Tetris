#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "testsAndClear.h"
#include "shapes.h"
#include "Tetris.h"
#include "aleat.h"
#include "menu.h"



int main(){
	int grille[LIG][COL];				
	for(int i =0;i<LIG;i++){		
		for(int j =0;j<COL;j++){		// initiate GameGrid
			grille[i][j] = 0;			
		}
	}
	for(int j=0;j<COL;j++){	
		grille[LIG-1][j] = 1;			// Full last line
	}
	menu(grille);						// Lauches Menu
    return 0;
}

