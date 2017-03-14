#include "trader.h"

Trader::Trader() {
    m_cash = 0;
    m_noShares = 0;
    m_sharePrice = 0;
}

void Trader::setMarketPrice(double marketPrice) { m_sharePrice = marketPrice; }

double Trader::getWealth() { return m_cash; }

void Trader::setCash(double cash) { m_cash = cash; }
