static void FUN1(VAR1 *VAR2, TCGReg VAR3, TCGReg VAR4, TCGMemOpIdx VAR5, bool VAR6)
{
    TCGMemOp VAR7 = FUN2(VAR5);
    unsigned VAR8 = FUN3(VAR5);
    TCGReg VAR9, VAR10;
    VAR11 *VAR12;
    VAR11 *VAR13;
    VAR9 = FUN4(VAR2, VAR4, VAR8, VAR7, FUN5(VAR14, VAR15));
    VAR13 = VAR2->VAR16;
    FUN6(VAR2, VAR17, VAR18 | VAR19 | (VAR20 == 64 ? VAR21 : VAR22), 0);
    FUN7(VAR2, VAR3, VAR9, VAR23, VAR24[VAR7 & (VAR25 | VAR26)]);
    VAR10 = VAR23;
    if (!VAR27 && VAR20 == 64)
    {
        VAR10++;
    }
    FUN8(VAR2, VAR28, VAR10++, VAR4);
    if ((VAR7 & VAR26) == VAR29)
    {
        VAR12 = VAR30[VAR7 & (VAR25 | VAR31)];
    }
    else
    {
        VAR12 = VAR30[VAR7 & (VAR25 | VAR26)];
    }
    FUN9(VAR12 != NULL);
    FUN10(VAR2, VAR12);
    FUN11(VAR2, VAR32, VAR10, VAR5);
    if (VAR27)
    {
        if (VAR6 && (VAR7 & VAR26) == VAR29)
        {
            FUN12(VAR2, VAR3, VAR33, 0, VAR34);
        }
        else
        {
            FUN8(VAR2, VAR28, VAR3, VAR33);
        }
    }
    else
    {
        if ((VAR7 & VAR31) == VAR35)
        {
            FUN12(VAR2, VAR33, VAR33, 32, VAR36);
            FUN12(VAR2, VAR23, VAR23, 0, VAR37);
            FUN13(VAR2, VAR3, VAR33, VAR23, VAR38);
        }
        else if (VAR6)
        {
            FUN12(VAR2, VAR3, VAR23, 0, VAR7 & VAR39 ? VAR34 : VAR37);
        }
        else
        {
            FUN8(VAR2, VAR32, VAR3, VAR23);
        }
    }
    *VAR13 |= FUN14(FUN15(VAR2->VAR16, VAR13));
    if (VAR27 && VAR20 == 32)
    {
        FUN12(VAR2, VAR40, VAR4, 0, VAR37);
        VAR4 = VAR40;
    }
    FUN7(VAR2, VAR3, VAR4, (VAR41 ? VAR42 : VAR43), VAR24[VAR7 & (VAR25 | VAR26)]);
}