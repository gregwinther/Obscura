#include "trader.h"
#include <cstdlib>
#include <utility>
#include <random>

Trader::Trader() {
    m_cash = 0;
    m_noShares = 0;
    m_sharePrice = 0;
}

std::tuple<bool,double> Trader::placeOrder() {

    // Generating buy/sell factor
    std::default_random_engine generator;
    std::normal_distribution<double> gauss(1.01, 0.003);
    double buySellFactor = gauss(generator);

    // Buy or sell at random
    bool buy = rand() % 2;
    double price;
    if (buy) {
        price = 100 * buySellFactor;
    } else {
        price = 100 / buySellFactor;
    }

    std::tuple<bool,double> limitOrder(buy, price);
    return limitOrder;

}

void Trader::setMarketPrice(double marketPrice) { m_sharePrice = marketPrice; }

double Trader::getWealth() { return m_cash + m_sharePrice*m_noShares; }

void Trader::setCash(double cash) { m_cash = cash; }
