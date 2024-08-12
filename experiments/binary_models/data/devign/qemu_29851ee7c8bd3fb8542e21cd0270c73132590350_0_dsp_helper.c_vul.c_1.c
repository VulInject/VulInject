static inline VAR1 FUN1(uint16_t VAR2, uint8_t VAR3, VAR4 *VAR5)
{
    uint8_t VAR6;
    uint16_t VAR7;
    if (VAR3 == 0)
    {
        return VAR2;
    }
    else
    {
        VAR6 = (VAR2 >> 15) & 0x01;
        if (VAR6 != 0)
        {
            VAR7 = (((0x01 << (16 - VAR3)) - 1) << VAR3) | ((VAR2 >> (14 - (VAR3 - 1))) & ((0x01 << VAR3) - 1));
        }
        else
        {
            VAR7 = VAR2 >> (14 - (VAR3 - 1));
        }
        if ((VAR7 != 0x0000) && (VAR7 != 0xFFFF))
        {
            FUN2(1, 22, VAR5);
        }
        return VAR2 << VAR3;
    }
}