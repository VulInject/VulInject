static void FUN1(VAR1 *VAR2, TCGv VAR3, TCGv VAR4, int VAR5, int VAR6)
{
    DisasASI VAR7 = FUN2(VAR2, VAR5);
    TCGv VAR8 = FUN3(VAR2, VAR6 + 1);
    switch (VAR7.VAR9)
    {
    case VAR10:
        break;
    default:
    {
        TCGv_i32 VAR11 = FUN4(VAR7.VAR12);
        TCGv_i32 VAR13 = FUN4(8);
        TCGv_i64 VAR14;
        FUN5(VAR2);
        VAR14 = FUN6();
        FUN7(VAR14, VAR8, VAR3);
        FUN8(VAR15, VAR4, VAR14, VAR11, VAR13);
        FUN9(VAR13);
        FUN9(VAR11);
        FUN10(VAR14);
    }
    break;
    }
}