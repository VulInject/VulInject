static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    VAR4 *VAR5, *VAR6 = NULL;
    VAR7 *VAR8 = NULL;
    VAR9 *VAR10;
    int VAR11;
    VAR10 = FUN2(VAR2, "");
    FUN3(VAR10, &VAR6, NULL, &VAR8);
    FUN4(!VAR8);
    FUN4(VAR6 != NULL);
    for (VAR11 = 0, VAR5 = VAR6; VAR5; VAR5 = VAR5->VAR12, VAR11++)
    {
        char VAR13[12];
        snprintf(VAR13, sizeof(VAR13), "", VAR11);
        FUN5(VAR5->VAR14->VAR13, ==, VAR13);
        FUN6(VAR5->VAR14->VAR15, ==, 42 + VAR11);
    }
    FUN7(VAR6);
}