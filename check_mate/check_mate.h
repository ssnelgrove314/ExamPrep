#ifndef CHECK_MATE_H
# define CHECK_MATE_H

#include <unistd.h>
#include <stdlib.h>


int ischeck(char **board,int x, int y, int dx, int dy,int len);
int	ispawn(char **board, int x, int y);
int	isempty(char c);
int	pawnmove(char **board, int x, int y, int len);
int	bishopmove(char **board, int x, int y, int len);
int	is_pos_legit(int x, int y, int len);
int	rookmove(char **board, int x, int y, int len);
int	queenmove(char **board, int x, int y, int len);
int	piececheck(char **board, int x, int y, int len);
int	boardmovement(char **board, int argc);
#endif
