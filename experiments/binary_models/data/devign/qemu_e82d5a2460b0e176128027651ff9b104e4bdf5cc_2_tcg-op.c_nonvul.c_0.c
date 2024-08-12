void FUN1(TCGv_i64 VAR1, TCGv VAR2, TCGv_i64 VAR3, TCGv_i64 VAR4, TCGArg VAR5, TCGMemOp VAR6)
{
    VAR6 = FUN2(VAR6, 1, 0);
    if (!(VAR7.VAR8 & VAR9))
    {
        TCGv_i64 VAR10 = FUN3();
        TCGv_i64 VAR11 = FUN3();
        FUN4(VAR11, VAR3, VAR6 & VAR12);
        FUN5(VAR10, VAR2, VAR5, VAR6 & ~VAR13);
        FUN6(VAR14, VAR11, VAR10, VAR11, VAR4, VAR10);
        FUN7(VAR11, VAR2, VAR5, VAR6);
        FUN8(VAR11);
        if (VAR6 & VAR13)
        {
            FUN4(VAR1, VAR10, VAR6);
        }
        else
        {
            FUN9(VAR1, VAR10);
        }
        FUN8(VAR10);
    }
    else if ((VAR6 & VAR12) == VAR15)
    {
        gen_atomic_cx_i64 VAR16;
        VAR16 = VAR17[VAR6 & (VAR12 | VAR18)];
        FUN10(VAR16 != NULL);
        {
            TCGv_i32 VAR19 = FUN11(FUN12(VAR6, VAR5));
            FUN13(VAR1, VAR7.VAR20, VAR2, VAR3, VAR4, VAR19);
            FUN14(VAR19);
        }
        FUN13(VAR1, VAR7.VAR20, VAR2, VAR3, VAR4);
        FUN15(VAR7.VAR20);
        FUN16(VAR1, 0);
    }
    else
    {
        TCGv_i32 VAR21 = FUN17();
        TCGv_i32 VAR22 = FUN17();
        TCGv_i32 VAR23 = FUN17();
        FUN18(VAR21, VAR3);
        FUN18(VAR22, VAR4);
        FUN19(VAR23, VAR2, VAR21, VAR22, VAR5, VAR6 & ~VAR13);
        FUN14(VAR21);
        FUN14(VAR22);
        FUN20(VAR1, VAR23);
        FUN14(VAR23);
        if (VAR6 & VAR13)
        {
            FUN4(VAR1, VAR1, VAR6);
        }
    }
}