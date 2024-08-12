static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR8;
    uint64_t VAR9;
    int VAR10, VAR11;
    FUN2(VAR2, VAR7, 8, 1);
    VAR9 = FUN3(VAR7);
    if (VAR9 != 1)
    {
        FUN4(VAR4, VAR12, "", VAR9);
        return -1;
    }
    VAR2->VAR13 = FUN3(VAR7);
    for (VAR10 = 0; VAR10 < 256;)
    {
        int VAR14 = FUN3(VAR7);
        int VAR15 = FUN3(VAR7);
        int VAR16 = FUN3(VAR7);
        int VAR17 = FUN3(VAR7);
        int VAR18 = FUN3(VAR7);
        if (VAR18 == 0 || VAR10 + VAR18 > 256)
        {
            FUN4(VAR4, VAR12, "", VAR18, VAR10);
            return -1;
        }
        if ((VAR14 & VAR19) && VAR14 != 1)
        {
            if (!(VAR14 & VAR20) || !(VAR14 & VAR21))
            {
                FUN4(VAR4, VAR12, "");
                return -1;
            }
        }
        for (VAR11 = 0; VAR11 < VAR18; VAR11++, VAR10++)
        {
            if (VAR15 > VAR2->VAR13 + 1)
            {
                FUN4(VAR4, VAR12, "");
                return -1;
            }
            VAR2->VAR22[VAR10].VAR23 = VAR14;
            VAR2->VAR22[VAR10].VAR24 = VAR15;
            VAR2->VAR22[VAR10].VAR25 = VAR16;
            VAR2->VAR22[VAR10].VAR26 = VAR17;
            if (++VAR17 >= VAR16)
            {
                VAR17 = 0;
                VAR15++;
            }
        }
    }
    if (VAR2->VAR22[''].VAR23 != 1)
    {
        FUN4(VAR4, VAR12, "");
        return -1;
    }
    if (FUN5(VAR7))
    {
        FUN4(VAR4, VAR12, "");
        return -1;
    }
    return 0;
}