static int FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR8[VAR5];
    unsigned int VAR9;
    if (VAR7->VAR10 & VAR11)
        if (FUN2(VAR4))
            VAR7->VAR10 = FUN3(VAR4, 8);
    if (VAR7->VAR10 & VAR12)
        if (FUN2(VAR4))
        {
            VAR7->VAR13 = FUN3(VAR4, 9);
            if (VAR7->VAR13 < 8 || VAR7->VAR13 > VAR2->VAR14)
            {
                FUN4(VAR2->VAR15, VAR16, "");
                VAR7->VAR13 = 0;
                return -1;
            }
        }
    if (VAR7->VAR10 & VAR17)
        if (FUN2(VAR4))
        {
            if (FUN5(VAR2, VAR7, VAR4) < 0)
                return -1;
        }
    if (VAR7->VAR10 & VAR18)
        if (FUN2(VAR4))
            for (VAR9 = 0; VAR9 <= VAR7->VAR19; VAR9++)
            {
                VAR7->VAR20[VAR9] = FUN6(VAR4, 4);
                FUN7(VAR2->VAR15, "", VAR9, VAR7->VAR20[VAR9]);
            }
    if (VAR7->VAR10 & VAR21)
        if (FUN2(VAR4))
            for (VAR9 = 0; VAR9 <= VAR7->VAR22; VAR9++)
            {
                VAR23 *VAR24 = &VAR2->VAR25[VAR9];
                VAR7->VAR26[VAR9] = FUN3(VAR4, 4);
                VAR24->VAR27 = FUN8(VAR2, VAR5, VAR9);
            }
    for (VAR9 = VAR7->VAR28; VAR9 <= VAR7->VAR22; VAR9++)
        if (FUN2(VAR4))
        {
            if (FUN9(VAR2, VAR5, VAR4, VAR9) < 0)
                return -1;
        }
    return 0;
}