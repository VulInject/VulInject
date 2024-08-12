static VAR1 FUN1(uint16_t VAR2, uint16_t VAR3)
{
    uint32_t VAR4 = 0;
    while (VAR2 > 1 || VAR3 > 1)
    {
        VAR4 += VAR2 * VAR3;
        FUN2(VAR4 + 1 < VAR5);
        VAR2 = (VAR2 + 1) >> 1;
        VAR3 = (VAR3 + 1) >> 1;
    }
    return (VAR1)(VAR4 + 1);
}