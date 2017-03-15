#include <iostream>
#include "trader.h"
#include "market.h"
#include <utility>
#include <tuple>

using namespace std;

int main(int argc, char *argv[])
{
    Trader* traderJoe = new Trader();

    traderJoe->setCash(300);

    tuple<bool,double> limitOrder;

    for (int i = 0; i < 10; i++) {
        limitOrder = traderJoe->placeOrder();
        if (get<0>(limitOrder)) {
            cout << "Buy @ price: " << get<1>(limitOrder) << endl;
        } else {
            cout << "Sell @ price: " << get<1>(limitOrder) << endl;
        }
    }

    Market* market = new Market();
    for (int i = 0; i < 3; i++) {
        market->addTrader(new Trader());
    }

    cout << "There are " << market->getNumberOfTraders() << " traders in the market" << endl;
}
