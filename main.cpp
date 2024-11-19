#include "file.h"

int main()
{
    srand(time(0));
    // defining structure of window
    int row = 8;
    int column = 9;
    char arr[8][9];

    // defining obstacle pos and player pos
    Player p;
    Obstacle obs1,obs2,obs3,obs4;

    // postion of player
    arr[6][p.pos_x] = '^';

    // position of obstacle
    obs1.pos_y = (rand()%5)+1;
    arr[obs1.pos_y][obs1.pos_x] = '!';

    obs2.pos_y = (rand()%5)+1;
    arr[obs2.pos_y][obs2.pos_x] = '!';
    
    obs3.pos_y = (rand()%5)+1;
    arr[obs3.pos_y][obs3.pos_x] = '!';
    
    obs2.pos_y = (rand()%5)+1;
    arr[obs4.pos_y][obs1.pos_x] = '!';
    while (true)
    { // creating window again and again
        #include "game.h"

        // printing on screen
        for (int i = 0; i < row; i++)
        {
            for (int k = 0; k < column; k++)
            {
                std::cout << arr[i][k] << " ";
            }
            std::cout << std::endl;
        }

        // taking pause between consecutive outputs
        Sleep(100);

        Move_obs(obs1, arr);
        Move_obs(obs2, arr);
        Move_obs(obs3, arr);
        Move_obs(obs4, arr);

        // dodging objects automatic but fail sometimes for consecutive objects
        while (arr[(row - 3)][p.pos_x] == '!')
        {
            arr[(row - 2)][p.pos_x] = ' ';
            p.Move();
            arr[(row - 2)][p.pos_x] = '^';
        }

        system("cls");
    }
}