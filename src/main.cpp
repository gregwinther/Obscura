#include <iostream>
#include "trader.h"
#include <utility>

using namespace std;

int main(int argc, char *argv[])
{
    Trader* traderJoe;
    traderJoe = new Trader();

    traderJoe->setCash(300);

    double traderWealth = traderJoe->getWealth();

    cout << "Trader Joe's wealth is: " << traderWealth << endl;

    pair<bool,double> limitOrder(0,0);

    cout << traderJoe->getWealth().second << end;
}
