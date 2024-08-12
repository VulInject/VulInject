void FUN1(VAR1 *VAR2)
{
    int VAR3;
    size_t VAR4;
    const char *VAR5;
    if (VAR2->VAR6)
    {
        return;
    }
    VAR5 = FUN2(VAR2->VAR7);
    VAR4 = FUN3(VAR2->VAR7);
    if (VAR4 && !VAR2->VAR8)
    {
        VAR3 = FUN4(VAR2->VAR9, (const VAR10 *)VAR5, VAR4);
        if (VAR3 == VAR4)
        {
            FUN5(VAR2->VAR7);
            VAR2->VAR7 = FUN6();
            return;
        }
        if (VAR3 > 0)
        {
            VAR11 *VAR12 = FUN7(VAR5 + VAR3);
            FUN5(VAR2->VAR7);
            VAR2->VAR7 = VAR12;
        }
        if (VAR2->VAR13 == 0)
        {
            VAR2->VAR13 = FUN8(VAR2->VAR9, VAR14, VAR15, VAR2);
        }
    }
}