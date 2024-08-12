static void FUN1(const void *VAR1)
{
    char *VAR2;
    VAR3 *VAR4;
    VAR5 *VAR6;
    const VAR7 *VAR8;
    VAR2 = FUN2(VAR1, ""
                         ""
                         ""
                         "");
    FUN3(VAR2);
    VAR6 = FUN4(&VAR4);
    FUN5(VAR6);
    while ((VAR8 = FUN6(VAR6)))
    {
        VAR3 *VAR9, *VAR10;
        int64_t VAR11, VAR12;
        VAR9 = FUN7(VAR8);
        FUN5(FUN8(VAR9, ""));
        VAR10 = FUN9(VAR9, "");
        FUN5(FUN8(VAR10, ""));
        VAR12 = FUN10(VAR10, "");
        FUN5(FUN8(VAR10, ""));
        VAR11 = FUN10(VAR10, "");
        if (VAR11 == 0)
        {
            FUN11(VAR12, ==, 1);
        }
        else if (VAR11 == 1)
        {
            FUN11(VAR12, ==, 0);
        }
        else
        {
            FUN5(false);
        }
    }
    FUN12(VAR4);
    FUN13();
    FUN14(VAR2);
}