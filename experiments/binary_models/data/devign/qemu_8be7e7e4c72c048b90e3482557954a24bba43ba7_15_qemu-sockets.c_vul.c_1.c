int FUN1(const char *VAR1, char *VAR2, int VAR3)
{
    VAR4 *VAR5;
    char *VAR6, *VAR7;
    int VAR8, VAR9;
    VAR5 = FUN2(&VAR10, NULL, 0);
    VAR7 = strchr(VAR1, '');
    if (VAR7)
    {
        VAR9 = VAR7 - VAR1;
        if (VAR9)
        {
            VAR6 = FUN3(VAR9 + 1);
            snprintf(VAR6, VAR9 + 1, "", VAR9, VAR1);
            FUN4(VAR5, "", VAR6);
            FUN5(VAR6);
        }
    }
    else
    {
        FUN4(VAR5, "", VAR1);
    }
    VAR8 = FUN6(VAR5);
    if (VAR8 != -1 && VAR2)
        snprintf(VAR2, VAR3, "", FUN7(VAR5, ""), VAR7 ? VAR7 : "");
    FUN8(VAR5);
    return VAR8;
}