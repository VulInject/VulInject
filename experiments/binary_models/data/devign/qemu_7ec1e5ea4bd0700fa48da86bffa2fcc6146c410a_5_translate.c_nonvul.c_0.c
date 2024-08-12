static void FUN1(VAR1 *VAR2, TCGv VAR3, TCGv VAR4, int VAR5)
{
    DisasASI VAR6 = FUN2(VAR2, VAR5);
    switch (VAR6.VAR7)
    {
    case VAR8:
        break;
    default:
    {
        TCGv_i32 VAR9 = FUN3(VAR6.VAR10);
        TCGv_i32 VAR11 = FUN3(1);
        TCGv_i32 VAR12 = FUN3(0);
        TCGv_i64 VAR13, VAR14;
        FUN4(VAR2);
        VAR14 = FUN5();
        FUN6(VAR14, VAR15, VAR4, VAR9, VAR11, VAR12);
        FUN7(VAR12);
        VAR13 = FUN8(0xff);
        FUN9(VAR15, VAR4, VAR13, VAR9, VAR11);
        FUN10(VAR13);
        FUN7(VAR11);
        FUN7(VAR9);
        FUN11(VAR3, VAR14);
        FUN10(VAR14);
    }
    break;
    }
}