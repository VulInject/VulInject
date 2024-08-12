VAR1 *FUN1(VAR2 **VAR3)
{
    VAR1 *VAR4 = NULL, **VAR5 = &VAR4;
    VAR6 *VAR7;
    VAR8 *VAR9 = NULL;
    while ((VAR9 = FUN2(VAR9, &VAR7)))
    {
        VAR10 *VAR11 = FUN3(VAR7);
        FUN4(VAR11);
        if (VAR7->VAR12)
        {
            VAR1 *VAR13 = FUN5(VAR1, 1);
            VAR13->VAR14 = FUN6(VAR7->VAR12);
            *VAR5 = VAR13;
            VAR5 = &VAR13->VAR15;
        }
        FUN7(VAR11);
    }
    return VAR4;
}