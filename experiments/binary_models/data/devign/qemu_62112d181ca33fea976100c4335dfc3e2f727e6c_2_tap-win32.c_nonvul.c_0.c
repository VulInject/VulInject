int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 *VAR7)
{
    const char *VAR8;
    VAR8 = FUN2(VAR2, "");
    if (!VAR8)
    {
        FUN3("");
        return -1;
    }
    if (FUN4(VAR7, "", VAR5, VAR8) == -1)
    {
        return -1;
    }
    return 0;
}