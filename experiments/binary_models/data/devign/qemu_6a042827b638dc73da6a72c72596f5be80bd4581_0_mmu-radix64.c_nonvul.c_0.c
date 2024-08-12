int FUN1(VAR1 *VAR2, vaddr VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    VAR10 *VAR11 = FUN3(VAR2->VAR12);
    hwaddr VAR13, VAR14;
    uint64_t VAR15 = 0, VAR16 = 0, VAR17, VAR18, VAR19, VAR20, VAR21;
    int VAR22, VAR23, VAR24 = 0;
    assert((VAR4 == 0) || (VAR4 == 1) || (VAR4 == 2));
    assert(!VAR25);
    assert(VAR2->VAR12);
    assert(FUN4(VAR2));
    if (((VAR4 == 2) && (VAR26 == 0)) || ((VAR4 != 2) && (VAR27 == 0)))
    {
        VAR13 = VAR3 & 0x0FFFFFFFFFFFFFFFULL;
        FUN5(VAR7, VAR3 & VAR28, VAR13 & VAR28, VAR29 | VAR30 | VAR31, VAR5, VAR32);
        return 0;
    }
    if (!FUN6(VAR9, VAR3, &VAR15, &VAR16))
    {
        FUN7(VAR2, VAR4, VAR3);
        return 1;
    }
    VAR19 = VAR11->FUN8(VAR2->VAR12);
    VAR17 = VAR16 * sizeof(struct VAR33);
    VAR18 = 1ULL << ((VAR19 & VAR34) + 12);
    if (VAR17 >= VAR18)
    {
        FUN9(VAR2, VAR4, VAR3, VAR35);
        return 1;
    }
    VAR20 = FUN10(VAR7->VAR36, (VAR19 & VAR37) + VAR17);
    VAR22 = FUN11(VAR20);
    VAR21 = FUN12(VAR2, VAR3 & VAR38, VAR20 & VAR39, VAR20 & VAR40, &VAR13, &VAR22, &VAR24, &VAR14);
    if (!VAR21 || FUN13(VAR2, VAR4, VAR21, &VAR24, &VAR23))
    {
        FUN9(VAR2, VAR4, VAR3, VAR24);
        return 1;
    }
    FUN14(VAR2, VAR4, VAR21, VAR14, &VAR23);
    FUN5(VAR7, VAR3 & VAR28, VAR13 & VAR28, VAR23, VAR5, 1UL << VAR22);
    return 0;
}