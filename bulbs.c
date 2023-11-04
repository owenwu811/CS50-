/* takes a user input message, converts each character of that message into binary, and prints the binary representation with light bulb emojis */
/* pre included */
#include <cs50.h>
#include <stdio.h>
#include <string.h>

/* represents the number of bits in a byte */
const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    string message = get_string("Message": );
    for (int i = 0; i < strlen(message); i++)
    {
        unsigned char byte = message[i]; // unsigned char ensures that we get a non-negative number with a value of 0 - 255 inclusive. If we use char, 
        // then the byte value could be negative if ASCII value was over 127, and negative values are not binary compatible. 
        int binary[BITS_IN_BYTE]; //BITS_IN_BYTE is a constant integer of 8 defined in line 5
        int quotient = byte; // 
        int remainder;
    }
    for (int j = 0; j < BITS_INT_BYTE; j++)
    {
        remainder = quotient % 2; // Each element of array is populated with 0 or 1, representing on or off for the lightblub, by dividing decimal value of byte by 2 and storing remainder in binary. 
        binary[j] = remainder;
        quotient /= 2;
    }
    for (int k = BITS_IN_BYTE - 1; k >= 0; k--){
        print_bulb(binary[k]);
    }
    printf("\n");

}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
