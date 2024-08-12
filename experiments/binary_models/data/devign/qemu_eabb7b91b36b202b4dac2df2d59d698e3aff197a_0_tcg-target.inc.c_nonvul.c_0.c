static void FUN1(VAR1 *VAR2, TCGReg VAR3, TCGReg VAR4, TCGMemOpIdx VAR5, bool VAR6)
{
    TCGMemOp VAR7 = FUN2(VAR5);
    unsigned VAR8 = FUN3(VAR5);
    TCGReg VAR9, VAR10;
    VAR11 *VAR12;
    VAR11 *VAR13;
    VAR9 = FUN4(VAR2, VAR4, VAR8, VAR7 & VAR14, FUN5(VAR15, VAR16));
    VAR13 = VAR2->VAR17;
    FUN6(VAR2, VAR18, VAR19 | VAR20 | (VAR21 == 64 ? VAR22 : VAR23), 0);
    FUN7(VAR2, VAR3, VAR9, VAR24, VAR25[VAR7 & (VAR26 | VAR27)]);
    VAR10 = VAR24;
    if (!VAR28 && VAR21 == 64)
    {
        VAR10++;
    }
    FUN8(VAR2, VAR29, VAR10++, VAR4);
    if ((VAR7 & VAR27) == VAR30)
    {
        VAR12 = VAR31[VAR7 & (VAR26 | VAR14)];
    }
    else
    {
        VAR12 = VAR31[VAR7 & (VAR26 | VAR27)];
    }
    FUN9(VAR12 != NULL);
    FUN10(VAR2, VAR12);
    FUN11(VAR2, VAR32, VAR10, VAR5);
    if (VAR28)
    {
        if (VAR6 && (VAR7 & VAR27) == VAR30)
        {
            FUN12(VAR2, VAR3, VAR33, 0, VAR34);
        }
        else
        {
            FUN8(VAR2, VAR29, VAR3, VAR33);
        }
    }
    else
    {
        if ((VAR7 & VAR14) == VAR35)
        {
            FUN12(VAR2, VAR33, VAR33, 32, VAR36);
            FUN12(VAR2, VAR24, VAR24, 0, VAR37);
            FUN13(VAR2, VAR3, VAR33, VAR24, VAR38);
        }
        else if (VAR6)
        {
            FUN12(VAR2, VAR3, VAR24, 0, VAR7 & VAR39 ? VAR34 : VAR37);
        }
        else
        {
            FUN8(VAR2, VAR32, VAR3, VAR24);
        }
    }
    *VAR13 |= FUN14(FUN15(VAR2->VAR17, VAR13));
    if (VAR28 && VAR21 == 32)
    {
        FUN12(VAR2, VAR40, VAR4, 0, VAR37);
        VAR4 = VAR40;
    }
    FUN7(VAR2, VAR3, VAR4, (VAR41 ? VAR42 : VAR43), VAR25[VAR7 & (VAR26 | VAR27)]);
}