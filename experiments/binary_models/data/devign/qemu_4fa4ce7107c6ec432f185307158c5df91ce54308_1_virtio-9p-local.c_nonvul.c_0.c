static void FUN1(VAR1 *VAR2, const char *VAR3, struct VAR4 *VAR5)
{
    VAR6 *VAR7;
    char VAR8[VAR9];
    char *VAR10;
    VAR10 = FUN2(VAR2, VAR3);
    VAR7 = FUN3(VAR10, "");
    FUN4(VAR10);
    if (!VAR7)
    {
        return;
    }
    memset(VAR8, 0, VAR9);
    while (fgets(VAR8, VAR9, VAR7))
    {
        if (!FUN5(VAR8, "", 10))
        {
            VAR5->VAR11 = FUN6(VAR8 + 11);
        }
        else if (!FUN5(VAR8, "", 10))
        {
            VAR5->VAR12 = FUN6(VAR8 + 11);
        }
        else if (!FUN5(VAR8, "", 11))
        {
            VAR5->VAR13 = FUN6(VAR8 + 12);
        }
        else if (!FUN5(VAR8, "", 11))
        {
            VAR5->VAR14 = FUN6(VAR8 + 12);
        }
        memset(VAR8, 0, VAR9);
    }
    fclose(VAR7);
}