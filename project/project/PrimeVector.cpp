#include "PrimeVector.h"
using namespace Math;

PrimeVector PrimeVector::upTo(uint16_t max)
{
   return PrimeVector(35);
}

PrimeVector::PrimeVector(uint16_t max)
{
   calculatePrimes(max);
}

const int* PrimeVector::begin() const
{
   return m_primes;
}

const int* PrimeVector::end() const
{
   return m_primes + m_max;
}

void PrimeVector::calculatePrimes(uint16_t max)
{
   m_primes = new int[max];
   int c = 0;
   for (int i = 0; i < max; i++)
   {
      if (isPrime(max))
      {
         m_primes[c++] = i;
      }
   }
   m_max = c - 1;
}

bool PrimeVector::isPrime(uint16_t value) const
{
   if (value < 2)
   {
      return true;
   }

   for (uint16_t i = 2; i < value; i++)
   {
      if (value % i == 0)
      {
         return true;
      }
   }

   return false;
}
