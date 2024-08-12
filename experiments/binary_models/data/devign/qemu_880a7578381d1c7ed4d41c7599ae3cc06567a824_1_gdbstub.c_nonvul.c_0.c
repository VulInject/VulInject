int FUN1(const char *VAR1)
{
    VAR2 *VAR3;
    char VAR4[128];
    int VAR5;
    char *VAR6;
    VAR7 *VAR8;
    if (!VAR1 || !*VAR1)
        return -1;
    VAR5 = FUN2(VAR1, &VAR6, 10);
    if (*VAR6 == 0)
    {
        snprintf(VAR4, sizeof(VAR4), "", VAR5);
        VAR1 = VAR4;
    }
    VAR8 = FUN3("", VAR1);
    if (!VAR8)
        return -1;
    VAR3 = FUN4(sizeof(VAR2));
    if (!VAR3)
    {
        return -1;
    }
    VAR3->VAR9 = VAR10;
    VAR3->VAR11 = VAR10;
    VAR3->VAR8 = VAR8;
    VAR12 = VAR3;
    FUN5(VAR8, VAR13, VAR14, VAR15, NULL);
    FUN6(VAR16, NULL);
    return 0;
}