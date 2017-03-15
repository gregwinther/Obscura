#include "trader.h"
#include <cstdlib>
#include <utility>

Trader::Trader() {
    m_cash = 0;
    m_noShares = 0;
    m_sharePrice = 0;
}
/*
struct ORDER {
    bool buy;
    double price;
};
*/

std::pair<bool,double> placeOrder() {

    // Buy or sell at random
    bool buy = rand() % 2;
    double price = 100;
    std::pair<bool,double> limitOrder(buy, price);
    return limitOrder;

}

void Trader::setMarketPrice(double marketPrice) { m_sharePrice = marketPrice; }

double Trader::getWealth() { return m_cash; }

void Trader::setCash(double cash) { m_cash = cash; }
