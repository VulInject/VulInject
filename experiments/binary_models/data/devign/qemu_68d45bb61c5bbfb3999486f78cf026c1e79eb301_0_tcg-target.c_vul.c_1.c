static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, bool VAR5)
{
    TCGReg VAR6, VAR7, VAR8, VAR9;
    TCGReg VAR10 FUN2((VAR11));
    TCGMemOpIdx VAR12;
    TCGMemOp VAR13, VAR14;
    int VAR15;
    VAR16 *VAR17;
    VAR6 = *VAR4++;
    VAR7 = (VAR18 == 32 && VAR5 ? *VAR4++ : 0);
    VAR8 = *VAR4++;
    VAR10 = (VAR18 < VAR19 ? *VAR4++ : 0);
    VAR12 = *VAR4++;
    VAR13 = FUN3(VAR12);
    VAR14 = VAR13 & VAR20;
    VAR15 = FUN4(VAR12);
    VAR8 = FUN5(VAR2, VAR14, VAR8, VAR10, VAR15, false);
    VAR17 = VAR2->VAR21;
    FUN6(VAR2, VAR22 | FUN7(7, VAR23) | VAR24 | VAR25);
    VAR9 = VAR26;
    VAR9 = VAR27 ? VAR28 : 0;
    if (VAR18 > VAR19)
    {
        FUN8(VAR2, VAR29, VAR8);
        VAR8 = VAR29;
    }
    if (VAR18 == 32 && VAR14 == VAR30)
    {
        if (VAR13 & VAR31)
        {
            FUN9(VAR2, VAR32 | FUN10(VAR33, VAR8, 4));
            FUN9(VAR2, VAR34 | FUN11(VAR6, VAR9, VAR8));
            FUN9(VAR2, VAR34 | FUN11(VAR7, VAR9, VAR33));
        }
        else if (VAR9 != 0)
        {
            FUN9(VAR2, VAR32 | FUN10(VAR33, VAR8, 4));
            FUN9(VAR2, VAR35 | FUN11(VAR7, VAR9, VAR8));
            FUN9(VAR2, VAR35 | FUN11(VAR6, VAR9, VAR33));
        }
        else
        {
            FUN9(VAR2, VAR36 | FUN10(VAR7, VAR8, 0));
            FUN9(VAR2, VAR36 | FUN10(VAR6, VAR8, 4));
        }
    }
    else
    {
        uint32_t VAR37 = VAR38[VAR13 & (VAR31 | VAR20)];
        if (!VAR39 && VAR37 == VAR40)
        {
            FUN9(VAR2, VAR34 | FUN11(VAR6, VAR9, VAR8));
            FUN9(VAR2, VAR32 | FUN10(VAR29, VAR8, 4));
            FUN12(VAR2, VAR33, VAR6, 32);
            FUN9(VAR2, VAR34 | FUN11(VAR33, VAR9, VAR29));
        }
        else
        {
            FUN9(VAR2, VAR37 | FUN11(VAR6, VAR9, VAR8));
        }
    }
    FUN13(VAR2, false, VAR12, VAR6, VAR7, VAR8, VAR10, VAR2->VAR21, VAR17);
}