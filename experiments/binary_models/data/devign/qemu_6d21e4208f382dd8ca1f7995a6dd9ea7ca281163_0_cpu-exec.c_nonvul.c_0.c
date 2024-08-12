static inline VAR1 *FUN1(VAR2 *VAR3, VAR1 *VAR4, int VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR3->VAR8;
    VAR1 *VAR9;
    target_ulong VAR10, VAR11;
    uint32_t VAR12;
    FUN2(VAR7, &VAR11, &VAR10, &VAR12);
    FUN3();
    VAR9 = FUN4(&VAR3->VAR13[FUN5(VAR11)]);
    if (FUN6(!VAR9 || VAR9->VAR11 != VAR11 || VAR9->VAR10 != VAR10 || VAR9->VAR12 != VAR12))
    {
        VAR9 = FUN7(VAR3, VAR11, VAR10, VAR12);
    }
    if (VAR9->VAR14[1] != -1)
    {
        VAR4 = NULL;
    }
    if (VAR4 && !FUN8(VAR15))
    {
        if (VAR3->VAR16)
        {
            VAR3->VAR16 = false;
        }
        else if (!VAR9->VAR17)
        {
            FUN9(VAR4, VAR5, VAR9);
        }
    }
    FUN10();
    return VAR9;
}