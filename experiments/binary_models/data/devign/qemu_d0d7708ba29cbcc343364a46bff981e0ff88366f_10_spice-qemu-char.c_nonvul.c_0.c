static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    const char *VAR9 = VAR4->VAR10.VAR11->VAR9;
    const char **VAR12 = FUN2();
    VAR13 *VAR14 = FUN3(VAR4->VAR10.VAR11);
    for (; *VAR12 != NULL; ++VAR12)
    {
        if (strcmp(VAR9, *VAR12) == 0)
        {
            break;
        }
    }
    if (*VAR12 == NULL)
    {
        fprintf(VAR15, "", VAR9);
        FUN4();
        return NULL;
    }
    return FUN5(VAR9, VAR16, VAR14, VAR8);
}