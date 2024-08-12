static void FUN1(void)
{
    const char *VAR1 = FUN2();
    VAR2 *VAR3, *VAR4;
    VAR5 *VAR6;
    const VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    const char *VAR13, *VAR14;
    FUN3("");
    VAR3 = FUN4("");
    FUN5(VAR3);
    VAR6 = FUN6(VAR3, "");
    FUN5(VAR6);
    for (VAR8 = FUN7(VAR6); VAR8; VAR8 = FUN8(VAR8))
    {
        VAR4 = FUN9(FUN10(VAR8));
        FUN5(VAR4);
        VAR10 = FUN11(VAR4, "");
        FUN5(VAR10);
        VAR12 = FUN12(VAR10);
        FUN5(VAR12);
        VAR13 = FUN13(VAR12);
        if (!FUN14(VAR1, VAR13))
        {
            VAR14 = FUN15("", VAR13);
            FUN16(VAR14, FUN17(VAR13), VAR15);
        }
    }
    FUN18();
    FUN19(VAR3);
}