static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, TCGv VAR5, int VAR6)
{
    TCGv VAR7;
    switch (VAR6)
    {
    case 0:
        VAR7 = FUN2(VAR5, FUN3(VAR2));
        break;
    case 1:
        VAR7 = FUN4(VAR5, FUN3(VAR2));
        break;
    case 2:
    case 3:
        VAR7 = FUN5(VAR5, FUN3(VAR2));
        break;
    default:
        FUN6();
    }
    FUN7(VAR8, VAR7);
    FUN8(VAR2, VAR3, VAR7);
    if (VAR6 == 3)
    {
        TCGv VAR9 = FUN9();
        FUN10(VAR9, VAR5, 4);
        VAR7 = FUN5(VAR9, FUN3(VAR2));
        FUN11(VAR9);
        FUN7(VAR10, VAR7);
        FUN8(VAR2, VAR4, VAR7);
    }
    FUN7(VAR11, VAR5);
}