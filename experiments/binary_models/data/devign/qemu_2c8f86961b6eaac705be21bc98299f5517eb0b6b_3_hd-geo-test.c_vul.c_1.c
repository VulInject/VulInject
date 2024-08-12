static void FUN1(const char *VAR1, bool VAR2)
{
    char *argv[256], *VAR3;
    int argc;
    int VAR4 = VAR5[VAR6];
    const CHST VAR7 = {VAR4 / (4 * 32), 4, 32, VAR2};
    argc = FUN2(argv, FUN3(argv));
    VAR3 = FUN4("", VAR1 ?: "", VAR2 && VAR1 ? "" : "", VAR2 ? "" : "", VAR7.VAR8, VAR7.VAR9, VAR7.VAR4);
    VAR10[0] = &VAR7;
    argc = FUN5(argc, argv, FUN3(argv), 0, VAR1 ? VAR3 : NULL, VAR6, VAR11, VAR1 ? "" : VAR3);
    FUN6(VAR3);
    FUN7(FUN8("", argv));
    FUN9();
    FUN10();
}