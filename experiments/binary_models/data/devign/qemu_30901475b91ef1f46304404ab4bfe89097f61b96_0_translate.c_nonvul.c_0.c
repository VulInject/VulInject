static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, TCGv_i32 VAR5, int VAR6)
{
    TCGv_i32 VAR7 = FUN2();
    VAR2->VAR8 = true;
    switch (VAR6)
    {
    case 0:
        FUN3(VAR7, VAR5, FUN4(VAR2));
        break;
    case 1:
        FUN5(VAR7, VAR5, FUN4(VAR2));
        break;
    case 2:
    case 3:
        FUN6(VAR7, VAR5, FUN4(VAR2));
        break;
    default:
        FUN7();
    }
    if (VAR6 == 3)
    {
        TCGv_i32 VAR9 = FUN2();
        TCGv_i32 VAR10 = FUN2();
        FUN8(VAR9, VAR5, 4);
        FUN9(VAR10, VAR9, FUN4(VAR2));
        FUN10(VAR9);
        FUN11(VAR11, VAR7, VAR10);
        FUN12(VAR2, VAR4, VAR10);
    }
    else
    {
        FUN13(VAR11, VAR7);
    }
    FUN12(VAR2, VAR3, VAR7);
    FUN13(VAR12, VAR5);
}