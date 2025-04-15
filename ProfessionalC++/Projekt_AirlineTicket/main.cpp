#include "AirlineTicket.hpp"
#include <iostream>

int main() {
    AirlineTicket ticket;
    ticket.setPassengerName("Oreschnik");
    ticket.setNumberOfMiles(1000);
    ticket.setHasEliteSuperRewardsStatus(true);

    std::cout << "Ticket for: " << ticket.getPassengerName() << "\n";
    std::cout << "Price: $" << ticket.calculatePriceInDollars() << "\n";
    return 0;
}
