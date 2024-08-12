static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8;
    FUN2(*VAR9)[4];
    int VAR10[4], VAR11[4], VAR12[4];
    const int VAR13 = VAR2->VAR13[0];
    const int VAR14 = ((1 << VAR2->VAR15) - 1) << VAR5;
    int VAR16 = 0;
    int VAR17 = 0;
    if (VAR2->VAR3 != 3 && VAR2->VAR3 != 4)
        return VAR18;
    if (VAR2->VAR19 != 1 || VAR2->VAR20 != 1 || !VAR2->VAR21)
        return VAR18;
    VAR2->VAR22 = VAR2->VAR23;
    FUN3(&VAR2->VAR24, &VAR2->VAR25, (unsigned)VAR2->VAR26 * 4 * sizeof(VAR2->VAR24[0][0]));
    VAR9 = VAR2->VAR24;
    for (VAR6 = 0; VAR6 < 4; VAR6++)
        VAR9[0][VAR6] = 1 << (VAR2->VAR15 - 1);
    for (VAR8 = 0; VAR8 < VAR2->VAR27; VAR8++)
    {
        VAR28 *VAR29 = VAR2->VAR30->VAR31[0] + (VAR13 * VAR8);
        if (VAR2->VAR32 && VAR2->VAR33)
            VAR29 += VAR13 >> 1;
        for (VAR6 = 0; VAR6 < 4; VAR6++)
            VAR11[VAR6] = VAR10[VAR6] = VAR12[VAR6] = VAR9[0][VAR6];
        for (VAR7 = 0; VAR7 < VAR2->VAR26; VAR7++)
        {
            int VAR34 = VAR4;
            if (VAR2->VAR23 && !VAR2->VAR22)
            {
                VAR2->VAR22 = VAR2->VAR23;
                VAR17 = VAR7;
                VAR16 = VAR8;
                for (VAR6 = 0; VAR6 < 4; VAR6++)
                    VAR11[VAR6] = VAR10[VAR6] = VAR12[VAR6] = 1 << (VAR2->VAR15 - 1);
            }
            if (VAR8 == VAR16 || VAR8 == VAR16 + 1 && VAR7 < VAR17 || !VAR7)
                VAR34 = 1;
            for (VAR6 = 0; VAR6 < VAR3; VAR6++)
            {
                int VAR35, VAR36;
                VAR12[VAR6] = VAR11[VAR6];
                VAR11[VAR6] = VAR9[VAR7][VAR6];
                FUN4(VAR35, VAR12[VAR6], VAR11[VAR6], VAR10[VAR6], VAR34);
                VAR36 = FUN5(VAR2, VAR2->VAR37[VAR6]);
                if (VAR36 == 0xFFFFF)
                    return -1;
                VAR10[VAR6] = VAR9[VAR7][VAR6] = VAR14 & (VAR35 + (VAR36 * (1 << VAR5)));
            }
            if (VAR2->VAR23 && !--VAR2->VAR22)
            {
                FUN6(&VAR2->VAR38);
                FUN7(&VAR2->VAR38, 16);
            }
        }
        if (VAR2->VAR39 && VAR2->VAR3 == 4)
        {
            for (VAR7 = 0; VAR7 < VAR2->VAR26; VAR7++)
            {
                VAR29[4 * VAR7 + 2] = VAR9[VAR7][0] - ((VAR9[VAR7][1] + VAR9[VAR7][2] - 0x200) >> 2);
                VAR29[4 * VAR7 + 1] = VAR9[VAR7][1] + VAR29[4 * VAR7 + 2];
                VAR29[4 * VAR7 + 3] = VAR9[VAR7][2] + VAR29[4 * VAR7 + 2];
                VAR29[4 * VAR7 + 0] = VAR9[VAR7][3];
            }
        }
        else if (VAR2->VAR3 == 4)
        {
            for (VAR6 = 0; VAR6 < VAR3; VAR6++)
            {
                int VAR40 = VAR2->VAR41[VAR6];
                if (VAR2->VAR15 <= 8)
                {
                    for (VAR7 = 0; VAR7 < VAR2->VAR26; VAR7++)
                    {
                        VAR29[4 * VAR7 + 3 - VAR40] = VAR9[VAR7][VAR6];
                    }
                }
                else if (VAR2->VAR15 == 9)
                {
                    return VAR42;
                }
                else
                {
                    for (VAR7 = 0; VAR7 < VAR2->VAR26; VAR7++)
                    {
                        ((VAR43 *)VAR29)[4 * VAR7 + VAR40] = VAR9[VAR7][VAR6];
                    }
                }
            }
        }
        else if (VAR2->VAR39)
        {
            for (VAR7 = 0; VAR7 < VAR2->VAR26; VAR7++)
            {
                VAR29[3 * VAR7 + 1] = VAR9[VAR7][0] - ((VAR9[VAR7][1] + VAR9[VAR7][2] - 0x200) >> 2);
                VAR29[3 * VAR7 + 0] = VAR9[VAR7][1] + VAR29[3 * VAR7 + 1];
                VAR29[3 * VAR7 + 2] = VAR9[VAR7][2] + VAR29[3 * VAR7 + 1];
            }
        }
        else if (VAR2->VAR44)
        {
            for (VAR7 = 0; VAR7 < VAR2->VAR26; VAR7++)
            {
                VAR29[3 * VAR7 + 1] = VAR9[VAR7][0] - ((VAR9[VAR7][1] + VAR9[VAR7][2]) >> 2);
                VAR29[3 * VAR7 + 0] = VAR9[VAR7][1] + VAR29[3 * VAR7 + 1];
                VAR29[3 * VAR7 + 2] = VAR9[VAR7][2] + VAR29[3 * VAR7 + 1];
            }
        }
        else
        {
            for (VAR6 = 0; VAR6 < VAR3; VAR6++)
            {
                int VAR40 = VAR2->VAR41[VAR6];
                if (VAR2->VAR15 <= 8)
                {
                    for (VAR7 = 0; VAR7 < VAR2->VAR26; VAR7++)
                    {
                        VAR29[3 * VAR7 + 2 - VAR40] = VAR9[VAR7][VAR6];
                    }
                }
                else if (VAR2->VAR15 == 9)
                {
                    return VAR42;
                }
                else
                {
                    for (VAR7 = 0; VAR7 < VAR2->VAR26; VAR7++)
                    {
                        ((VAR43 *)VAR29)[3 * VAR7 + 2 - VAR40] = VAR9[VAR7][VAR6];
                    }
                }
            }
        }
    }
    return 0;
}