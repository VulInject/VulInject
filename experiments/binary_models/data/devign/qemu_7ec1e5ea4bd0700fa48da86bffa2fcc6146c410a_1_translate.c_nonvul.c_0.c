static void FUN1(VAR1 *VAR2, TCGv VAR3, TCGv VAR4, TCGv VAR5, int VAR6)
{
    DisasASI VAR7 = FUN2(VAR2, VAR6);
    switch (VAR7.VAR8)
    {
    case VAR9:
        break;
    default:
    {
        TCGv_i32 VAR10 = FUN3(VAR7.VAR11);
        TCGv_i32 VAR12 = FUN3(4);
        TCGv_i32 VAR13 = FUN3(0);
        TCGv_i64 VAR14, VAR15;
        FUN4(VAR2);
        VAR15 = FUN5();
        FUN6(VAR15, VAR16, VAR5, VAR10, VAR12, VAR13);
        FUN7(VAR13);
        VAR14 = FUN5();
        FUN8(VAR14, VAR4);
        FUN9(VAR16, VAR5, VAR14, VAR10, VAR12);
        FUN10(VAR14);
        FUN7(VAR12);
        FUN7(VAR10);
        FUN11(VAR3, VAR15);
        FUN10(VAR15);
    }
    break;
    }
}