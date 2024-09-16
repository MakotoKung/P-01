#include <stdio.h>
#define row 3 
#define col 3
int main(){

    char board[row][col] ;
    char space =' ';
    for(int x=0;x<row;x++)
    {

        for(int y=0;y<col;y++)
        {
           board[x][y]= space;  //filling the grids with a blank

            printf("%d.%d [%c]  ",x,y,board[x][y]);
        }
        printf("\n");
    }
    int test ; 
    printf("ENter ");
    scanf("%d",&test);
    if (test == 1){
        board[1][0] = 'X';
    }
    system("cls");
    for(int x=0;x<row;x++){
        
        for(int y=0;y<col;y++){
            printf("%d.%d [%c]  ",x,y,board[x][y]);
        }
        printf("\n");
    }

}