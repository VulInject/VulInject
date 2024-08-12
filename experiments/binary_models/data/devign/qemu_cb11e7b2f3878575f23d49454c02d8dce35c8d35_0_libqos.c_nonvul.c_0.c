void FUN1(const char *VAR1, const char *VAR2, unsigned VAR3)
{
    VAR4 *VAR5;
    bool VAR6;
    int VAR7;
    VAR8 *VAR9 = NULL;
    char *VAR10;
    VAR4 *VAR11, *VAR12;
    char *VAR13;
    VAR10 = getenv("");
    FUN2(VAR10);
    VAR13 = FUN3(VAR10, NULL);
    FUN2(VAR13);
    VAR5 = FUN4("", VAR13, VAR2, VAR1, VAR3);
    VAR6 = FUN5(VAR5, &VAR11, &VAR12, &VAR7, &VAR9);
    if (VAR9)
    {
        fprintf(VAR14, "", VAR9->VAR15);
        FUN6(VAR9);
    }
    FUN2(VAR6 && !VAR9);
    if (VAR7)
    {
        fprintf(VAR14, "", VAR7);
    }
    FUN2(!VAR7);
    FUN7(VAR11);
    FUN7(VAR12);
    FUN7(VAR5);
    free(VAR13);
}