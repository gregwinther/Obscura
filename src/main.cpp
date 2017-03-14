#include <iostream>
#include "trader.h"

using namespace std;

int main(int argc, char *argv[])
{
    Trader* traderJoe;
    traderJoe = new Trader();

    traderJoe->setCash(300);

    double traderWealth = traderJoe->getWealth();

    cout << "Trader Joe's wealth is: " << traderWealth << endl;
}
