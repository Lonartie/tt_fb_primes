#pragma once
#include <cstdint>

namespace Math
{
   /// @brief Fake generator class for prime numbers
   class PrimeVector
   {
   public:
      /// @brief Creates a prime vector which can be used to loop over
      /// @param max The upper boundary to look for prime numbers
      /// @returns A PrimeVector to iterate over containing all primes up to max
      static PrimeVector upTo(uint16_t max);

   public:
      PrimeVector() = default;
      ~PrimeVector();

      /// @brief Calculates all primes up to max and stores them
      /// @param max The upper boundary to calculate up to
       PrimeVector(uint16_t max);

      /// @returns The start pointer
      const int* begin() const;

      /// @returns The end pointer (sentinel)
      const int* end() const;

   private:
      /// @brief Calculates all primes up to max
      /// @param max The upper boundary to calculate primes up to
      void calculatePrimes(uint16_t max);

      /// @brief Checks whether or not this number is prime
      /// @param value The value to check for prime
      /// @returns True if the number is prime
      bool isPrime(uint16_t value) const;

   private:
      int* m_primes = nullptr;
      uint16_t m_max = 0;
   };
}
