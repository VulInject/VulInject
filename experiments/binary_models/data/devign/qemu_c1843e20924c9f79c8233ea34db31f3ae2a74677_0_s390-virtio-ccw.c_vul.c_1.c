static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5;
    FUN2();
    FUN3(VAR2->VAR6);
    FUN4(VAR2);
    FUN5();
    VAR5 = FUN6();
    FUN7(VAR2->VAR7, VAR2->VAR8, VAR2->VAR9, "", "", true);
    if (FUN8(VAR10))
    {
        VAR11 *VAR12 = FUN9(NULL, VAR13);
        FUN10(FUN11(), VAR13, FUN12(VAR12), NULL);
        FUN13(VAR12);
    }
    FUN14();
    FUN15(FUN16(0));
    if (VAR5->VAR14)
    {
        VAR3 = FUN17(0, true);
    }
    else
    {
        VAR3 = FUN17(VAR15, true);
    }
    assert(VAR3 == 0);
    FUN18(FUN19(VAR5), "");
    FUN20(NULL, "", 0, 1, &VAR16, NULL);
}