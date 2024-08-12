static void FUN1(VAR1 *VAR2, VAR3 *VAR4, Int128 VAR5, AddrRange VAR6, bool VAR7)
{
    VAR3 *VAR8;
    unsigned VAR9;
    hwaddr VAR10;
    Int128 VAR11;
    Int128 VAR12;
    FlatRange VAR13;
    AddrRange VAR14;
    if (!VAR4->VAR15)
    {
        return;
    }
    FUN2(&VAR5, FUN3(VAR4->VAR16));
    VAR7 |= VAR4->VAR7;
    VAR14 = FUN4(VAR5, VAR4->VAR17);
    if (!FUN5(VAR14, VAR6))
    {
        return;
    }
    VAR6 = FUN6(VAR14, VAR6);
    if (VAR4->VAR18)
    {
        FUN7(&VAR5, FUN3(VAR4->VAR18->VAR16));
        FUN7(&VAR5, FUN3(VAR4->VAR19));
        FUN1(VAR2, VAR4->VAR18, VAR5, VAR6, VAR7);
        return;
    }
    FUN8(VAR8, &VAR4->VAR20, VAR21) { FUN1(VAR2, VAR8, VAR5, VAR6, VAR7); }
    if (!VAR4->VAR22)
    {
        return;
    }
    VAR10 = FUN9(FUN10(VAR6.VAR23, VAR5));
    VAR5 = VAR6.VAR23;
    VAR11 = VAR6.VAR17;
    VAR13.VAR4 = VAR4;
    VAR13.VAR24 = VAR4->VAR24;
    VAR13.VAR25 = VAR4->VAR25;
    VAR13.VAR7 = VAR7;
    for (VAR9 = 0; VAR9 < VAR2->VAR26 && FUN11(VAR11); ++VAR9)
    {
        if (FUN12(VAR5, FUN13(VAR2->VAR27[VAR9].VAR16)))
        {
            continue;
        }
        if (FUN14(VAR5, VAR2->VAR27[VAR9].VAR16.VAR23))
        {
            VAR12 = FUN15(VAR11, FUN10(VAR2->VAR27[VAR9].VAR16.VAR23, VAR5));
            VAR13.VAR10 = VAR10;
            VAR13.VAR16 = FUN4(VAR5, VAR12);
            FUN16(VAR2, VAR9, &VAR13);
            ++VAR9;
            FUN2(&VAR5, VAR12);
            VAR10 += FUN9(VAR12);
            FUN7(&VAR11, VAR12);
        }
        VAR12 = FUN10(FUN15(FUN17(VAR5, VAR11), FUN13(VAR2->VAR27[VAR9].VAR16)), VAR5);
        FUN2(&VAR5, VAR12);
        VAR10 += FUN9(VAR12);
        FUN7(&VAR11, VAR12);
    }
    if (FUN11(VAR11))
    {
        VAR13.VAR10 = VAR10;
        VAR13.VAR16 = FUN4(VAR5, VAR11);
        FUN16(VAR2, VAR9, &VAR13);
    }
}