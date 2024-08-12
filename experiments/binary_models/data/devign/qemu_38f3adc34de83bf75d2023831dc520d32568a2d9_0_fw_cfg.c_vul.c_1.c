VAR1 *FUN1(hwaddr VAR2, hwaddr VAR3, uint32_t VAR4, hwaddr VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR1 *VAR12;
    bool VAR13 = VAR5 && VAR7;
    VAR9 = FUN2(NULL, VAR14);
    FUN3(VAR9, "", VAR4);
    if (!VAR13)
    {
        FUN4(VAR9, "", false);
    }
    FUN5(VAR9);
    VAR11 = FUN6(VAR9);
    FUN7(VAR11, 0, VAR2);
    FUN7(VAR11, 1, VAR3);
    VAR12 = FUN8(VAR9);
    if (VAR12->VAR15)
    {
        VAR12->VAR7 = VAR7;
        VAR12->VAR5 = 0;
        FUN7(VAR11, 2, VAR5);
    }
    return VAR12;
}