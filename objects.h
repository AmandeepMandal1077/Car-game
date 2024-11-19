#include <cstdlib>
#include <ctime>
int random_player()
{
    int randint = rand() % 2;
    return (randint * 2) - 1;
}

int random_object()
{
    int randint = (rand() % 4);
    if ((rand() % 2) % 2 != 0)
        return (2 * randint + 1);
    else
        return (2 * randint);
}

class Player
{
public:
    int pos_x = 3;

    void Move(void);
};

class Obstacle
{
public:
    int pos_x;
    int pos_y;

    Obstacle()
    {
        pos_x = random_object();
        pos_y = 1;
    }

    void ending()
    {
        if (pos_y == 7)
        {
            pos_y = 1;
            pos_x = random_object();
        }
    }

 
    
};

void not_same(int &a, int &b);
