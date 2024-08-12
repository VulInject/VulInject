void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, FUN2 (*VAR6)[2], int VAR7, int VAR8, int VAR9)
{
    VAR10 *const VAR11 = &VAR2->VAR12;
    int VAR13, VAR14, VAR15;
    int VAR16 = (((VAR2->VAR17 == VAR18 || VAR2->VAR19) ? 8 : 16) << VAR7);
    if (VAR11->VAR20->VAR21 && VAR16 > VAR11->VAR20->VAR21)
        VAR16 = VAR11->VAR20->VAR21;
    VAR14 = VAR16;
    VAR15 = VAR4 ? VAR16 >> 1 : VAR16;
    for (VAR13 = 0; VAR13 < VAR2->VAR22; VAR13++)
    {
        int VAR23;
        int VAR24 = VAR13 * VAR2->VAR25;
        for (VAR23 = 0; VAR23 < VAR2->VAR26; VAR23++)
        {
            if (VAR2->VAR27[VAR24] & VAR8)
            {
                if (!VAR4 || VAR4[VAR24] == VAR5)
                {
                    if (VAR6[VAR24][0] >= VAR14 || VAR6[VAR24][0] < -VAR14 || VAR6[VAR24][1] >= VAR15 || VAR6[VAR24][1] < -VAR15)
                    {
                        if (VAR9)
                        {
                            if (VAR6[VAR24][0] > VAR14 - 1)
                                VAR6[VAR24][0] = VAR14 - 1;
                            else if (VAR6[VAR24][0] < -VAR14)
                                VAR6[VAR24][0] = -VAR14;
                            if (VAR6[VAR24][1] > VAR15 - 1)
                                VAR6[VAR24][1] = VAR15 - 1;
                            else if (VAR6[VAR24][1] < -VAR15)
                                VAR6[VAR24][1] = -VAR15;
                        }
                        else
                        {
                            VAR2->VAR27[VAR24] &= ~VAR8;
                            VAR2->VAR27[VAR24] |= VAR28;
                            VAR6[VAR24][0] = VAR6[VAR24][1] = 0;
                        }
                    }
                }
            }
            VAR24++;
        }
    }
}