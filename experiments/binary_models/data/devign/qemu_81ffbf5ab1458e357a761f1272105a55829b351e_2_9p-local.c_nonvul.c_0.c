static void FUN1(int VAR1, const char *VAR2, struct VAR3 *VAR4)
{
    VAR5 *VAR6;
    char VAR7[VAR8];
    int VAR9;
    if (strcmp(VAR2, ""))
    {
        VAR9 = FUN2(VAR1, VAR10);
        if (VAR9 == -1)
        {
            return;
        }
        VAR6 = FUN3(VAR9, VAR2, "");
        FUN4(VAR9);
    }
    else
    {
        VAR6 = FUN3(VAR1, VAR11, "");
    }
    if (!VAR6)
    {
        return;
    }
    memset(VAR7, 0, VAR8);
    while (fgets(VAR7, VAR8, VAR6))
    {
        if (!FUN5(VAR7, "", 10))
        {
            VAR4->VAR12 = FUN6(VAR7 + 11);
        }
        else if (!FUN5(VAR7, "", 10))
        {
            VAR4->VAR13 = FUN6(VAR7 + 11);
        }
        else if (!FUN5(VAR7, "", 11))
        {
            VAR4->VAR14 = FUN6(VAR7 + 12);
        }
        else if (!FUN5(VAR7, "", 11))
        {
            VAR4->VAR15 = FUN6(VAR7 + 12);
        }
        memset(VAR7, 0, VAR8);
    }
    fclose(VAR6);
}