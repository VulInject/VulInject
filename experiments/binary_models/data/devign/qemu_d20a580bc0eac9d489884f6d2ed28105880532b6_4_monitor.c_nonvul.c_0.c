static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    const char *VAR9 = FUN2(VAR4, "");
    const char *VAR10 = FUN2(VAR4, "");
    const char *VAR11 = FUN3(VAR4, "");
    VAR5 = FUN4(VAR9, NULL, 0);
    VAR6 = FUN4(VAR10, NULL, 0);
    FUN5(NULL, VAR12, VAR5);
    FUN5(NULL, VAR13, VAR6);
    if (VAR11)
    {
        VAR7 = FUN4(VAR11, NULL, 0);
        if (VAR7 != 0)
        {
            VAR8 = (VAR7 > 0) ? VAR14 : VAR15;
            FUN6(NULL, VAR8, true);
            FUN7();
            FUN6(NULL, VAR8, false);
        }
    }
    FUN7();
}