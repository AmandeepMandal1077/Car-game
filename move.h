void Player::Move()
{
    if (pos_x == 1)
    {
        pos_x += 1;
    }
    else if (pos_x == 7)
    {
        pos_x -= 1;
    }
    else
    {
        pos_x = pos_x + (random_player());
    }
}


void Move_obs(Obstacle &obs,char arr[][9])
{
    // moving down obstacles
        obs.pos_y+=1;
        obs.ending();
        if(obs.pos_y!=1)
            arr[obs.pos_y-1][obs.pos_x] = ' ';
        // repositioning obstacles to start
        arr[obs.pos_y][obs.pos_x] = '!';
}
