static char *FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    char VAR5[50], VAR6[33];
    int VAR7;
    VAR7 = snprintf(VAR5, sizeof(VAR5), "", FUN2(VAR2, VAR6, sizeof VAR6), FUN3(VAR4->VAR8));
    if (FUN4(VAR4->VAR8))
        snprintf(VAR5 + VAR7, sizeof(VAR5) + VAR7, "", FUN4(VAR4->VAR8));
    return FUN5(VAR5);
}