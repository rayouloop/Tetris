#include "Tetris.h"

void playTetris(int grille[LIG][COL]){
    int col,rotation,shape=0,score=0;
	do{
        
        for(int i = 0; i<4;i++){
            if(testGround(grille) != 0){
                clearCompleteRow(grille);
                score = score + 100;                   //score calculation
            }
        }
        shape = randomShape();
        printf("\n\n        \x1b[48;5;26mCY\x1b[0m\x1b[38;5;196mT\x1b[38;5;208mE\x1b[38;5;220mT\x1b[38;5;118mR\x1b[38;5;51mI\x1b[38;5;93mS\x1b[0m"); //print CYtetris
        printf("\n\nScore : \x1b[38;5;196m%d\x1b[0m\n\n",score);

            drawGameGrid(grille,shape);
            printShapePos(shape);

        do{
            printf("Choose a Pos (1,2,3,4): ");         // ask Rotation 
            scanf("%d",&rotation);
        } while(rotation < 1 || rotation > 4);
        
        do{
            printf("\nChoose a column (1 to 10): ");    // ask Collumn 
            scanf("%d",&col);
        } while(rotation < 1 || rotation> 10);

        insertShape(grille,col,shape,rotation);
        
        if (testBound(grille) == 0)printf("\nOops ! You are out of bounds! Game Over ! Thanks for playing \x1b[48;5;26mCY\x1b[0m\x1b[38;5;196mT\x1b[38;5;208mE\x1b[38;5;220mT\x1b[38;5;118mR\x1b[38;5;51mI\x1b[38;5;93mS\x1b[0m ! Your score was %d\n\n",score); // Out of bounds left or right 
    }while( (testSky(grille) ==0) && (testBound(grille) == 1)); 

    if(testSky(grille) == 1)printf("\nSeems that you reached the sky ! Game Over ! Thanks for playing \x1b[48;5;26mCY\x1b[0m\x1b[38;5;196mT\x1b[38;5;208mE\x1b[38;5;220mT\x1b[38;5;118mR\x1b[38;5;51mI\x1b[38;5;93mS\x1b[0m ! Your score was %d\n\n",score); // Reached top bound 
}


    