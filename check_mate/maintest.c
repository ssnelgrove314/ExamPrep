#include "check_mate.h"
#include <stdio.h>

int	main(void)
{
	char*	board[3];
	int		boardlen;

	board[0] = "K..";
	board[1] = ".P.";
	board[2] = "...";
	boardlen = 3;

//	printf("Checking is_pos_legit\n");
//	printf("%d\n", is_pos_legit(0,0,boardlen));
//	printf("%d\n", is_pos_legit(-1, -1, boardlen));
//	printf("%d\n", is_pos_legit(0,12,boardlen));
//	printf("%d\n", is_pos_legit(1,1,boardlen));

//	printf("\nChecking isempty\n");
//	printf("%d\n", isempty('.'));
//	printf("%d\n", isempty('K'));
//	printf("%d\n", isempty('Q'));
//	printf("%d\n", isempty('R'));
//	printf("%d\n", isempty('a'));

//printf("\nChecking pawnmove\n");
//printf("%d\n", pawnmove(board, 1, 1, boardlen));
//printf("%d\n", pawnmove(board, 3, 3, boardlen));

//printf("\nChecking ischeck\n");
//printf("%d\n", ischeck(board, 2, 0, -1, 0, boardlen));
//printf("%d\n", ischeck(board, 2, 0, 1, 0, boardlen));
//printf("%d\n", ischeck(board, 0, 2, 0, -1, boardlen));
//printf("%d\n", ischeck(board, 0, 2, 0, 1, boardlen));
//printf("%d\n", ischeck(board, 1, 1, -1, -1, boardlen));
//printf("%d\n", ischeck(board, 1, 1, 1, 1, boardlen));

//printf("Checking bishopmove\n");
//printf("%d\n", bishopmove(board, 1,1, boardlen));

//printf("Checking Rook\n");
//printf("%d\n", bishopmove(board, 1,1, boardlen));

//printf("Checking Queen\n");
//printf("%d\n", queenmove(board, 1,1, boardlen));


return (0);
}
