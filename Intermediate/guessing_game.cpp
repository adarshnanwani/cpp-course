#include <iostream>
#include <string>

void play_game() {
    std::cout << "Game is being plaed";
}

int main() {
    int choice;
    do
    {
        std::cout << "[0] Quit\n[1] Play Game" << std::endl << "Please enter a choice... ";
        std::cin >> choice;
        switch (choice)
        {
        case 0:
            std::cout << "Bye" << std::endl;
            break;
        case 1:
            play_game();
            break;
        }
    } while (choice != 0);




    return 0;
}
