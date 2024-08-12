static inline VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = VAR3->VAR8;
    uintptr_t VAR9;
    VAR4 *VAR10;
    int VAR11;
    VAR12 *VAR13 = VAR5->VAR14;
    FUN2(VAR15, VAR5->VAR16, "" VAR17 "", VAR5->VAR14, VAR5->VAR16, FUN3(VAR5->VAR16));
    if (FUN4(VAR18) && FUN5(VAR5->VAR16))
    {
        FUN6(VAR3, VAR19);
        FUN7(VAR7, VAR7->VAR20);
        VAR7->VAR20 = VAR21;
        VAR7->VAR22 = (VAR7->VAR22 & 0xffe0) | VAR7->VAR23 | (VAR7->VAR24 << 4);
        FUN6(VAR3, 0);
        FUN6(VAR3, 0);
    }
    VAR3->VAR25 = !VAR26;
    VAR9 = FUN8(VAR7, VAR13);
    VAR3->VAR25 = 1;
    VAR10 = (VAR4 *)(VAR9 & ~VAR27);
    VAR11 = VAR9 & VAR27;
    FUN9(VAR10, VAR11);
    if (VAR11 > VAR28)
    {
        VAR29 *VAR30 = FUN10(VAR3);
        FUN2(VAR15, VAR10->VAR16, "" VAR17 "", VAR10->VAR14, VAR10->VAR16, FUN3(VAR10->VAR16));
        if (VAR30->VAR31)
        {
            VAR30->FUN11(VAR3, VAR10);
        }
        else
        {
            assert(VAR30->VAR32);
            VAR30->FUN12(VAR3, VAR10->VAR16);
        }
    }
    if (VAR11 == VAR33)
    {
        VAR3->VAR34 = 0;
    }
    return VAR9;
}