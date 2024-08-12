static int FUN1(const char *VAR1, bool VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    bool VAR7;
    VAR6 = FUN2(VAR1);
    if (!VAR6)
    {
        FUN3(VAR4, VAR8, "", VAR1);
        return -VAR9;
    }
    if (!FUN4(VAR6))
    {
        FUN5(VAR4, "", VAR1);
        return -VAR10;
    }
    if (!FUN6(VAR6))
    {
        FUN5(VAR4, "", VAR1);
        return -VAR11;
    }
    if (FUN7(VAR6))
    {
        return 0;
    }
    VAR7 = FUN8(VAR6);
    if (VAR7)
    {
        FUN9(VAR6, VAR2);
    }
    if (!VAR7 || VAR2)
    {
        FUN10(VAR6, false);
    }
    if (VAR7 && !VAR2)
    {
        FUN5(VAR4, ""
                         "",
                   VAR1);
        return -VAR12;
    }
    return 0;
}