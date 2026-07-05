#include <iostream>

int main(){
    std::cout << "Welcome to game of number guessing!" << std::endl;
    std::cout << "Computer have a number from one to 100, try to guess!" << std::endl;
    int comnum;
    comnum = 1 + rand() % 100;
    int playernum;
    std::cout << "Enter youe number: ";

    std::cin >> playernum;

    while (playernum != comnum){
        if (playernum > comnum){
            std::cout << "Your number is bigger then correct one" << std::endl;
        }
        else{
            std::cout << "Your number is smaller then correct one" << std::endl;

        }

        std::cout << "Try again: " << std::endl;

        std::cin >> playernum;
    }

    std::cout << "YESSSS , you are right!!!Congrats, you won a game.";
    
    return 0;
}