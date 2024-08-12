static int FUN1(VAR1 *VAR2, const VAR3 **VAR4, int *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR6 *VAR9 = VAR7->VAR10;
    if (!VAR9)
    {
        *VAR5 = FUN2(VAR2->VAR11) - VAR7->VAR12;
    }
    else
    {
        *VAR5 = VAR9->VAR12 - VAR7->VAR12;
        FUN3(VAR2, VAR7, VAR9, 0);
    }
    if (VAR7->VAR13.VAR14 != VAR2->VAR15->VAR14 || !VAR2->VAR15->VAR16)
    {
        VAR2->VAR15->VAR14 = VAR7->VAR13.VAR14;
        FUN4(VAR2->VAR15);
    }
    VAR2->VAR15->VAR17 = VAR7->VAR13.VAR18;
    VAR2->VAR19->VAR20 = VAR7->VAR13.VAR21;
    *VAR4 = FUN5(VAR2, VAR7->VAR12, *VAR5, &VAR2->VAR22, &VAR2->VAR23);
    VAR2->VAR24 = 0;
    if (VAR9)
        return VAR9->VAR12 - FUN2(VAR2->VAR11);
    return 0;
}