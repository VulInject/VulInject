static void *FUN1(VAR1 *VAR2, target_ulong VAR3, TCGMemOpIdx VAR4, uintptr_t VAR5)
{
    size_t VAR6 = FUN2(VAR4);
    size_t VAR7 = (VAR3 >> VAR8) & (VAR9 - 1);
    VAR10 *VAR11 = &VAR2->VAR12[VAR6][VAR7];
    target_ulong VAR13 = VAR11->VAR14;
    TCGMemOp VAR15 = FUN3(VAR4);
    int VAR16 = FUN4(VAR15);
    int VAR17 = VAR15 & VAR18;
    VAR5 -= VAR19;
    if (FUN5(VAR16 > 0 && (VAR3 & ((1 << VAR16) - 1))))
    {
        FUN6(FUN7(VAR2), VAR3, VAR20, VAR6, VAR5);
    }
    if (FUN5(VAR3 & ((1 << VAR17) - 1)))
    {
        goto VAR21;
    }
    if ((VAR3 & VAR22) != (VAR13 & (VAR22 | VAR23)))
    {
        if (!FUN8(VAR14, VAR3))
        {
            FUN9(FUN7(VAR2), VAR3, VAR20, VAR6, VAR5);
        }
        VAR13 = VAR11->VAR14 & ~VAR23;
    }
    if (FUN5(VAR13 & VAR24))
    {
        FUN10(FUN7(VAR2), VAR3);
        VAR13 = VAR13 & ~VAR24;
    }
    if (FUN5(VAR13 & ~VAR22))
    {
        goto VAR21;
    }
    if (FUN5(VAR11->VAR25 != VAR13))
    {
        FUN9(FUN7(VAR2), VAR3, VAR26, VAR6, VAR5);
        goto VAR21;
    }
    return (void *)((VAR27)VAR3 + VAR11->VAR28);
VAR21:
    FUN11(FUN7(VAR2), VAR5);
}