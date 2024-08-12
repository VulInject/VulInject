static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    int VAR15, VAR16, VAR17, VAR18;
    VAR9 *VAR19;
    char VAR20[32];
    static int VAR21 = 0;
    VAR11 = -1;
    VAR12 = -1;
    VAR13 = 0;
    VAR14 = 0;
    for (VAR6 = VAR2->VAR22; VAR6 != NULL; VAR6 = VAR6->VAR23)
    {
        VAR4 = FUN2(VAR2, VAR6->VAR24);
        if (VAR11 == -1)
        {
            VAR11 = VAR6->VAR11;
            VAR12 = VAR6->VAR12;
            VAR13 = VAR4->VAR13;
            VAR14 = VAR4->VAR14;
        }
        else
        {
            if (VAR6->VAR11 < VAR11)
            {
                VAR13 += (VAR11 - VAR6->VAR11);
                VAR11 = VAR6->VAR11;
            }
            if (VAR6->VAR12 < VAR12)
            {
                VAR14 += (VAR12 - VAR6->VAR12);
                VAR12 = VAR6->VAR12;
            }
            if (VAR6->VAR11 + VAR4->VAR13 > VAR11 + VAR13)
            {
                VAR13 = VAR6->VAR11 + VAR4->VAR13 - VAR11;
            }
            if (VAR6->VAR12 + VAR4->VAR14 > VAR12 + VAR14)
            {
                VAR14 = VAR6->VAR12 + VAR4->VAR14 - VAR12;
            }
        }
    }
    if (VAR11 >= 0)
    {
        VAR19 = FUN3(VAR13 * VAR14 * 4);
        for (VAR6 = VAR2->VAR22; VAR6 != NULL; VAR6 = VAR6->VAR23)
        {
            VAR4 = FUN2(VAR2, VAR6->VAR24);
            VAR18 = VAR6->VAR11 - VAR11;
            VAR17 = VAR6->VAR12 - VAR12;
            VAR8 = FUN4(VAR2, VAR4->VAR8);
            if (VAR8 == 0)
                VAR8 = &VAR25;
            switch (VAR4->VAR26)
            {
            case 2:
                VAR10 = VAR8->VAR27;
                break;
            case 8:
                VAR10 = VAR8->VAR28;
                break;
            case 4:
            default:
                VAR10 = VAR8->VAR29;
                break;
            }
            for (VAR16 = 0; VAR16 < VAR4->VAR14; VAR16++)
            {
                for (VAR15 = 0; VAR15 < VAR4->VAR13; VAR15++)
                {
                    VAR19[((VAR16 + VAR17) * VAR13) + VAR18 + VAR15] = VAR10[VAR4->VAR19[VAR16 * VAR4->VAR13 + VAR15]];
                }
            }
        }
        snprintf(VAR20, sizeof(VAR20), "", VAR21);
        FUN5(VAR20, VAR19, VAR13, VAR14);
        FUN6(VAR19);
    }
    VAR21++;
}