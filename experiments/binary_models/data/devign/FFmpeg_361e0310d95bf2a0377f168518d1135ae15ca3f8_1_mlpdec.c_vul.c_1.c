static int FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR8[VAR5];
    unsigned int VAR9;
    int VAR10;
    if (VAR7->VAR11 & VAR12)
        if (FUN2(VAR4))
            VAR7->VAR11 = FUN3(VAR4, 8);
    if (VAR7->VAR11 & VAR13)
        if (FUN2(VAR4))
        {
            VAR7->VAR14 = FUN3(VAR4, 9);
            if (VAR7->VAR14 < 8 || VAR7->VAR14 > VAR2->VAR15)
            {
                FUN4(VAR2->VAR16, VAR17, "");
                VAR7->VAR14 = 0;
                return VAR18;
            }
        }
    if (VAR7->VAR11 & VAR19)
        if (FUN2(VAR4))
            if ((VAR10 = FUN5(VAR2, VAR5, VAR4)) < 0)
                return VAR10;
    if (VAR7->VAR11 & VAR20)
        if (FUN2(VAR4))
        {
            for (VAR9 = 0; VAR9 <= VAR7->VAR21; VAR9++)
            {
                VAR7->VAR22[VAR9] = FUN6(VAR4, 4);
                if (VAR7->VAR22[VAR9] < 0)
                {
                    FUN7(VAR2->VAR16, "");
                    VAR7->VAR22[VAR9] = 0;
                }
            }
            if (VAR5 == VAR2->VAR23)
                VAR2->VAR24.VAR25 = VAR2->VAR24.FUN8(VAR7->VAR26, VAR7->VAR22, VAR7->VAR21, VAR2->VAR16->VAR27 == VAR28);
        }
    if (VAR7->VAR11 & VAR29)
        if (FUN2(VAR4))
            for (VAR9 = 0; VAR9 <= VAR7->VAR30; VAR9++)
            {
                VAR31 *VAR32 = &VAR7->VAR33[VAR9];
                VAR7->VAR34[VAR9] = FUN3(VAR4, 4);
                VAR32->VAR35 = FUN9(VAR2, VAR5, VAR9);
            }
    for (VAR9 = VAR7->VAR36; VAR9 <= VAR7->VAR30; VAR9++)
        if (FUN2(VAR4))
            if ((VAR10 = FUN10(VAR2, VAR5, VAR4, VAR9)) < 0)
                return VAR10;
    return 0;
}