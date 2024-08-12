static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    FUN2(&VAR7->VAR13, VAR4, VAR5 * 8);
    VAR10 = FUN3(VAR7);
    if (VAR10 < 0)
    {
        fprintf(VAR14, "");
        return -1;
    }
    if (VAR7->VAR15 >= VAR7->VAR16 || VAR7->VAR17 >= VAR7->VAR18)
    {
        fprintf(VAR14, "", VAR7->VAR15, VAR7->VAR17);
        return -1;
    }
    VAR11 = VAR7->VAR17 * VAR7->VAR16 + VAR7->VAR15;
    VAR12 = VAR7->VAR16 * VAR7->VAR18 - VAR11;
    if (VAR10 > VAR12)
    {
        fprintf(VAR14, "");
        return -1;
    }
    if (VAR7->VAR15 == 0 && VAR7->VAR17 == 0)
    {
        if (FUN4(VAR7, VAR2) < 0)
            return -1;
    }
    FUN5("", VAR7->VAR19);
    VAR7->VAR20 = 8;
    VAR7->VAR21 = 8;
    VAR7->VAR22[0] = 0;
    VAR7->VAR22[1] = 0;
    VAR7->VAR22[2] = 0;
    if (VAR7->VAR17 == 0)
        VAR7->VAR23 = 1;
    VAR7->VAR24[0] = VAR7->VAR24[1] = VAR7->VAR24[2] = VAR7->VAR24[3] = VAR7->VAR16 * 2 + 2;
    VAR7->VAR24[4] = VAR7->VAR24[5] = VAR7->VAR16 + 2;
    FUN6(VAR7);
    for (VAR9 = 0; VAR9 < VAR10; VAR9++)
    {
        FUN7(VAR7);
        FUN5("", VAR7->VAR15, VAR7->VAR17);
        VAR7->VAR25.FUN8(VAR7->VAR26[0]);
        VAR7->VAR27 = VAR28;
        VAR7->VAR29 = VAR30;
        if (FUN9(VAR7, VAR7->VAR26) == VAR31)
        {
            fprintf(VAR14, "", VAR7->VAR15, VAR7->VAR17);
            return -1;
        }
        FUN10(VAR7, VAR7->VAR26);
        if (++VAR7->VAR15 == VAR7->VAR16)
        {
            VAR7->VAR15 = 0;
            VAR7->VAR17++;
            FUN6(VAR7);
            VAR7->VAR23 = 0;
        }
    }
    return VAR5;
}