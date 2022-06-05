#include "shapes.h"

int shapes[7][4][4][4] = {
		{
		   {{0,0,0,0},	
			{0,0,0,0},
			{0,1,0,0},
			{1,1,1,0}},// rota initiale
		
		   {{0,0,0,0},
			{1,0,0,0},
			{1,1,0,0},
			{1,0,0,0}},//rota 1
		
		   {{0,0,0,0},
			{0,0,0,0},
			{1,1,1,0},
			{0,1,0,0}},//rota 2
		
		   {{0,0,0,0},
			{0,1,0,0},
			{1,1,0,0},
			{0,1,0,0}}//rota 3
		}, //piece_T;
	
		{
		   {{0,0,0,0},
			{1,0,0,0},
			{1,0,0,0},
			{1,1,0,0}},// rota initiale
		
		   {{0,0,0,0},
            {0,0,0,0},
			{1,1,1,0},
			{1,0,0,0}},//rota 1
		
		   {{0,0,0,0},
			{1,1,0,0},
			{0,1,0,0},
			{0,1,0,0}},//rota 2
		
		   {{0,0,0,0},
			{0,0,0,0},
			{0,0,1,0},
			{1,1,1,0}}//rota 3
		},//piece_Ld;
	
	
		{
		   {{0,0,0,0},
			{0,1,0,0},
			{0,1,0,0},
			{1,1,0,0}},// rota initiale
		
		   {{0,0,0,0},
			{0,0,0,0},
			{1,0,0,0},
			{1,1,1,0}},//rota 1
		
		   {{0,0,0,0},
			{1,1,0,0},
			{1,0,0,0},
			{1,0,0,0}},//rota 2
		
		   {{0,0,0,0},
            {0,0,0,0},
			{1,1,1,0},
			{1,0,0,0}}//rota 3
		},//piece_Lg;
	
	
		{
		   {{0,0,0,0},	
			{0,0,0,0},
			{0,1,1,0},
			{1,1,0,0}},// rota initiale
		
		   {{0,0,0,0},	
			{1,0,0,0},
			{1,1,0,0},
			{0,1,0,0}},//rota 1
			
		   {{0,0,0,0},	
			{0,0,0,0},
			{0,1,1,0},
			{1,1,0,0}},//rota 2
		
		   {{0,0,0,0},	
			{1,0,0,0},
			{1,1,0,0},
			{0,1,0,0}}//rota 3
		},//piece_S;
	
	
		{
		   {{0,0,0,0},
			{0,0,0,0},
			{1,1,0,0},
			{0,1,1,0}},// rota initiale
		
		   {{0,0,0,0},
			{0,1,0,0},
			{1,1,0,0},
			{1,0,0,0}},// rota 1
		
		   {{0,0,0,0},
			{0,0,0,0},
			{1,1,0,0},
			{0,1,1,0}},// rota 2
		
		   {{0,0,0,0},
			{0,1,0,0},
			{1,1,0,0},
			{1,0,0,0}}// rota 3

		},//piece_Z;
 	
 		{
	 	   {{0,0,0,0},
			{0,0,0,0},
			{1,1,0,0},
			{1,1,0,0}},// rota initiale
		
		   {{0,0,0,0},
			{0,0,0,0},
			{1,1,0,0},
			{1,1,0,0}},//rota 1
		
		   {{0,0,0,0},
			{0,0,0,0},
			{1,1,0,0},
			{1,1,0,0}},//rota 2
		
		   {{0,0,0,0},
			{0,0,0,0},
			{1,1,0,0},
			{1,1,0,0}}//rota 3
		
		},//piece_Carre;
	
	
		{
		   {{1,0,0,0},
			{1,0,0,0},
			{1,0,0,0},
			{1,0,0,0}},// rota initiale
	
		   {{1,0,0,0},
			{1,0,0,0},
			{1,0,0,0},
			{1,0,0,0}},//rota 1
		
		   {{0,0,0,0},
			{0,0,0,0},                  //rota 1 & 3 working corrrectly but initial & 2 bugging
			{0,0,0,0},
			{1,1,1,1}},//rota 2
		
		   {{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{1,1,1,1}}//rota 3
		}//piece_I
};

void insertShape(int grille[LIG][COL],int col,int shape,int rota){ 											
    int array = 0, test=0 , row =0;
        for(int i = 4;i<LIG;i++){
            for(int k =4;k>0;k--){
                for(int j = 0;j<4;j++){
                    if((grille[i][col+j]) == 1 && (shapes[shape][rota-1][k][j]) == 1 && (test == 0)){
                        array = i-k+3;
                        test = 1;
                    }
                }
            }
        }   

    for(int i = 0;i<4;i++){  
        for(int j=0;j<4;j++){
            if(grille[(array-4)+i][col+j] == 0)grille[(array-4)+i][col+j] = shapes[shape][rota-1][i][j];
        }
    }
}

char write(int w){ 
	if(w == 1){
		return '0';
	}
	else if(w == 0){
		return ' ';
	}	
}


void drawGameGrid(int grille[LIG][COL],int shape){
	int w, character;

	for(int i = 1; i<11; i++){					  //numbering of the column	
		printf("\x1b[48;5;17m %d\x1b[0m",i);
	}
		printf("\x1b[48;5;17m \x1b[0m\n");	
	for(int i = 4; i<LIG-1;i++){	
		printf("\x1b[48;5;17m \x1b[0m");          				//left bound of the grid
			for(int j = 1; j<COL-1;j++){                        //print of the game grid
				character = grille[i][j];              
                printf("\x1b[48;5;18m%c\x1b[0m\x1b[48;5;18m \x1b[0m",write(character));
                if (j==COL-2){
                    printf("\x1b[48;5;17m \x1b[0m");            //right bound of the grid
                }
			}
		printf("\n");	
	}
	for(int i = 1; i<11; i++){					  //numbering of the column	
		printf("\x1b[48;5;17m %d\x1b[0m",i);	  //ground of the grid
	}
	printf("\x1b[48;5;17m \x1b[0m\n");
}

void printShapePos(int shape){
	int temp;
																	
	printf("\nPos 1        Pos 2        Pos 3        Pos 4\n");
	for(int i =0;i<4;i++){
		for(int j =0;j<4;j++){
			for(int k =0;k<4;k++){
				printf("\x1b[38;5;93m%c\x1b[0m",write(shapes[shape][j][i][k])); 
			}
		printf("         ");
		}
	printf("\n");
	}
	printf("\n");
}