VAR1 *FUN1(uint32_t VAR2, uint32_t VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR1 *VAR12;
    bool VAR13 = VAR3 && VAR5;
    VAR7 = FUN2(NULL, VAR14);
    if (!VAR13)
    {
        FUN3(VAR7, "", false);
    }
    FUN4(VAR7);
    VAR9 = FUN5(VAR7);
    VAR11 = FUN6(VAR7);
    FUN7(VAR9, VAR2, &VAR11->VAR15);
    VAR12 = FUN8(VAR7);
    if (VAR12->VAR16)
    {
        VAR12->VAR5 = VAR5;
        VAR12->VAR17 = 0;
        FUN7(VAR9, VAR3, &VAR12->VAR18);
    }
    return VAR12;
}