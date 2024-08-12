static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    int VAR8;
    int VAR9;
    int VAR10;
    int VAR11;
    int VAR12[VAR13];
    if (VAR2->VAR14)
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR15; VAR5++)
            VAR2->VAR16[VAR5].VAR17 = VAR18;
    }
    else
    {
        VAR8 = FUN2(VAR4, 3);
        if (VAR8 == 0)
        {
            VAR12[FUN2(VAR4, 3)] = VAR5;
        }
        for (VAR5 = 0; VAR5 < VAR2->VAR19; VAR5++)
        {
            for (VAR6 = 0; VAR6 < 4; VAR6++)
            {
                VAR9 = VAR2->VAR20[VAR5 * 4 + VAR6];
                if ((VAR9 == -1) || (VAR2->VAR21[VAR9] == VAR22))
                    continue;
                if (VAR9 >= VAR2->VAR23)
                {
                    FUN3(VAR2->VAR24, VAR25, "", VAR9, VAR2->VAR23);
                    return 1;
                }
                if (VAR8 == 7)
                    VAR11 = FUN2(VAR4, 3);
                else if (VAR8 == 0)
                    VAR11 = VAR12[FUN4(VAR4, VAR2->VAR26.VAR27, 3, 3)];
                else
                    VAR11 = VAR28[VAR8 - 1][FUN4(VAR4, VAR2->VAR26.VAR27, 3, 3)];
                VAR2->VAR21[VAR9] = VAR11;
                for (VAR7 = 0; VAR7 < 6; VAR7++)
                {
                    VAR10 = VAR2->VAR29[VAR9 * 6 + VAR7];
                    if (VAR10 == -1)
                        continue;
                    if (VAR10 >= VAR2->VAR15)
                    {
                        FUN3(VAR2->VAR24, VAR25, "", VAR10, VAR2->VAR15);
                        return 1;
                    }
                    if (VAR2->VAR16[VAR10].VAR17 != VAR22)
                        VAR2->VAR16[VAR10].VAR17 = VAR11;
                }
            }
        }
    }
    return 0;