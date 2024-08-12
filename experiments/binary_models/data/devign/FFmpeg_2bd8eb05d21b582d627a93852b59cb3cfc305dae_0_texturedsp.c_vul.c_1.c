static inline void FUN1(VAR1 *VAR2, ptrdiff_t VAR3, const VAR1 *VAR4)
{
    int VAR5, VAR6;
    uint32_t VAR7[4];
    uint8_t VAR8[16];
    uint16_t VAR9 = FUN2(VAR4 + 8);
    uint16_t VAR10 = FUN2(VAR4 + 10);
    uint32_t VAR11 = FUN3(VAR4 + 12);
    uint8_t VAR12 = *(VAR4);
    uint8_t VAR13 = *(VAR4 + 1);
    FUN4(VAR8, VAR4 + 2);
    FUN5(VAR7, VAR9, VAR10, 1, 0);
    for (VAR6 = 0; VAR6 < 4; VAR6++)
    {
        for (VAR5 = 0; VAR5 < 4; VAR5++)
        {
            int VAR14 = VAR8[VAR5 + VAR6 * 4];
            uint32_t VAR15;
            uint8_t VAR16;
            if (VAR14 == 0)
            {
                VAR16 = VAR12;
            }
            else if (VAR14 == 1)
            {
                VAR16 = VAR13;
            }
            else
            {
                if (VAR12 > VAR13)
                {
                    VAR16 = (VAR1)(((8 - VAR14) * VAR12 + (VAR14 - 1) * VAR13) / 7);
                }
                else
                {
                    if (VAR14 == 6)
                    {
                        VAR16 = 0;
                    }
                    else if (VAR14 == 7)
                    {
                        VAR16 = 255;
                    }
                    else
                    {
                        VAR16 = (VAR1)(((6 - VAR14) * VAR12 + (VAR14 - 1) * VAR13) / 5);
                    }
                }
            }
            VAR15 = VAR7[VAR11 & 3] | (VAR16 << 24);
            VAR11 >>= 2;
            FUN6(VAR2 + VAR5 * 4, VAR15);
        }
        VAR2 += VAR3;
    }
}