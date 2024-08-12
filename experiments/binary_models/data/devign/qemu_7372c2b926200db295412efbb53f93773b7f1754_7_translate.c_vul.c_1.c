static void FUN1(int VAR1, TCGv VAR2, TCGv VAR3)
{
    TCGv VAR4;
    switch (VAR1)
    {
    case VAR5:
        FUN2(VAR2, VAR2, 0xffffff00);
        VAR4 = FUN3();
        FUN4(VAR4, VAR3);
        FUN5(VAR2, VAR2, VAR4);
        break;
    case VAR6:
        FUN2(VAR2, VAR2, 0xffff0000);
        VAR4 = FUN3();
        FUN6(VAR4, VAR3);
        FUN5(VAR2, VAR2, VAR4);
        break;
    case VAR7:
    case VAR8:
        FUN7(VAR2, VAR3);
        break;
    default:
        FUN8(0, "");
        break;
    }
}