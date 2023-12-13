#include<stdio.h>
#include<windows.h>

char box[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int checkwin();
void board();
int main()
{
    int player = 1, i = -1, choice;
    char mark;
    while (i ==  - 1)
    {
        system("cls");
        board();

        if(player%2==1)
            player = 1;
        else
            player = 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        if(player ==1 )
            mark = 'X';
        else
            mark = 'O';

        if (choice == 1 && box[1] == '1')
            box[1] = mark;

        else if (choice == 2 && box[2] == '2')
            box[2] = mark;

        else if (choice == 3 && box[3] == '3')
            box[3] = mark;

        else if (choice == 4 && box[4] == '4')
            box[4] = mark;

        else if (choice == 5 && box[5] == '5')
            box[5] = mark;

        else if (choice == 6 && box[6] == '6')
            box[6] = mark;

        else if (choice == 7 && box[7] == '7')
            box[7] = mark;

        else if (choice == 8 && box[8] == '8')
            box[8] = mark;

        else if (choice == 9 && box[9] == '9')
            box[9] = mark;

        else
        {
            printf("Invalid move ");
        }
        i = checkwin();

        player++;
    }

    board();

    if (i == 1)
        printf("==>Player %d win ", --player);
    else
        printf("==>Game draw");

    return 0;
}
int checkwin()
{
    if (box[1] == box[2] && box[2] == box[3])
    {
        return 1;
    }

    else if (box[4] == box[5] && box[5] == box[6])
    {
        return 1;
    }

    else if (box[7] == box[8] && box[8] == box[9])
    {
        return 1;
    }

    else if (box[1] == box[4] && box[4] == box[7])
    {
        return 1;
    }

    else if (box[2] == box[5] && box[5] == box[8])
    {
        return 1;
    }

    else if (box[3] == box[6] && box[6] == box[9])
    {
        return 1;
    }

    else if (box[1] == box[5] && box[5] == box[9])
    {
        return 1;
    }

    else if (box[3] == box[5] && box[5] == box[7])
    {
        return 1;
    }

    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' &&
             box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7]
             != '7' && box[8] != '8' && box[9] != '9')
    {
        return 0;
    }
    else
        return  - 1;
}
void board()
{
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", box[1], box[2], box[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", box[4], box[5], box[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", box[7], box[8], box[9]);

    printf("     |     |     \n\n");
}
