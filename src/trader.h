#include <utility>
#ifndef TRADER_H
#define TRADER_H

class Trader
{

private:
    double m_cash;
    int m_noShares;

    double m_sharePrice;

    //struct ORDER;

public:
    Trader();

    std::pair<bool,double> placeOrder();

    void setMarketPrice(double marketPrice);

    double getWealth();
    void setCash(double cash);
};

#endif // TRADER_H
