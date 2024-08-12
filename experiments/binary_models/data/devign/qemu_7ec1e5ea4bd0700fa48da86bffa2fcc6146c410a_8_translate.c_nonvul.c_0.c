static void FUN1(VAR1 *VAR2, TCGv VAR3, TCGv VAR4, int VAR5, int VAR6)
{
    DisasASI VAR7 = FUN2(VAR2, VAR5);
    switch (VAR7.VAR8)
    {
    case VAR9:
        break;
    default:
    {
        TCGv_i32 VAR10 = FUN3(VAR7.VAR11);
        TCGv_i32 VAR12 = FUN3(VAR6);
        FUN4(VAR2);
        FUN5(VAR13, VAR4, VAR10, VAR12);
        FUN6(VAR12);
        FUN6(VAR10);
    }
    break;
    }
}