static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    int VAR8 = VAR9, VAR10 = 0;
    int VAR11, VAR12, VAR13;
    for (VAR13 = 1; VAR13 < VAR2->VAR14; VAR13++)
    {
        VAR4->VAR15 = VAR13;
        VAR2->FUN2(VAR2, VAR16, NULL, NULL, VAR4->VAR17.VAR18);
    }
    VAR6 = VAR7 = 2 << VAR19;
    VAR5 = VAR4->VAR5;
    for (;;)
    {
        int VAR20 = 0;
        int VAR21 = 0;
        if (VAR5 == VAR10)
        {
            VAR5++;
            VAR21 = 1;
        }
        for (VAR12 = 0; VAR12 < VAR4->VAR17.VAR18; VAR12++)
        {
            for (VAR11 = 0; VAR11 < VAR4->VAR17.VAR22; VAR11++)
            {
                unsigned VAR23 = VAR24;
                int VAR15 = 1;
                int VAR25 = VAR12 * VAR4->VAR17.VAR22 + VAR11;
                for (VAR13 = 1; VAR13 < VAR2->VAR14; VAR13++)
                {
                    unsigned VAR26 = VAR4->VAR27[VAR13][VAR25].VAR20 * VAR5 + (VAR4->VAR27[VAR13][VAR25].VAR28 << VAR19);
                    if (VAR26 < VAR23)
                    {
                        VAR23 = VAR26;
                        VAR15 = VAR13;
                    }
                }
                VAR20 += VAR4->VAR27[VAR15][VAR25].VAR20;
                VAR4->VAR29[VAR25] = VAR15;
                VAR4->VAR30[VAR25] = VAR4->VAR27[VAR15][VAR25].VAR20;
            }
            VAR20 = (VAR20 + 31) & ~31;
            if (VAR20 > VAR4->VAR31)
                break;
        }
        if (VAR21)
        {
            if (VAR20 > VAR4->VAR31)
                return -1;
            break;
        }
        if (VAR20 < VAR4->VAR31)
        {
            VAR8 = FUN3(VAR5, VAR8);
            if (VAR10 != 0)
                VAR5 = (VAR5 + VAR10) >> 1;
            else
                VAR5 -= VAR7;
            VAR7 *= 5;
            VAR6 = 1 << VAR19;
            VAR5 = FUN4(1, VAR5);
            if (VAR5 == VAR8)
                break;
        }
        else
        {
            VAR10 = FUN4(VAR5, VAR10);
            if (VAR8 != VAR9)
                VAR5 = (VAR5 + VAR8) >> 1;
            else if ((VAR32)VAR5 + VAR6 > VAR9)
                return -1;
            else
                VAR5 += VAR6;
            VAR6 = FUN3((VAR32)VAR6 * 5, VAR9);
            VAR7 = 1 << VAR19;
        }
    }
    VAR4->VAR5 = VAR5;
    return 0;
}