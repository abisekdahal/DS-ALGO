#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define N 8


 display(int board[N][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			
			printf("%d ",board[i][j]);
		}
		printf("\n");
	}
}

bool  attack_board_check(int board[N][N],int row, int col)
 {
	int i, j;
	for(i=0;i<col;i++)
	 	if(board[row][i])
	 	  return  false;
	 	  
	
	 for(i=row,j=col;i>=0 && j>=0;i--,j--)
	 	  if(board[i][j])
	 	  	return false; 
		
	for (i=row, j=col; j>=0 && i<N; i++, j--) 
	    if (board[i][j])
	 return false;
		
	 
  
return true ;

}
bool  Queen_in_board(int board[N][N], int col){
 	
	 if (col>=N)
 		return true;
	 
	 for(int i=0;i<N;i++){
	 
	 if (attack_board_check(board,i,col))
	 {
	 	
	 	
	 	board[i][col]=1;
	 	
	 	if(Queen_in_board(board,col+1))
	 	 return true;
	 	 
	 	 board[i][col]=0;
	 }
	 }
	 
	 return false;
	 
 	
 }
 
bool queen_pos_board(){
	
	int board[8][8]={{0, 0, 0, 0, 0, 0, 0, 0}, 
        {0, 0, 0, 0,0, 0, 0, 0}, 
        {0, 0, 0, 0,0, 0, 0, 0}, 
        {0, 0, 0, 0,0, 0, 0, 0},
        {0, 0, 0, 0,0, 0, 0, 0},
        {0, 0, 0, 0,0, 0, 0, 0},
        {0, 0, 0, 0,0, 0, 0, 0},
        {0, 0, 0, 0,0, 0, 0, 0} };
	
	if(Queen_in_board(board,0)==false)
	{
    
	printf("Solution Not available ");
	return false; 		
	
	}
	display(board);
	return true;
	
}
 
int main(){
	
queen_pos_board();	
	
	
}
