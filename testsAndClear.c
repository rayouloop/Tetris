#include "testsAndClear.h"

int testGround(int grille[LIG][COL]){               //compte le nombre de lignes à clear      
    int count = 0,clear=0;               
    for(int j=4;j<LIG-1;j++){ 
        for(int i=1;i<COL-1;i++)if(grille[j][i] == 1 )count++; 
        clear = j;
        if(count == 10)return clear;
        count = 0;
    }    
    return 0;
}
void clearCompleteRow(int grille[LIG][COL]){ 
        for(int i = testGround(grille); i>0;i--){
            for(int j = 1;j<COL-1;j++){
                grille[i][j] = grille[i-1][j];
            }
        }
    
}
int testSky(int grille[LIG][COL]){      // checks if the shape has reached top bound                              
     for(int i=0;i<4;i++){        
        for(int j=1;j<COL-2;j++){
            if(grille[i][j] != 0)return 1;
            
        }
    }
}
int testBound(int grille[LIG][COL]){// checks if the shape is out of bounds (left/right)
    for(int i =4;i<19;i++){                 
        if(grille[i][0] == 1)return 0;
        else if(grille[i][11] == 1)return 0;
        
    }
    return 1;
}



