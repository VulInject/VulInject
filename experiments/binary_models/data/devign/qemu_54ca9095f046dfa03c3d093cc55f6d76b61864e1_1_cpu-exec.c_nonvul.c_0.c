static inline int FUN1(unsigned long VAR1, unsigned long VAR2, int VAR3, VAR4 *VAR5, void *VAR6)
{
    VAR7 *VAR8;
    int VAR9;
    if (VAR10)
        VAR11 = VAR10;
    FUN2("", VAR1, VAR2, VAR3, *(unsigned long *)VAR5);
    if (VAR3 && FUN3(VAR2, VAR1, VAR6))
    {
        return 1;
    }
    VAR9 = FUN4(VAR11, VAR2, VAR3, ((VAR11->VAR12 & VAR13) == 3), 0);
    if (VAR9 < 0)
        return 0;
    if (VAR9 == 0)
        return 1;
    VAR8 = FUN5(VAR1);
    if (VAR8)
    {
        FUN6(VAR8, VAR11, VAR1, VAR6);
    }
    if (VAR9 == 1)
    {
        FUN7("", VAR11->VAR14, VAR11->VAR15[2], VAR11->VAR16);
        FUN8(VAR17, VAR5, NULL);
        FUN9(VAR11->VAR18, VAR11->VAR16);
    }
    else
    {
        VAR11->VAR12 |= VAR19;
        FUN10(VAR11, VAR6);
    }
    return 1;
}