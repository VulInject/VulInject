int FUN1(VAR1 **VAR2, const char *VAR3, int VAR4, const VAR5 *VAR6)
{
    char VAR7[128], VAR8[128], *VAR9;
    size_t VAR10 = strspn(VAR3, VAR11);
    int VAR12;
    if (VAR3[VAR10] != '' || FUN2(VAR3))
        strcpy(VAR7, "");
    else
        FUN3(VAR7, VAR3, FUN4(VAR10 + 1, sizeof(VAR7)));
    FUN3(VAR8, VAR7, sizeof(VAR8));
    if ((VAR9 = strchr(VAR8, '')))
        *VAR9 = '';
    for (VAR12 = 0; VAR13[VAR12]; VAR12++)
    {
        const VAR14 *VAR15 = VAR13[VAR12];
        if (!strcmp(VAR7, VAR15->VAR16))
            return FUN5(VAR2, VAR15, VAR3, VAR4, VAR6);
        if (VAR15->VAR4 & VAR17 && !strcmp(VAR8, VAR15->VAR16))
            return FUN5(VAR2, VAR15, VAR3, VAR4, VAR6);
    }
    *VAR2 = NULL;
    return VAR18;
}