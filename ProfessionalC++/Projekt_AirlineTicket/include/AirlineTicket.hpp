#pragma once
#include <string>

class AirlineTicket {
public:
    AirlineTicket();
    ~AirlineTicket();

    double calculatePriceInDollars() const;
    std::string getPassengerName() const;
    void setPassengerName(const std::string& name);
    int getNumberOfMiles() const;
    void setNumberOfMiles(int miles);
    bool hasEliteSuperRewardsStatus() const;
    void setHasEliteSuperRewardsStatus(bool status);

private:
    std::string m_passengerName;
    int m_numberOfMiles;
    bool m_hasEliteSuperRewardsStatus;
};
