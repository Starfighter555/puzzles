#include "AirlineTicket.hpp"
#include <iostream>

AirlineTicket::AirlineTicket()
    : m_passengerName{"Unknown"}, m_numberOfMiles{0}, m_hasEliteSuperRewardsStatus{false} {
    std::cout << "Constructor called.\n";
}

AirlineTicket::~AirlineTicket() {
    std::cout << "Destructor called.\n";
}

double AirlineTicket::calculatePriceInDollars() const {
    return m_hasEliteSuperRewardsStatus ? m_numberOfMiles * 0.5 : m_numberOfMiles * 1.0;
}

std::string AirlineTicket::getPassengerName() const {
    return m_passengerName;
}

void AirlineTicket::setPassengerName(const std::string& name) {
    m_passengerName = name;
}

int AirlineTicket::getNumberOfMiles() const {
    return m_numberOfMiles;
}

void AirlineTicket::setNumberOfMiles(int miles) {
    m_numberOfMiles = miles;
}

bool AirlineTicket::hasEliteSuperRewardsStatus() const {
    return m_hasEliteSuperRewardsStatus;
}

void AirlineTicket::setHasEliteSuperRewardsStatus(bool status) {
    m_hasEliteSuperRewardsStatus = status;
}
