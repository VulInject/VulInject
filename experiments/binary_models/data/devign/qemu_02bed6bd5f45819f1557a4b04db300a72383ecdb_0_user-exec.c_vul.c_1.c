static inline int FUN1(uintptr_t VAR1, unsigned long VAR2, int VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10;
    FUN2("", VAR1, VAR2, VAR3, *(unsigned long *)VAR5);
    if (VAR3 && FUN3(VAR2))
    {
        switch (FUN4(FUN5(VAR2), VAR1))
        {
        case 0:
            break;
        case 1:
            return 1;
        case 2:
            FUN6(VAR11, VAR5);
            FUN7();
        default:
            FUN7();
        }
    }
    VAR2 = FUN8(VAR2);
    VAR7 = VAR11;
    VAR9 = FUN9(VAR7);
    FUN10(VAR9->VAR12);
    VAR10 = VAR9->FUN11(VAR7, VAR2, VAR3, VAR13);
    if (VAR10 < 0)
    {
        return 0;
    }
    if (VAR10 == 0)
    {
        return 1;
    }
    FUN12(VAR7, VAR1 + VAR14);
    FUN13(VAR15, VAR5, NULL);
    FUN14(VAR7);
    return 1;
}