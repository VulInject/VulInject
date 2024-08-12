static const struct VAR1 *FUN1(const char *VAR2)
{
    const VAR1 **VAR3;
    char VAR4[128], VAR5[128], *VAR6;
    size_t VAR7 = strspn(VAR2, VAR8);
    int VAR9;
    if (VAR2[VAR7] != '' && (FUN2(VAR2, "", 8) || !strchr(VAR2 + VAR7 + 1, '')) || FUN3(VAR2))
        strcpy(VAR4, "");
    else
        FUN4(VAR4, VAR2, FUN5(VAR7 + 1, sizeof(VAR4)));
    if ((VAR6 = strchr(VAR4, '')))
        *VAR6 = '';
    FUN4(VAR5, VAR4, sizeof(VAR5));
    if ((VAR6 = strchr(VAR5, '')))
        *VAR6 = '';
    VAR3 = FUN6(NULL, NULL);
    for (VAR9 = 0; VAR3[VAR9]; VAR9++)
    {
        const VAR1 *VAR10 = VAR3[VAR9];
        if (!strcmp(VAR4, VAR10->VAR11))
        {
            FUN7(&VAR3);
            return VAR10;
        }
        if (VAR10->VAR12 & VAR13 && !strcmp(VAR5, VAR10->VAR11))
        {
            FUN7(&VAR3);
            return VAR10;
        }
    }
    FUN7(&VAR3);