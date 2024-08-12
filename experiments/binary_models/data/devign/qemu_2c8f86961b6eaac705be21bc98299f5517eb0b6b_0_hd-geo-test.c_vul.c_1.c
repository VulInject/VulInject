static void FUN1(bool VAR1, MBRcontents VAR2)
{
    char *argv[256];
    int argc;
    Backend VAR3;
    const char *VAR4;
    argc = FUN2(argv, FUN3(argv));
    for (VAR3 = 0; VAR3 < VAR5; VAR3++)
    {
        VAR6[VAR3] = &VAR7[VAR3][VAR2];
        VAR4 = VAR1 ? (FUN4(VAR6[VAR3]) ? "" : "") : NULL;
        argc = FUN5(argc, argv, FUN3(argv), VAR3, VAR4, VAR3, VAR2, "");
    }
    FUN6(FUN7("", argv));
    FUN8();
    FUN9();
}