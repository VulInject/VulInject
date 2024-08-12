static inline VAR1 *FUN1(VAR2 *VAR3, VAR1 *VAR4, int VAR5, uint32_t VAR6)
{
    VAR1 *VAR7;
    target_ulong VAR8, VAR9;
    uint32_t VAR10;
    bool VAR11 = false;
    VAR7 = FUN2(VAR3, &VAR9, &VAR8, &VAR10, VAR6);
    if (VAR7 == NULL)
    {
        FUN3();
        FUN4();
        VAR11 = true;
        VAR7 = FUN5(VAR3, VAR9, VAR8, VAR10, VAR6);
        if (FUN6(VAR7 == NULL))
        {
            VAR7 = FUN7(VAR3, VAR9, VAR8, VAR10, VAR6);
        }
        FUN8();
        FUN9(&VAR3->VAR12[FUN10(VAR9)], VAR7);
    }
    if (VAR7->VAR13[1] != -1)
    {
        VAR4 = NULL;
    }
    if (VAR4 && !FUN11(VAR14))
    {
        if (!VAR11)
        {
            FUN4();
            VAR11 = true;
        }
        if (!(VAR7->VAR15 & VAR16))
        {
            FUN12(VAR4, VAR5, VAR7);
        }
    }
    if (VAR11)
    {
        FUN13();
    }
    return VAR7;
}