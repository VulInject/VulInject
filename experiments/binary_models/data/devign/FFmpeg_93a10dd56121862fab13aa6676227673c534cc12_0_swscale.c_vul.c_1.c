FUN1(const VAR1 *VAR2, const VAR3 **VAR4, int VAR5, const VAR1 *VAR6, const VAR3 **VAR7, const VAR3 **VAR8, int VAR9, const VAR3 **VAR10, VAR11 *VAR12[4], int VAR13, int VAR14, int VAR15, int VAR16)
{
    int VAR17;
    int VAR18 = VAR16 == 16;
    VAR11 *VAR19 = VAR12[0], *VAR20 = VAR12[1], *VAR21 = VAR12[2], *VAR22 = VAR23 ? VAR12[3] : NULL;
    int VAR24 = 11 + 4 * VAR18 + 16 - VAR16;
    if (VAR15)
    {
        if (VAR16 == 16)
        {
            FUN2(VAR25, FUN3(VAR26 >> VAR24));
        }
        else
        {
            FUN2(VAR25, FUN4(VAR26 >> VAR24, VAR16));
        }
    }
    else
    {
        if (VAR16 == 16)
        {
            FUN5(VAR25, FUN3(VAR26 >> VAR24));
        }
        else
        {
            FUN5(VAR25, FUN4(VAR26 >> VAR24, VAR16));
        }
    }
    for (VAR17 = 0; VAR17 < VAR13; VAR17++)
    {
        int VAR26 = 1 << (26 - VAR16 + 4 * VAR18);
        int VAR27;
        for (VAR27 = 0; VAR27 < VAR5; VAR27++)
            VAR26 += (VAR18 ? VAR4[VAR27][VAR17] : ((VAR1 **)VAR4)[VAR27][VAR17]) * VAR2[VAR27];
        FUN6(&VAR19[VAR17], VAR26);
    }
    if (VAR20)
    {
        for (VAR17 = 0; VAR17 < VAR14; VAR17++)
        {
            int VAR28 = 1 << (26 - VAR16 + 4 * VAR18);
            int VAR29 = 1 << (26 - VAR16 + 4 * VAR18);
            int VAR27;
            for (VAR27 = 0; VAR27 < VAR9; VAR27++)
            {
                VAR28 += (VAR18 ? VAR7[VAR27][VAR17] : ((VAR1 **)VAR7)[VAR27][VAR17]) * VAR6[VAR27];
                VAR29 += (VAR18 ? VAR8[VAR27][VAR17] : ((VAR1 **)VAR8)[VAR27][VAR17]) * VAR6[VAR27];
            }
            FUN6(&VAR20[VAR17], VAR28);
            FUN6(&VAR21[VAR17], VAR29);
        }
    }
    if (VAR23 && VAR22)
    {
        for (VAR17 = 0; VAR17 < VAR13; VAR17++)
        {
            int VAR26 = 1 << (26 - VAR16 + 4 * VAR18);
            int VAR27;
            for (VAR27 = 0; VAR27 < VAR5; VAR27++)
                VAR26 += (VAR18 ? VAR10[VAR27][VAR17] : ((VAR1 **)VAR10)[VAR27][VAR17]) * VAR2[VAR27];
            FUN6(&VAR22[VAR17], VAR26);
        }
    }
}