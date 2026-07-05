#include <iostream>

int main(){

    srand(time(0));
    
    std::cout << "Welcome to game of number guessing!" << std::endl;
    char level;
    std::cout << "Choose level of difficulty(A- 5 ,B - 7, C - 10 , D - 15):" << std::endl;
    std::cin >> level;


    int count_tries;


    if (level == 'A'){
        count_tries = 5;
    }
    else if (level == 'B'){
        count_tries = 7;

    }
    else if (level == 'C'){
        count_tries = 10;

    }
    else if (level == 'D'){
        count_tries = 15;

    }



    std::cout << "Computer have a number from one to 50, try to guess!" << std::endl;
    int comnum;
    comnum = 1 + rand() % 50;
    int playernum;
    std::cout << "Enter your number: ";

    std::cin >> playernum;

    while (playernum != comnum){
        if (playernum > comnum){
            std::cout << "Your number is bigger then correct one" << std::endl;
            count_tries -= 1;
            if (count_tries == 0){
            std::cout << "You are a looser!So you loose" << std::endl;
            return 0;            
            }

        }

        else{
            std::cout << "Your number is smaller then correct one" << std::endl;
            count_tries -= 1;
            if (count_tries == 0){
            std::cout << "You are a looser!So you loose" << std::endl;
            return 0;
            }

        }

        std::cout << "Try again: " << std::endl;

        std::cin >> playernum;
    }

    std::cout << "YESSSS , you are right!!!Congrats, you won a game.";
    
    return 0;
}