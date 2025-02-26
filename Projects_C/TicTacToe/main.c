#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h> // For sleep function


char board[3][3] ={
{'1' ,'2', '3'},
{'4', '5', '6'},
{'7', '8', '9'}
};

void clearBoard (){
    for (int i = 0;i<11;i++){
        printf("\r\033[K");
        printf("\033[A");
    }
    
}


void drawBoard () {
    

    
    for (int i =0; i < 3; ++i){
        printf("   |   |   \n");
        for(int j = 0; j < 3; ++j){
            printf(" %c ", board[i][j]);
            if( j != 2) 
                printf("|");
        }
        if (i != 2) 
            printf("\n___|___|___\n");
        else
            printf("\n   |   |   \n");
        
    }
}


bool markBoard (int player, int move){
    
    //check if the arguments are valid
    if (player < 1 || player > 2) {
        printf("markBoard - Incorrect player passed in");
        return false;
    }
    if (move < 1 || move > 9) {
        printf("markBoard - Incorrect move passed in");
        return false;
    }
    
    int row = (move - 1) / 3;
    int col = (move - 1) % 3;
    
    if (board[row][col] == 'x' || board[row][col] == 'o'){
        printf("markboard - this space has already been used.");
        return false;
    }
    
    if (player == 1)
        board[row][col] = 'x';
    else
        board[row][col] = 'o';
    
    return true;
    
}

int checkWin (){

    
    for( int i = 0; i < 3; ++i ){
        if ( board[i][0] == board[i][1] && board[i][0] == board[i][2] ){
            if (board [i][0] == 'x')
                return 1;
            if (board [i][0] ==  'o')
                return 2;
        }
    }
    for(int j = 0; j < 3; ++j){
        if ( board[0][j] == board[1][j] && board[0][j] == board[2][j] ){
            if (board [0][j] == 'x')
                return 1;
            if (board [0][j] == 'o')
                return 2;
        }
    }
    
    if (board[0][0] == board[1][1] && board[0][0] == board [2][2]){
        if (board [0][0] == 'x')
                return 1;
        if (board [0][0] == 'o')
                return 2;
    }
    if (board[0][2] == board[1][1] && board[0][2] == board [2][0]){
        if (board [0][2] == 'x')
                return 1;
        if (board [0][2] == 'o')
                return 2;
    }
    
    
    return 0;
}
    
int main(int argc, char **argv)
{

    printf("TIC TAC TOE\n\n");
    printf("Player 1 (x) - Player 2 (y)\n\n");
    
    printf("instructions: enter value of coordinate (1 - 9) you would like to place your move in.\n\n");
    drawBoard();
    
    int playerTurn = 0;
    int playerInput = 0;
  

    while ( checkWin() == 0 && playerTurn < 10 ){
        int player = ++ playerTurn % 2 == 0  ? 2 : 1;
        printf("\nPLayer %d's turn: ", player);
        scanf("%d", &playerInput);
        while(!markBoard(player,playerInput)){
            printf("\r\033[K");
            printf("\033[A");
            printf("\r\033[K");
            printf("PLayer %d's turn: ", player);
            scanf("%d", &playerInput);
        }
        clearBoard();
        drawBoard();
       
        
        
    }
    int result = checkWin();
    if (result > 0)
        printf("\n\n Congrats Player %d, you have won!\n\n", result);
    else 
        printf("\n\n Goog game! The match was a draw!\n\n");

}
