static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10, VAR11;
    VAR12 *VAR13 = VAR2->VAR14[0];
    int64_t VAR15;
    int VAR16 = VAR2->VAR5 & VAR17;
    int64_t VAR18 = VAR7->VAR19;
    if (VAR18 <= 0)
    {
        int64_t VAR20 = FUN2(VAR2->VAR21);
        if (VAR20 > 0 && VAR20 > VAR2->VAR22->VAR23)
            VAR18 = VAR20 - VAR2->VAR22->VAR23;
    }
    if (VAR7->VAR24 && (VAR7->VAR25 || (VAR16 && !VAR7->VAR26)))
    {
        int64_t VAR27 = FUN3(VAR13, VAR4, VAR5);
        FUN4(VAR2, VAR28, "");
        if (VAR27 < 0)
            return VAR27;
        VAR10 = &VAR13->VAR29[VAR27];
    }
    else if (VAR16 && VAR13->VAR30 > 0 && VAR18 > 0)
    {
        if (!VAR7->VAR26)
            FUN4(VAR2, VAR28, "");
        VAR10 = &VAR11;
        VAR4 = FUN5(VAR4, 0, VAR13->VAR30);
        VAR10->VAR4 = VAR4;
        VAR10->VAR31 = FUN6(VAR4, VAR18, VAR13->VAR30) + VAR2->VAR22->VAR23;
    }
    else
    {
        return -1;
    }
    VAR15 = FUN7(VAR2, VAR10->VAR31, VAR5);
    if (VAR15 < 0)
        return VAR15;
    if (VAR7->VAR26 && VAR10 == &VAR11 && VAR7->VAR32)
    {
        int VAR33 = FUN6(VAR13->VAR30, 1, VAR7->VAR32);
        VAR11.VAR4 = VAR33 * FUN6(VAR15 - VAR2->VAR22->VAR23, VAR7->VAR32, VAR7->VAR19);
    }
    FUN8(VAR2, VAR13, VAR10->VAR4);
    return 0;
}