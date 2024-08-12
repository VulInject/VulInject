static int FUN1(char *VAR1, int VAR2, int VAR3)
{
    const char *VAR4, *VAR5;
    char *VAR6 = NULL, *VAR7 = NULL, *VAR8 = NULL;
    int VAR9 = 0;
    if (!FUN2(VAR1, ""))
        return VAR9;
    VAR6 = FUN3(VAR1);
    if (!VAR6)
    {
        VAR9 = FUN4(VAR10);
        goto VAR11;
    }
    if (FUN5(&VAR7, VAR6, '', VAR3) < 1)
    {
        VAR9 = FUN4(VAR12);
        goto VAR11;
    }
    FUN6(VAR1, VAR7, VAR2);
    VAR4 = FUN7(VAR6);
    VAR5 = FUN8(VAR6);
    if (FUN2(VAR5, "") && VAR4 && !strcmp(VAR4, ""))
    {
        VAR8 = FUN3(VAR1);
        if (!VAR8)
        {
            VAR9 = FUN4(VAR10);
            goto VAR11;
        }
        VAR5 = FUN8(VAR8);
        if (FUN9(VAR5) == -1 && VAR13 != VAR14)
        {
            VAR9 = FUN4(VAR13);
            goto VAR11;
        }
    }
VAR11:
    FUN10(&VAR6);
    FUN10(&VAR8);
    FUN10(&VAR7);
    return VAR9;
}