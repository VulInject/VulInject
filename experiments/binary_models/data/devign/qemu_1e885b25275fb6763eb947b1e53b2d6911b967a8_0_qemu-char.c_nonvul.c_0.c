static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR3);
    bool VAR8 = VAR7->FUN3(VAR7->VAR9) > 0;
    bool VAR10 = VAR7->VAR11 != NULL;
    if (VAR10 == VAR8)
    {
        return VAR12;
    }
    if (VAR8)
    {
        VAR7->VAR11 = FUN4(VAR7->VAR13, VAR14 | VAR15 | VAR16);
        FUN5(VAR7->VAR11, VAR7->VAR17, VAR7->VAR9, NULL);
        FUN6(VAR7->VAR11, NULL);
    }
    else
    {
        FUN7(VAR7->VAR11);
        FUN8(VAR7->VAR11);
        VAR7->VAR11 = NULL;
    }
    return VAR12;
}