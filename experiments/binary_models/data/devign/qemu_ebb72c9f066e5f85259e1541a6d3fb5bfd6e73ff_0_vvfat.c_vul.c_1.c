static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6 = FUN2(&(VAR2->VAR7), VAR3);
    uint32_t VAR8 = VAR3 == 0 ? 0 : FUN3(VAR6);
    VAR9 *VAR10 = FUN4(VAR2, VAR8);
    int VAR11 = 0x10 * VAR2->VAR12;
    int VAR13, VAR14;
    int VAR15 = VAR10->VAR16.VAR17.VAR18;
    int VAR18 = VAR15;
    int VAR19, VAR20;
    uint32_t VAR21;
    FUN5(fprintf(VAR22, "", VAR10->VAR23, VAR4));
    assert(VAR6);
    assert(VAR10);
    assert(VAR10->VAR24 == VAR8);
    assert(VAR10->VAR16.VAR17.VAR18 < VAR2->VAR7.VAR25);
    assert(VAR10->VAR26 & VAR27);
    assert(VAR3 == 0 || FUN6(VAR6));
    VAR10->VAR16.VAR17.VAR4 = VAR4;
    if (VAR8 == 0)
    {
        VAR13 = VAR14 = VAR2->VAR28;
    }
    else
    {
        for (VAR13 = 0, VAR21 = VAR8; !FUN7(VAR2, VAR21); VAR21 = FUN8(VAR2, VAR21))
            VAR13++;
        for (VAR14 = 0, VAR21 = VAR8; !FUN7(VAR2, VAR21); VAR21 = FUN9(VAR2, VAR21))
            VAR14++;
    }
    if (VAR14 > VAR13)
    {
        if (FUN10(VAR2, VAR15 + VAR11 * VAR13, VAR11 * (VAR14 - VAR13)) == NULL)
            return -1;
    }
    else if (VAR14 < VAR13)
        FUN11(VAR2, VAR15 + VAR11 * VAR14, VAR11 * (VAR13 - VAR14));
    for (VAR21 = VAR8; !FUN7(VAR2, VAR21); VAR21 = FUN9(VAR2, VAR21))
    {
        void *VAR6 = FUN2(&(VAR2->VAR7), VAR15);
        int VAR19 = FUN12(VAR2->VAR29, FUN13(VAR2, VAR21), VAR6, VAR2->VAR12);
        if (VAR19)
            return VAR19;
        assert(!FUN14(VAR2->VAR7.VAR30, "", 4));
        VAR15 += VAR11;
    }
    VAR19 = FUN15(VAR2, VAR8, VAR3);
    if (VAR19)
        return VAR19;
    for (VAR20 = 0; VAR20 < VAR11 * VAR14; VAR20++)
    {
        VAR6 = FUN2(&(VAR2->VAR7), VAR18 + VAR20);
        if (FUN6(VAR6) && !FUN16(VAR6))
        {
            VAR10 = FUN4(VAR2, VAR8);
            assert(VAR10->VAR26 & VAR27);
            VAR19 = FUN1(VAR2, VAR18 + VAR20, FUN17(&(VAR2->VAR10), VAR10));
            if (VAR19)
                return VAR19;
        }
    }
    return 0;
}