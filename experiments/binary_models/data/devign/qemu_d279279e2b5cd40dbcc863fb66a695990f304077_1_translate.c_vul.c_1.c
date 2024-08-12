static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    TCGv VAR5;
    FUN2(VAR2, VAR6);
    VAR5 = FUN3();
    switch (VAR4)
    {
    case 0:
        FUN4(VAR2, 1);
        FUN5(VAR5, VAR7);
        FUN6(VAR5, VAR3);
        break;
    case 1:
        FUN4(VAR2, 1);
        FUN7(VAR5, VAR7);
        FUN6(VAR5, VAR3);
        break;
    case 2:
        FUN4(VAR2, 1);
        FUN8(VAR5, VAR7);
        FUN6(VAR5, VAR3);
        break;
    case 3:
        FUN4(VAR2, 1);
        FUN9(VAR5, VAR7);
        FUN6(VAR5, VAR3);
        break;
    case 29:
        FUN10(VAR5, VAR7, FUN11(VAR8, VAR9));
        FUN6(VAR5, VAR3);
        break;
    default:
        FUN12("");
        FUN13(VAR2, VAR10);
        break;
    }
    FUN14(VAR5);
}