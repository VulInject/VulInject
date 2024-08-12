static void FUN1(VAR1 *VAR2, TCGv VAR3, TCGv VAR4, int VAR5, int VAR6, int VAR7)
{
    DisasASI VAR8 = FUN2(VAR2, VAR5);
    switch (VAR8.VAR9)
    {
    case VAR10:
        break;
    default:
    {
        TCGv_i32 VAR11 = FUN3(VAR8.VAR12);
        TCGv_i32 VAR13 = FUN3(VAR6);
        TCGv_i32 VAR14 = FUN3(VAR7);
        FUN4(VAR2);
        FUN5(VAR3, VAR15, VAR4, VAR11, VAR13, VAR14);
        {
            TCGv_i64 VAR16 = FUN6();
            FUN5(VAR16, VAR15, VAR4, VAR11, VAR13, VAR14);
            FUN7(VAR3, VAR16);
            FUN8(VAR16);
        }
        FUN9(VAR14);
        FUN9(VAR13);
        FUN9(VAR11);
    }
    break;
    }
}