#include <iostream>
#include <Windows.h>
#include<conio.h>

/*
					 ^			<
__________________^__#_^__#_____________________________
*/

class A
{
public:
    int s = 5;

    class B
    {
    public:
        void change(A& a)
        {
            a.s = 10;
        }

        void print(A& a)
        {
            std::cout << a.s;
        }
    };

    B pk;
};

int main()
{
	A pl;
	pl.pk.print(pl);
	pl.pk.change(pl);
	pl.pk.print(pl);

    return 0;

}