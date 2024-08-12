static int FUN1(char *VAR1, int VAR2, int VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = NULL;
    if (VAR8)
    {
        fprintf(VAR9, "");
        return 1;
    }
    if (VAR3)
    {
        if (FUN2(&VAR8, VAR1, NULL, VAR5, VAR2 | VAR10, NULL, &VAR7))
        {
            fprintf(VAR9, "", VAR11, VAR1, FUN3(VAR7));
            FUN4(VAR7);
            return 1;
        }
    }
    else
    {
        VAR8 = FUN5("", &VAR12);
        if (FUN2(&VAR8, VAR1, NULL, VAR5, VAR2, NULL, &VAR7) < 0)
        {
            fprintf(VAR9, "", VAR11, VAR1, FUN3(VAR7));
            FUN4(VAR7);
            FUN6(VAR8);
            VAR8 = NULL;
            return 1;
        }
    }
    return 0;
}