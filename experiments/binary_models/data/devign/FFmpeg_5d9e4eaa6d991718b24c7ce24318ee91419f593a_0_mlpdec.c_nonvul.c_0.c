static int FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5, unsigned int VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR9[VAR5].VAR10[VAR6];
    const int VAR11 = VAR6 ? VAR12 : VAR13;
    const char VAR14 = VAR6 ? '' : '';
    int VAR15, VAR16;
    assert(VAR6 < 2);
    if (VAR2->VAR17[VAR5][VAR6]++ > 1)
    {
        FUN2(VAR2->VAR18, VAR19, "");
        return -1;
    }
    VAR16 = FUN3(VAR4, 4);
    if (VAR16 > VAR11)
    {
        FUN2(VAR2->VAR18, VAR19, "", VAR14, VAR16, VAR11);
        return -1;
    }
    VAR8->VAR16 = VAR16;
    if (VAR16 > 0)
    {
        int VAR20, VAR21;
        VAR8->VAR22 = FUN3(VAR4, 4);
        VAR20 = FUN3(VAR4, 5);
        VAR21 = FUN3(VAR4, 3);
        if (VAR20 < 1 || VAR20 > 16)
        {
            FUN2(VAR2->VAR18, VAR19, "", VAR14);
            return -1;
        }
        if (VAR20 + VAR21 > 16)
        {
            FUN2(VAR2->VAR18, VAR19, "", VAR14);
            return -1;
        }
        for (VAR15 = 0; VAR15 < VAR16; VAR15++)
            VAR8->VAR23[VAR15] = FUN4(VAR4, VAR20) << VAR21;
        if (FUN5(VAR4))
        {
            int VAR24, VAR25;
            if (VAR6 == VAR26)
            {
                FUN2(VAR2->VAR18, VAR19, "");
                return -1;
            }
            VAR24 = FUN3(VAR4, 4);
            VAR25 = FUN3(VAR4, 4);
            for (VAR15 = 0; VAR15 < VAR16; VAR15++)
                VAR8->VAR27[VAR15] = FUN4(VAR4, VAR24) << VAR25;
        }
    }
    return 0;
}