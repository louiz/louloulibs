#ifndef CARES_SOCKET_HANDLER_HPP
# define CARES_SOCKET_HANDLER_HPP

#include <network/socket_handler.hpp>

class CaresSocketHandler
{
public:
  explicit CaresSocketHandler();
  ~CaresSocketHandler();
private:
  CaresSocketHandler(const CaresSocketHandler&) = delete;
  CaresSocketHandler(CaresSocketHandler&&) = delete;
  CaresSocketHandler& operator=(const CaresSocketHandler&) = delete;
  CaresSocketHandler& operator=(CaresSocketHandler&&) = delete;
};

#endif // CARES_SOCKET_HANDLER_HPP
