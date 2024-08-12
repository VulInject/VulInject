static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8;
    FUN2(*VAR9)[4];
    int VAR10[4], VAR11[4], VAR12[4];
    const int VAR13 = VAR2->VAR13[0];
    const int VAR14 = (1 << VAR2->VAR15) - 1;
    int VAR16 = 0;
    int VAR17 = 0;
    VAR2->VAR18 = VAR2->VAR19;
    FUN3(&VAR2->VAR20, &VAR2->VAR21, (unsigned)VAR2->VAR22 * 4 * sizeof(VAR2->VAR20[0][0]));
    VAR9 = VAR2->VAR20;
    for (VAR6 = 0; VAR6 < 4; VAR6++)
        VAR9[0][VAR6] = 1 << (VAR2->VAR15 - 1);
    for (VAR8 = 0; VAR8 < VAR2->VAR23; VAR8++)
    {
        VAR24 *VAR25 = VAR2->VAR26.VAR27[0] + (VAR13 * VAR8);
        if (VAR2->VAR28 && VAR2->VAR29)
            VAR25 += VAR13 >> 1;
        for (VAR6 = 0; VAR6 < 4; VAR6++)
            VAR11[VAR6] = VAR10[VAR6] = VAR12[VAR6] = VAR9[0][VAR6];
        for (VAR7 = 0; VAR7 < VAR2->VAR22; VAR7++)
        {
            int VAR30 = VAR4;
            if (VAR2->VAR19 && !VAR2->VAR18)
            {
                VAR2->VAR18 = VAR2->VAR19;
                VAR17 = VAR7;
                VAR16 = VAR8;
                for (VAR6 = 0; VAR6 < 4; VAR6++)
                    VAR11[VAR6] = VAR10[VAR6] = VAR12[VAR6] = 1 << (VAR2->VAR15 - 1);
            }
            if (VAR8 == VAR16 || VAR8 == VAR16 + 1 && VAR7 < VAR17 || !VAR7)
                VAR30 = 1;
            for (VAR6 = 0; VAR6 < VAR3; VAR6++)
            {
                int VAR31, VAR32;
                VAR12[VAR6] = VAR11[VAR6];
                VAR11[VAR6] = VAR9[VAR7][VAR6];
                FUN4(VAR31, VAR12[VAR6], VAR11[VAR6], VAR10[VAR6], VAR30);
                VAR32 = FUN5(VAR2, VAR2->VAR33[VAR6]);
                if (VAR32 == 0xFFFF)
                    return -1;
                VAR10[VAR6] = VAR9[VAR7][VAR6] = VAR14 & (VAR31 + (VAR32 << VAR5));
            }
            if (VAR2->VAR19 && !--VAR2->VAR18)
            {
                FUN6(&VAR2->VAR34);
                FUN7(&VAR2->VAR34, 16);
            }
        }
        if (VAR2->VAR3 == 4)
        {
            for (VAR6 = 0; VAR6 < VAR3; VAR6++)
            {
                int VAR35 = VAR2->VAR36[VAR6];
                for (VAR7 = 0; VAR7 < VAR2->VAR22; VAR7++)
                {
                    VAR25[4 * VAR7 + 3 - VAR35] = VAR9[VAR7][VAR6];
                }
            }
        }
        else if (VAR2->VAR37)
        {
            for (VAR7 = 0; VAR7 < VAR2->VAR22; VAR7++)
            {
                VAR25[3 * VAR7 + 1] = VAR9[VAR7][0] - ((VAR9[VAR7][1] + VAR9[VAR7][2] - 0x200) >> 2);
                VAR25[3 * VAR7 + 0] = VAR9[VAR7][1] + VAR25[3 * VAR7 + 1];
                VAR25[3 * VAR7 + 2] = VAR9[VAR7][2] + VAR25[3 * VAR7 + 1];
            }
        }
        else if (VAR2->VAR38)
        {
            for (VAR7 = 0; VAR7 < VAR2->VAR22; VAR7++)
            {
                VAR25[3 * VAR7 + 1] = VAR9[VAR7][0] - ((VAR9[VAR7][1] + VAR9[VAR7][2]) >> 2);
                VAR25[3 * VAR7 + 0] = VAR9[VAR7][1] + VAR25[3 * VAR7 + 1];
                VAR25[3 * VAR7 + 2] = VAR9[VAR7][2] + VAR25[3 * VAR7 + 1];
            }
        }
        else
        {
            for (VAR6 = 0; VAR6 < VAR3; VAR6++)
            {
                int VAR35 = VAR2->VAR36[VAR6];
                for (VAR7 = 0; VAR7 < VAR2->VAR22; VAR7++)
                {
                    VAR25[3 * VAR7 + 2 - VAR35] = VAR9[VAR7][VAR6];
                }
            }
        }
    }
    return 0;