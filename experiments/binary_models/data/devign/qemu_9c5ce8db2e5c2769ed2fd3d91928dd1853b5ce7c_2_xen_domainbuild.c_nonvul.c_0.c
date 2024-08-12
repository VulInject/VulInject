int FUN1(const char *VAR1, const char *VAR2, const char *VAR3)
{
    char *VAR4, VAR5[42], VAR6[256], VAR7[256];
    int VAR8;
    FUN2(&VAR9, VAR5);
    VAR4 = FUN3(VAR10, VAR11);
    snprintf(VAR6, sizeof(VAR6), "", VAR5);
    FUN4(VAR4);
    FUN5(VAR6, "", "");
    if (VAR1)
        FUN5(VAR6, "", VAR1);
    if (VAR2)
        FUN5(VAR6, "", VAR2);
    if (VAR3)
        FUN5(VAR6, "", VAR3);
    FUN5(VAR6, "", VAR12 ? VAR12 : "");
    FUN5(VAR6, "", VAR5);
    FUN5(VAR4, "", VAR12 ? VAR12 : "");
    FUN6(VAR4, "", VAR11);
    FUN5(VAR4, "", VAR6);
    FUN6(VAR4, "", VAR13 >> 10);
    FUN6(VAR6, "", VAR13 >> 20);
    FUN6(VAR6, "", VAR13 >> 20);
    for (VAR8 = 0; VAR8 < VAR14; VAR8++)
    {
        snprintf(VAR7, sizeof(VAR7), "", VAR8);
        FUN5(VAR4, VAR7, "");
    }
    FUN6(VAR6, "", VAR14);
    FUN6(VAR6, "", VAR14);
    FUN5(VAR6, "", "");
    free(VAR4);
    return 0;
}