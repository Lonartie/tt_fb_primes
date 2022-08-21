#include <iostream>

int main()
{
   /*
    * Your task is to find all bugs with this code.
    * Try to find as many bugs as you can.
    * And keep an eye on code style and potential memory issues!
    *
    * Requirements:
    * - You are only allowed to change the code in the PrimeVector class (header + source file)
    *
    * Happy coding!
    */

   for (const int prime : PrimeVector::upTo(35))
   {
      std::cout << prime << std::endl;
   }

   /*
    * Expected output:
    * 2
    * 3
    * 5
    * 7
    * 11
    * 13
    * 17
    * 19
    * 23
    * 29
    * 31
    */
}
