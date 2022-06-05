#include "menu.h"

void menu(int grille[LIG][COL]){ 
    // print menu and start game if  1 is pressed
    int choice;
    printf("\n\n                            ██╗    ██╗███████╗██╗      ██████╗ ██████╗ ███╗   ███╗███████╗\n                            ██║    ██║██╔════╝██║     ██╔════╝██╔═══██╗████╗ ████║██╔════╝\n                            ██║ █╗ ██║█████╗  ██║     ██║     ██║   ██║██╔████╔██║█████╗  \n                            ██║███╗██║██╔══╝  ██║     ██║     ██║   ██║██║╚██╔╝██║██╔══╝  \n                            ╚███╔███╔╝███████╗███████╗╚██████╗╚██████╔╝██║ ╚═╝ ██║███████╗\n                             ╚══╝╚══╝ ╚══════╝╚══════╝ ╚═════╝ ╚═════╝ ╚═╝     ╚═╝╚══════╝\n\n\n                                            ████████╗ ██████╗ \n                               press 1      ╚══██╔══╝██╔═══██╗      Play\n                                               ██║   ██║   ██║\n                               press 2         ██║   ██║   ██║      Exit\n                                               ██║   ╚██████╔╝\n                                               ╚═╝    ╚═════╝ \n\n\n                     ▄▄▄▄▄▄▄▄▄▄▄  ▄         ▄      \n                    ▐░░░░░░░░░░░▌▐░▌       ▐░▌     \n                    ▐░█▀▀▀▀▀▀▀▀▀ ▐░▌       ▐░▌      \n                    ▐░▌          ▐░▌       ▐░▌   \x1b[0m  \x1b[0m\x1b[48;5;196m         \x1b[0m\x1b[48;5;208m        \x1b[0m\x1b[48;5;220m         \x1b[0m\x1b[48;5;118m       \x1b[0m \x1b[48;5;26m   \x1b[0m\x1b[48;5;135m        \x1b[0m\n                    ▐░▌          ▐░█▄▄▄▄▄▄▄█░▌     ╚══██╔══╝██╔════╝╚══██╔══╝██╔══██╗██║██╔════╝\n                    ▐░▌          ▐░░░░░░░░░░░▌        ██║   █████╗     ██║   ██████╔╝██║███████╗\n                    ▐░▌           ▀▀▀▀█░█▀▀▀▀         ██║   ██╔══╝     ██║   ██╔══██╗██║╚════██║\n                    ▐░▌               ▐░▌             ██║   ███████╗   ██║   ██║  ██║██║███████║\n                    ▐░█▄▄▄▄▄▄▄▄▄      ▐░▌             ╚═╝   ╚══════╝   ╚═╝   ╚═╝  ╚═╝╚═╝╚══════╝\n                    ▐░░░░░░░░░░░▌     ▐░▌          \n                     ▀▀▀▀▀▀▀▀▀▀▀       ▀            \n\n");
    do{
    scanf("%d",&choice);
    }while((choice != 1) && (choice != 2) );

    if(choice == 1)playTetris(grille);
    else{
        exit(0);
    }
}