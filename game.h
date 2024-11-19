for (int k = 0; k < row; k++)
    {
        for (int i = 0; i < column; i++)
        {
            if (k == 0 || k == (row - 1))
            {
                arr[k][i] = '*';
            }
            else if (i == 0 || i == (column - 1))
            {
                arr[k][i] = '|';
            }

            else
            {
                if ((k == (row - 2) && i == p.pos_x))
                {
                    continue;
                }

                else if ((k == obs1.pos_y) && (i == obs1.pos_x))
                {
                    continue;
                }

                else if ((k == obs2.pos_y) && (i == obs2.pos_x))
                {
                    continue;
                }

                else if ((k == obs3.pos_y) && (i == obs3.pos_x))
                {
                    continue;
                }

                else if ((k == obs4.pos_y) && (i == obs4.pos_x))
                {
                    continue;
                }

                else
                {
                    arr[k][i] = ' ';
                }
            }
        }
    }
