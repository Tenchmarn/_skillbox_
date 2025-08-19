#include <iostream>
#include <cmath>

using namespace std;

int main() {

    std::string start, move;

    std::cout << "Input start position and move position:\n";

    std::cin >> start >> move;

    {

        if ((abs(start[0] - move[0]) == 1) && (abs(start[1] - move[1]) == 2)

            || (abs(start[0] - move[0]) == 2) && (abs(start[1] - move[1]) == 1)

            )

            std::cout << "Horse move\n";

        if (abs((start[0] - move[0]) == 0) && (abs(start[1] - move[1]) > 0)

            || (abs(start[0] - move[0]) > 0) && (abs(start[1] - move[1]) == 0)

            )

            std::cout << "Rook move\n";

        if ((abs(start[0] - move[0]) == abs(start[1] - move[1]))

            && (abs(start[0] - move[0]) > 0)

            )

            std::cout << "Bishop move\n";

        if (

            (

                (abs(start[0] - move[0]) == abs(start[1] - move[1]))

                && (abs(start[0] - move[0]) > 0)

                )

            ||

            (

                abs((start[0] - move[0]) == 0)

                && (abs(start[1] - move[1]) > 0)

                ||

                (

                    abs(start[0] - move[0]) > 0)

                && (abs(start[1] - move[1]) == 0)

                )

            )

            std::cout << "Queen move\n";

        if ((abs(start[0] - move[0]) <= 1

            && abs(start[1] - move[1]) <= 1)

            )

            std::cout << "King move\n";

    }

}