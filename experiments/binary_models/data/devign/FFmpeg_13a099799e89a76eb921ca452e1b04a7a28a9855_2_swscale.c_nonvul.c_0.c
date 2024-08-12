FUN1(const VAR1 *VAR2, const VAR1 **VAR3, int VAR4, const VAR1 *VAR5, const VAR1 **VAR6, const VAR1 **VAR7, int VAR8, const VAR1 **VAR9, VAR10 *VAR11[4], int VAR12, int VAR13, int VAR14, int VAR15)
{
    int VAR16;
    int VAR17 = 11 + 16 - VAR15;
    VAR10 *VAR18 = VAR11[0], *VAR19 = VAR11[1], *VAR20 = VAR11[2], *VAR21 = VAR22 ? VAR11[3] : NULL;
    if (VAR14)
    {
        if (VAR15 == 16)
        {
            FUN2(VAR23, FUN3(VAR24 >> VAR17));
        }
        else
        {
            FUN2(VAR23, FUN4(VAR24 >> VAR17, VAR15));
        }
    }
    else
    {
        if (VAR15 == 16)
        {
            FUN5(VAR23, FUN3(VAR24 >> VAR17));
        }
        else
        {
            FUN5(VAR23, FUN4(VAR24 >> VAR17, VAR15));
        }
    }
    for (VAR16 = 0; VAR16 < VAR12; VAR16++)
    {
        int VAR24 = 1 << (26 - VAR15);
        int VAR25;
        for (VAR25 = 0; VAR25 < VAR4; VAR25++)
            VAR24 += VAR3[VAR25][VAR16] * VAR2[VAR25];
        FUN6(&VAR18[VAR16], VAR24);
    }
    if (VAR19)
    {
        for (VAR16 = 0; VAR16 < VAR13; VAR16++)
        {
            int VAR26 = 1 << (26 - VAR15);
            int VAR27 = 1 << (26 - VAR15);
            int VAR25;
            for (VAR25 = 0; VAR25 < VAR8; VAR25++)
            {
                VAR26 += VAR6[VAR25][VAR16] * VAR5[VAR25];
                VAR27 += VAR7[VAR25][VAR16] * VAR5[VAR25];
            }
            FUN6(&VAR19[VAR16], VAR26);
            FUN6(&VAR20[VAR16], VAR27);
        }
    }
    if (VAR22 && VAR21)
    {
        for (VAR16 = 0; VAR16 < VAR12; VAR16++)
        {
            int VAR24 = 1 << (26 - VAR15);
            int VAR25;
            for (VAR25 = 0; VAR25 < VAR4; VAR25++)
                VAR24 += VAR9[VAR25][VAR16] * VAR2[VAR25];
            FUN6(&VAR21[VAR16], VAR24);
        }
    }
}