static inline int FUN1(uintptr_t VAR1, VAR2 *VAR3, int VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR9;
    VAR10 *VAR11;
    int VAR12;
    unsigned long VAR13 = (unsigned long)VAR3->VAR14;
    if (VAR15)
    {
        VAR1 = VAR15;
    }
    else
    {
        VAR1 += VAR16;
    }
    if (!VAR8 || !VAR8->VAR17)
    {
        FUN2("" VAR18 "", VAR19, VAR1);
        FUN3();
    }
    FUN2("", VAR1, VAR13, VAR4, *(unsigned long *)VAR6);
    if (VAR4 && FUN4(VAR13))
    {
        switch (FUN5(FUN6(VAR13), VAR1))
        {
        case 0:
            break;
        case 1:
            return 1;
        case 2:
            VAR15 = 0;
            FUN7(VAR8, VAR6);
        default:
            FUN8();
        }
    }
    VAR13 = FUN9(VAR13);
    VAR11 = FUN10(VAR8);
    FUN11(VAR11->VAR20);
    VAR12 = VAR11->FUN12(VAR8, VAR13, VAR4, VAR21);
    if (VAR12 == 0)
    {
        return 1;
    }
    VAR15 = 0;
    if (VAR12 < 0)
    {
        return 0;
    }
    FUN13(VAR8, VAR1);
    FUN14(VAR22, VAR6, NULL);
    FUN15(VAR8);
    return 1;
}