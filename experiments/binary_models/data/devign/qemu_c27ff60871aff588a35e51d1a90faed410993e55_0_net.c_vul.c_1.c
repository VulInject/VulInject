void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9;
    if (VAR2->VAR10)
        return;
    FUN2("", VAR7->VAR11);
    FUN3(VAR12, VAR4, VAR5);
    if (VAR7->VAR13)
    {
        VAR9 = FUN4(sizeof(VAR8) + VAR5);
        VAR9->VAR14 = VAR7->VAR15;
        VAR9->VAR16 = VAR2;
        VAR9->VAR5 = VAR5;
        memcpy(VAR9->VAR17, VAR4, VAR5);
        VAR7->VAR15 = VAR9;
    }
    else
    {
        VAR7->VAR13 = 1;
        FUN5(VAR2, VAR4, VAR5);
        while ((VAR9 = VAR7->VAR15) != NULL)
        {
            FUN5(VAR9->VAR16, VAR9->VAR17, VAR9->VAR5);
            VAR7->VAR15 = VAR9->VAR14;
            FUN6(VAR9);
        }
        VAR7->VAR13 = 0;
    }
}