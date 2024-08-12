static inline VAR1 FUN1(uint8_t VAR2, uint8_t VAR3, VAR4 *VAR5)
{
    uint8_t VAR6;
    uint8_t VAR7;
    if (VAR3 == 0)
    {
        return VAR2;
    }
    else
    {
        VAR6 = (VAR2 >> 7) & 0x01;
        if (VAR6 != 0)
        {
            VAR7 = (((0x01 << (8 - VAR3)) - 1) << VAR3) | ((VAR2 >> (6 - (VAR3 - 1))) & ((0x01 << VAR3) - 1));
        }
        else
        {
            VAR7 = VAR2 >> (6 - (VAR3 - 1));
        }
        if (VAR7 != 0x00)
        {
            FUN2(1, 22, VAR5);
        }
        return VAR2 << VAR3;
    }
}