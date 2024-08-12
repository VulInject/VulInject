void FUN1(TCGv_i32 VAR1, TCGv VAR2, TCGv_i32 VAR3, TCGv_i32 VAR4, TCGArg VAR5, TCGMemOp VAR6)
{
    VAR6 = FUN2(VAR6, 0, 0);
    if (!(VAR7.VAR8 & VAR9))
    {
        TCGv_i32 VAR10 = FUN3();
        TCGv_i32 VAR11 = FUN3();
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
    else
    {
        gen_atomic_cx_i32 VAR15;
        VAR15 = VAR16[VAR6 & (VAR12 | VAR17)];
        FUN10(VAR15 != NULL);
        {
            TCGv_i32 VAR18 = FUN11(FUN12(VAR6 & ~VAR13, VAR5));
            FUN13(VAR1, VAR7.VAR19, VAR2, VAR3, VAR4, VAR18);
            FUN8(VAR18);
        }
        FUN13(VAR1, VAR7.VAR19, VAR2, VAR3, VAR4);
        if (VAR6 & VAR13)
        {
            FUN4(VAR1, VAR1, VAR6);
        }
    }
}