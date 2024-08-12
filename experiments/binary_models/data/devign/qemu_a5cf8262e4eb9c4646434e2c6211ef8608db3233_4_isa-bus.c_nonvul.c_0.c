static char *FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    char VAR5[40];
    int VAR6;
    VAR6 = snprintf(VAR5, sizeof(VAR5), "", FUN2(VAR2));
    if (VAR4->VAR7)
    {
        snprintf(VAR5 + VAR6, sizeof(VAR5) - VAR6, "", VAR4->VAR7);
    }
    return FUN3(VAR5);
}