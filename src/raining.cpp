#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string hello() {
   return "Hello World!";
}
void addBusiness(std::vector<std::string>& businesses)
{
   std::string name;

   std::cout << "Please enter the name of a business: ";
   getline(std::cin, name);

   businesses.push_back(name);

   std::sort(businesses.begin(), businesses.end());

}
void displayBusinesses(const std::vector<std::string>& businesses)
{
   if (businesses.size() == 1)
   {
      std::cout << "Your business is: \n\n";
   }
   else
   {
      std::cout << "Your businesses are: \n\n";
   }

   for (const std::string& name : businesses)
   {
      std::cout << "     " << name << "\n";
   }
   std::cout << "\n";
}