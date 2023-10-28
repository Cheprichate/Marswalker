#include <iostream>
#include <string>

int posX, posY;
char oper;
int spawnx = 8;
int spawny = 10;

int main()
{
    setlocale(LC_ALL, "Russian");


    while (true) {

        std::cout << "Оператор: "; std::cin >> oper;
        std::cout << "(север w , юг s, запад a, восток d)" ;

        if (oper == 'w') {
            posY += 1;
        }
        else if (oper == 's') {
            posY -= 1;
        }
        else if (oper == 'a') {
            posX -= 1;
        }
        else if (oper == 'd') {
            posX += 1;
        }

        if (posX <= 0 || posX > 15) {
            posX = spawnx; 
        }

        if (posY <= 0 || posY > 20) {
            posY = spawny; 
        }

        spawnx = posX;
        spawny = posY;

        std::cout << "Новая позиция марсохода: (" << spawnx << ", " << spawny << ")\n";
    }

}
