static void FUN1(VAR1 *VAR2, TCGv_i32 VAR3, int VAR4, int VAR5, TCGMemOp VAR6)
{
    int VAR7 = FUN2(VAR2, VAR4, VAR5, VAR6 & VAR8);
    switch (VAR6)
    {
    case VAR9:
        FUN3(VAR3, VAR10, VAR7);
        break;
    case VAR11:
        FUN4(VAR3, VAR10, VAR7);
        break;
    case VAR12:
        FUN5(VAR3, VAR10, VAR7);
        break;
    default:
        FUN6();
    }
}