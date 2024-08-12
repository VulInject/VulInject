VAR1 *FUN1(int VAR2)
{
    uint8_t VAR3 = 0x68 + VAR2;
    assert(VAR2 <= 6);
    return FUN2(VAR3);
}