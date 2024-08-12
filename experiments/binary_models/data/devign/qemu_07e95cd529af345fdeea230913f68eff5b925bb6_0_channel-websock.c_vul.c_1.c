static int FUN1(VAR1 *VAR2, const char *VAR3, size_t VAR4, VAR5 **VAR6)
{
    int VAR7 = -1;
    char *VAR8 = FUN2(VAR3, VAR4, VAR9);
    char *VAR10 = FUN2(VAR3, VAR4, VAR11);
    char *VAR12 = FUN2(VAR3, VAR4, VAR13);
    if (!VAR8)
    {
        FUN3(VAR6, "");
        goto VAR14;
    }
    if (!VAR10)
    {
        FUN3(VAR6, "");
        goto VAR14;
    }
    if (!VAR12)
    {
        FUN3(VAR6, "");
        goto VAR14;
    }
    if (!FUN4(VAR8, VAR15))
    {
        FUN3(VAR6, "", VAR15, VAR8);
        goto VAR14;
    }
    if (!FUN5(VAR10, VAR16))
    {
        FUN3(VAR6, "", VAR16, VAR10);
        goto VAR14;
    }
    if (strlen(VAR12) != VAR17)
    {
        FUN3(VAR6, "", strlen(VAR12), VAR17);
        goto VAR14;
    }
    VAR7 = FUN6(VAR2, VAR12, VAR6);
VAR14:
    FUN7(VAR8);
    FUN7(VAR10);
    FUN7(VAR12);
    return VAR7;
}