void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    const char *VAR5 = FUN2(VAR4, "");
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9;
    VAR9 = FUN3(FUN4(""), VAR5, true);
    if (VAR9 == NULL)
    {
        FUN5(&VAR7, "");
    }
    else
    {
        FUN6(VAR9, NULL, &VAR7);
    }
    FUN7(VAR2, &VAR7);