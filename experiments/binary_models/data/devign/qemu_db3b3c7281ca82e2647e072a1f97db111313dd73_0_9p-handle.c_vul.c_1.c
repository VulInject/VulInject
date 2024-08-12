static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    const char *VAR7 = FUN2(VAR2, "");
    const char *VAR8 = FUN2(VAR2, "");
    if (VAR7)
    {
        FUN3("");
        return -1;
    }
    if (!VAR8)
    {
        FUN3("");
        return -1;
    }
    VAR4->VAR8 = FUN4(VAR8);
    return 0;