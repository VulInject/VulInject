static void FUN1(const VAR1 *VAR2)
{
    hwaddr VAR3 = VAR2->VAR4[VAR5].VAR6 / 2;
    hwaddr VAR7 = VAR2->VAR4[VAR5].VAR8;
    char *VAR9;
    if (VAR10)
    {
        char *VAR11;
        int VAR12;
        if (FUN2(VAR13, 0, 0))
        {
            FUN3(""
                         ""
                         "");
            FUN4(1);
        }
        VAR11 = FUN5(VAR14, VAR10);
        if (!VAR11)
        {
            FUN3("", VAR10);
            FUN4(1);
        }
        VAR12 = FUN6(VAR11, VAR7, VAR3);
        FUN7(VAR11);
        if (VAR12 < 0)
        {
            FUN3("", VAR10);
            FUN4(1);
        }
        FUN7(VAR11);
    }
    FUN8("", VAR7, VAR3);
    FUN8("", VAR7 + VAR3, VAR3);
    VAR9 = FUN9("" VAR15, VAR7);
    FUN10(VAR2->VAR16, VAR9);
    FUN11(VAR2->VAR16, VAR9, "", "");
    FUN12(VAR2->VAR16, VAR9, "", 2, VAR7, 2, VAR3, 2, VAR7 + VAR3, 2, VAR3);
    FUN13(VAR2->VAR16, VAR9, "", 4);
    FUN7(VAR9);
}