#include "Zombie.hpp"

int main()
{
    int N;

    N = 6;
    Zombie* brainz = zombieHorde(N,"hello");

    if (brainz)
    {
        for (int i = 0; i < N; i++)
            brainz->announce();
        delete[] brainz;
    }
    return (0);
}