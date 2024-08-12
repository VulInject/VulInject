int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 *VAR7)
{
    const char *VAR8;
    const char *VAR9;
    int VAR10, VAR11;
    VAR8 = FUN2(VAR2, "");
    VAR9 = FUN2(VAR2, "");
    VAR10 = FUN3(VAR2, "", 0);
    VAR11 = FUN3(VAR2, "", 0700);
    if (FUN4(VAR7, "", VAR5, VAR8, VAR10, VAR9, VAR11) == -1)
    {
        return -1;
    }
    return 0;
}