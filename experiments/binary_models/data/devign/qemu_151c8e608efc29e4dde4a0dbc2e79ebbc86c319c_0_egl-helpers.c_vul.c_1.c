int FUN1(const char *VAR1)
{
    VAR2 = -1;
    VAR2 = FUN2(VAR1);
    if (VAR2 == -1)
    {
        FUN3("");
        goto VAR3;
    }
    VAR4 = FUN4(VAR2);
    if (!VAR4)
    {
        FUN3("");
        goto VAR3;
    }
    FUN5((VAR5)VAR4);
    if (!FUN6(VAR6, ""))
    {
        FUN3("");
        goto VAR3;
    }
    if (!FUN6(VAR6, ""))
    {
        FUN3("");
        goto VAR3;
    }
    VAR7 = FUN7();
    if (!VAR7)
    {
        FUN3("");
        goto VAR3;
    }
    return 0;
VAR3:
    if (VAR4)
    {
        FUN8(VAR4);
    }
    if (VAR2 != -1)
    {
        close(VAR2);
    }
    return -1;
}