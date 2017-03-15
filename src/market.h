#ifndef MARKET_H
#define MARKET_H
#include "trader.h"
#include <vector>

class Market
{
private:
    int m_numberOfTraders = 0;
    std::vector<Trader*> m_traders;

public:
    Market();

    void addTrader(Trader* trader);

    int getNumberOfTraders();
};

#endif // MARKET_H
