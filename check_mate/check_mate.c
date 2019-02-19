#include "check_mate.h"
//function that does (x, y) pos and (dx, dy) direction of movement.

//movements:
//pawn = (-1, +1), (+1, +1);

//bishop = (-x, -y), (-x, y), (x, -y), (-x, -y);
//rook = (+x, y), (-x, y), (x, +y), (x, -y);
//queen = bishop + rook
int ispawn(char **board, int x, int y)
{
	return (board[x][y] == 'P');
}

int ischeck(char **board,int x, int y, int dx, int dy,int len)
{
	x += dx;
	y += dy;

	while(is_pos_legit(x, y, len) && (isempty(board[x][y])))
	{
		x += dx;
		y += dy;
	}
	if ( is_pos_legit(x, y, len) && (board[x][y] == 'K'))
		return(1);
	return(0);
}

int	isempty(char c)
{
	char *pieces;
	pieces = "PQRBK";

	while (*pieces)
	{
		if (c == *pieces)
			return (0);
		pieces++;
	}
	return (1);
}

//checks pawn movements for King
int	pawnmove(char **board, int x, int y, int len)
{
	int x0;
	int y0;

	x0=x-1;
	y0=y-1;
	if (is_pos_legit(x0, y0, len) && (board[x0][y0] == 'K'))
		return (1);

	x0=x+1;
	y0=y-1;
	if (is_pos_legit(x0, y0, len) && (board[x0][y0] == 'K'))
		return (1);
	
	return (0);
}

//checks bishop movements for King, stops if it encounters a piece
int	bishopmove(char **board, int x, int y, int len)
{
	if (ischeck(board, x, y, 1, 1, len))
		return (1);
	if (ischeck(board, x, y, -1, -1, len))
		return (1);
	if (ischeck(board, x, y, 1, -1, len))
		return (1);
	if (ischeck(board, x, y, 1, -1, len))
		return (1);

	return (0);
}

int	is_pos_legit(int x, int y, int len)
{
	len--;
	if (x < 0 || y < 0)
		return (0);
	if (x > len || y > len)
		return (0);
	
	return (1);
}

//checks rook movements for King, stops if it encounters a piece
int	rookmove(char **board, int x, int y, int len)
{
	if (ischeck(board, x, y, 0, 1, len))
		return (1);
	if (ischeck(board, x, y, 0, -1, len))
		return (1);
	if (ischeck(board, x, y, 1, 0, len))
		return (1);
	if (ischeck(board, x, y, -1, 0, len))
		return (1);
	return (0);
}

//checks queen movements (Calls on bishop and rook)
int	queenmove(char **board, int x, int y, int len)
{
	if (rookmove(board, x, y, len))
		return (1);
	if (bishopmove(board, x, y, len))
		return (1);
	return (0);
}

//checks what piece it is and then checks the piece.
int	piececheck(char **board, int x, int y, int len)
{
	char piece = board[x][y];

	if (piece == 'P')
		return pawnmove(board, x, y, len);
	if (piece == 'R')
		return rookmove(board, x, y, len);
	if (piece == 'B')
		return bishopmove(board, x, y, len);
	if (piece == 'Q')
		return queenmove(board, x, y, len);
	else
		return (0);
}

//moves across the board, checking the movements of pieces it finds.
int	boardmovement(char **board, int boardsize)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	 
	while (y < boardsize)
	{
		while (x < boardsize)
		{
			if (!isempty(board[x][y]) && board[x][y] != 'K')
				if (piececheck(board, x, y, boardsize))
					return (1);
			x++;
		}
		x = 0;
		y++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (boardmovement(argv + 1, argc - 1))
		write(1, "Success\n", 8); 
	else
		write(1, "Fail\n", 5);
	return (0);

}
