void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    const char *VAR5;
    VAR6 *VAR7;
    const char *VAR8 = FUN2(VAR4, "");
    const char *VAR9 = FUN3(VAR4, "");
    const char *VAR10 = FUN3(VAR4, "");
    if (VAR9)
    {
        VAR7 = FUN4(VAR2, VAR8, VAR9);
        VAR5 = VAR10;
    }
    else
    {
        VAR7 = FUN4(VAR2, NULL, NULL);
        VAR5 = VAR8;
    }
    if (VAR7)
    {
        FUN5(VAR7, VAR5, 0);
    }
}