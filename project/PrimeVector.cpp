#include "PrimeVector.h"
using namespace Math;

PrimeVector PrimeVector::upTo(uint16_t max)
{
   return PrimeVector(max);
}

PrimeVector::PrimeVector(uint16_t max)
{
   calculatePrimes(max, indexForPrime);
}

const int* PrimeVector::begin() const
{
   return m_primes;
}

const int* PrimeVector::end() const
{
   return m_primes + m_max;
}

void PrimeVector::calculatePrimes(uint16_t max, uint16_t indexForPrime)
{
   m_primes = new int[max];
   for (uint16_t index = 0; index <= max; index++)
   {
      if (isPrime(index))
      {
         m_primes[indexForPrime++] = index;
      }
   }
   m_max = indexForPrime;
}

bool PrimeVector::isPrime(uint16_t value) const
{
    if (value < 2)
    {
        return false;
    }

   for (uint16_t i = 2; i < value; i++)
   {
      if (value % i == 0)
      {
         return false;
      }
   }
   return true;
}

PrimeVector::~PrimeVector()
{
    delete[] m_primes;

}
