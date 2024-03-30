#include <stdio.h>


int main()
{
    unsigned char a = 0b00001010; // (binary)
    unsigned char b = 0b00000110; // (binary)
    unsigned char c = a|b; // bit-wise and/or
    printf("%d\n",c);

    unsigned char d = 0b11111110; // (binary)
    d = ~d;
    printf("%d\n",d);

    // xor(Exclusive - OR): 互斥或
    // 口訣:長的一樣是0，長不一樣是1
    a = 0b00001010; // (binary)
    b = 0b00000110; // (binary)
    c = a ^ b; // 0000 1100
    printf("%d\n",c);


    a = 0b00000110; // 6 (binary)
    c = a << 2; //  00011000 -> 24
    printf("%d\n",c);

    a = 0b00000110; // 6 (binary)
    c = a >> 1; //  00000011 -> 3
    printf("%d\n",c);
    return 0;
}