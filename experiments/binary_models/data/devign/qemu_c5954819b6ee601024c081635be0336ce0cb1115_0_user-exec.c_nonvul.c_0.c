static inline int FUN1(uintptr_t VAR1, unsigned long VAR2, int VAR3, VAR4 *VAR5, void *VAR6)
{
    VAR7 *VAR8;
    int VAR9;
    if (VAR10)
    {
        VAR11 = VAR10;
    }
    FUN2("", VAR1, VAR2, VAR3, *(unsigned long *)VAR5);
    if (VAR3 && FUN3(VAR2) && FUN4(FUN5(VAR2), VAR1, VAR6))
    {
        return 1;
    }
    VAR9 = FUN6(VAR11, VAR2, VAR3, VAR12);
    if (VAR9 < 0)
    {
        return 0;
    }
    if (VAR9 == 0)
    {
        return 1;
    }
    VAR8 = FUN7(VAR1);
    if (VAR8)
    {
        FUN8(VAR8, VAR11, VAR1);
    }
    FUN9(VAR13, VAR5, NULL);
    FUN10(VAR11);
    return 1;
}