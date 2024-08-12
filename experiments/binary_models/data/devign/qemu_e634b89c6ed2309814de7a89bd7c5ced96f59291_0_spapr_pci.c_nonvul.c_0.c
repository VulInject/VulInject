static int FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, int VAR6)
{
    int VAR7, VAR8;
    int VAR9 = FUN2(VAR4->VAR10);
    int VAR11 = FUN3(VAR4->VAR10);
    char VAR12[VAR13];
    if (VAR11 != 0)
    {
        snprintf(VAR12, VAR13, "", VAR9, VAR11);
    }
    else
    {
        snprintf(VAR12, VAR13, "", VAR9);
    }
    VAR7 = FUN4(VAR5, VAR6, VAR12);
    VAR8 = FUN5(VAR4, VAR5, VAR7, VAR2);
    FUN6(!VAR8);
    if (VAR8)
    {
        return 0;
    }
    return VAR7;
}