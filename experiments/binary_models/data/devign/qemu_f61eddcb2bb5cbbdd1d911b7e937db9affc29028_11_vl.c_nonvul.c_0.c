static int FUN1(void *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    const char *VAR8;
    const char *VAR9;
    int VAR10;
    VAR9 = FUN2(VAR3, "");
    if (VAR9 == NULL)
    {
        VAR9 = "";
    }
    if (strcmp(VAR9, "") == 0)
    {
        VAR10 = VAR11;
    }
    else if (strcmp(VAR9, "") == 0)
    {
        VAR10 = VAR12;
    }
    else
    {
        FUN3(""%VAR13\"", VAR9);
        FUN4(1);
    }
    if (FUN5(VAR3, "", 0))
        VAR10 |= VAR14;
    if (FUN5(VAR3, "", 0))
        VAR10 |= VAR15;
    VAR8 = FUN2(VAR3, "");
    VAR7 = FUN6(VAR8);
    if (VAR7 == NULL)
    {
        FUN3(""%VAR13\"", VAR8);
        FUN4(1);
    }
    FUN7(VAR7);
    FUN8(VAR7, VAR10);
    return 0;
}