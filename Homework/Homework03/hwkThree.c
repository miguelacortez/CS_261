#include <stdio.h>
#include <stdlib.h>

char hwkThree(unsigned int unsignedValue)
{
    unsigned int storedExponent;

    // Performing AND bitwise operation to isolate exponent value then 
    // Shifting binary value by 23 bits to remove mantissa bits
    storedExponent = (unsignedValue & 0x7F800000) >> 23;

    // Removing exponential bias of 127 from storedExponent value
    storedExponent = storedExponent - 127;

    // Returning type-casted exponent value as a character
    return (char) storedExponent;
}
