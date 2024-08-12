VAR1 *FUN1(int VAR2)
{
    uint8_t VAR3 = 0x60 + VAR2;
    assert(VAR2 <= 7);
    return FUN2(VAR3);
}