#include "PrimeVector.h"
#include <iostream>

using namespace Math;

PrimeVector PrimeVector::upTo(uint16_t max)
{
   return PrimeVector(max);
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
    uint16_t indexForPrime = 0;
    m_primes = new int[indexForPrime + 1];
    
   for (uint16_t index = 0; index <= max; index++)
   {
       if (isPrime(index))
       {
           m_primes[indexForPrime] = index;
           ++indexForPrime;
           increaseSize(indexForPrime);
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

   for (uint16_t index = 2; index < value; index++)
   {
      if (value % index == 0)
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

void PrimeVector::increaseSize(uint16_t indexForPrime)
{
    
    int* m_primes2 = new int[indexForPrime];

    for (int i = 0; i < indexForPrime; i++)
    {
        m_primes2[i] = m_primes[i];
    }

    delete[] m_primes;
    m_primes = new int[indexForPrime + 1];

    for (int i = 0; i < indexForPrime; i++)
    {
        m_primes[i] = m_primes2[i];
    }
    delete[] m_primes2;
}