#include <iostream>

#include "src/raining.hpp"

int main()
{
  // Your driver program goes here

  bool continueInput = true;
  std::vector<std::string> businesses;
  std::string response;
  std::cout << "Welcome to the Business Sorting Program!\n\n";


  while (continueInput)
  {
    addBusiness(businesses);
    displayBusinesses(businesses);

    std::cout << "Another business?  ";
    std::getline(std::cin, response);

    continueInput = (response == "y" || response == "Y" ||
                     response == "yes" || response == "Yes");

  }

  std::cout << "Thank you for using the Business Sorting Program!\n";

  return 0;
}
