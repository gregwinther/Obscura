#include "trader.h"
#include "market.h"

Market::Market()
{

}

void Market::addTrader(Trader *trader) {
   m_traders.push_back(trader);
   m_numberOfTraders++;
}

int Market::getNumberOfTraders() {
    return m_numberOfTraders;
}
