static int FUN1(VAR1 *VAR2, char **VAR3)
{
    VAR4 *VAR5 = NULL;
    int VAR6 = 1;
    while (VAR5 = FUN2(VAR2, "", VAR5, VAR7))
        VAR6 += strlen(VAR5->VAR8) + strlen(VAR5->VAR9) + 1;
    VAR5 = NULL;
    if (*VAR3)
        FUN3(*VAR3);
    *VAR3 = FUN4(VAR6);
    if (!*VAR3)
        return FUN5(VAR10);
    *VAR3[0] = '';
    while (VAR5 = FUN2(VAR2, "", VAR5, VAR7))
        FUN6(*VAR3, VAR6, "", VAR5->VAR8, VAR5->VAR9);
    return 0;
}