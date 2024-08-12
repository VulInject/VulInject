static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const int VAR6)
{
    static const VAR7 *const VAR8[4] = {VAR9, VAR10, VAR11, VAR12};
    int VAR13, VAR14, VAR15, VAR16, VAR17;
    const int VAR18 = (3 * VAR6) >> 2;
    const VAR7 *const VAR19 = VAR8[VAR6];
    for (VAR17 = (16 >> VAR18); VAR5 < 16; VAR5 = VAR17, VAR17 += 8)
    {
        for (; (VAR16 = FUN2(VAR2)) != 0; VAR5++)
        {
            if (VAR16 < 0)
                return -1;
            VAR15 = (VAR16 & 0x1) - 1;
            VAR16 = (VAR16 + 1) >> 1;
            if (VAR6 == 3)
            {
                if (VAR16 < 3)
                {
                    VAR13 = 0;
                    VAR14 = VAR16;
                }
                else if (VAR16 < 4)
                {
                    VAR13 = 1;
                    VAR14 = 1;
                }
                else
                {
                    VAR13 = (VAR16 & 0x3);
                    VAR14 = ((VAR16 + 9) >> 2) - VAR13;
                }
            }
            else
            {
                if (VAR16 < 16U)
                {
                    VAR13 = VAR20[VAR18][VAR16].VAR13;
                    VAR14 = VAR20[VAR18][VAR16].VAR14;
                }
                else if (VAR18)
                {
                    VAR13 = (VAR16 & 0x7);
                    VAR14 = (VAR16 >> 3) + ((VAR13 == 0) ? 8 : ((VAR13 < 2) ? 2 : ((VAR13 < 5) ? 0 : -1)));
                }
                else
                {
                    VAR13 = (VAR16 & 0xF);
                    VAR14 = (VAR16 >> 4) + ((VAR13 == 0) ? 4 : ((VAR13 < 3) ? 2 : ((VAR13 < 10) ? 1 : 0)));
                }
            }
            if ((VAR5 += VAR13) >= VAR17)
                return -1;
            VAR4[VAR19[VAR5]] = (VAR14 ^ VAR15) - VAR15;
        }
        if (VAR6 != 2)
        {
            break;
        }
    }
    return 0;
}