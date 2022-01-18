unsigned int F(unsigned int x, unsigned int y, unsigned int z) {
    return ( x & y) | (~x & z); 
}