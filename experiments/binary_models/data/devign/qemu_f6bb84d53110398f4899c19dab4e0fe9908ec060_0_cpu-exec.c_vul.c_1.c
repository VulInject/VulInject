static inline VAR1 *FUN1(VAR2 *VAR3, VAR1 *VAR4, int VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR3->VAR8;
    VAR1 *VAR9;
    target_ulong VAR10, VAR11;
    uint32_t VAR12;
    bool VAR13 = false;
    FUN2(VAR7, &VAR11, &VAR10, &VAR12);
    VAR9 = FUN3(&VAR3->VAR14[FUN4(VAR11)]);
    if (FUN5(!VAR9 || VAR9->VAR11 != VAR11 || VAR9->VAR10 != VAR10 || VAR9->VAR12 != VAR12 || VAR9->VAR15 != *VAR3->VAR16))
    {
        VAR9 = FUN6(VAR3, VAR11, VAR10, VAR12);
        if (!VAR9)
        {
            FUN7();
            FUN8();
            VAR13 = true;
            VAR9 = FUN6(VAR3, VAR11, VAR10, VAR12);
            if (!VAR9)
            {
                VAR9 = FUN9(VAR3, VAR11, VAR10, VAR12, 0);
            }
            FUN10();
        }
        FUN11(&VAR3->VAR14[FUN4(VAR11)], VAR9);
    }
    if (VAR9->VAR17[1] != -1)
    {
        VAR4 = NULL;
    }
    if (VAR4 && !FUN12(VAR18))
    {
        if (!VAR13)
        {
            FUN8();
            VAR13 = true;
        }
        if (!VAR9->VAR19)
        {
            FUN13(VAR4, VAR5, VAR9);
        }
    }
    if (VAR13)
    {
        FUN14();
    }
    return VAR9;
}