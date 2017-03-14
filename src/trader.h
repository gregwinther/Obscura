#ifndef TRADER_H
#define TRADER_H


class Trader
{

private:
    double m_cash;
    int m_noShares;

    double m_sharePrice;

public:
    Trader();

    void setMarketPrice(double marketPrice);

    double getWealth();
    void setCash(double cash);
};

#endif // TRADER_H
