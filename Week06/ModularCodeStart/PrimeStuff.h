#ifndef PRIMESTUFF_H
#define PRIMESTUFF_H

//IF WE USED STRING IN FUNCTION DECLARATIONS WE WOULD NEED
//#include <string>
//using namespace std;

/**
 * @brief isPrime Determines if given number is
 *          prime or not
 *
 * @param number Number to test
 * @return True if number is prime
 */
bool isPrime(int number);


/**
 * @brief printAndCountPrimes Prints all primes up to given limit
 * @param limit Highest value (inclusive) to consider
 * @return Number of primes printed
 */
int printAndCountPrimes(int limit);


#endif // PRIMESTUFF_H
