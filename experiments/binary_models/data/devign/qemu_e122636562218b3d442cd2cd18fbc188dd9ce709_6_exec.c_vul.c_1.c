void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    const char *argv[] = {"", "", VAR3, NULL};
    FUN2(VAR3);
    VAR7 = FUN3(FUN4(argv, VAR8, VAR5));
    if (!VAR7)
    {
        return;
    }
    FUN5(VAR2, VAR7);
    FUN6(FUN7(VAR7));
}