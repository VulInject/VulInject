static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5;
    const char *VAR6;
    const char *VAR7;
    int VAR8;
    VAR7 = FUN2(VAR2, "");
    if (VAR7 == NULL)
    {
        VAR7 = "";
    }
    if (strcmp(VAR7, "") == 0)
    {
        VAR8 = VAR9;
    }
    else if (strcmp(VAR7, "") == 0)
    {
        VAR8 = VAR10;
    }
    else
    {
        fprintf(VAR11, ""%VAR12\"", VAR7);
        FUN3(1);
    }
    if (FUN4(VAR2, "", 0))
        VAR8 |= VAR13;
    if (FUN4(VAR2, "", 0))
        VAR8 |= VAR14;
    VAR6 = FUN2(VAR2, "");
    VAR5 = FUN5(VAR6);
    if (VAR5 == NULL)
    {
        fprintf(VAR11, ""%VAR12\"", VAR6);
        FUN3(1);
    }
    FUN6(VAR5, VAR8);
    return 0;