#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define COL 12
#define LIG 20

void insertShape(int grille[LIG][COL],int col,int shape,int rota);
void drawGameGrid(int grille[LIG][COL],int shape);
void printShapePos(int shape);
