static struct VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3 = NULL;
    char VAR4[128], VAR5[128], *VAR6;
    size_t VAR7 = strspn(VAR2, VAR8);
    if (VAR2[VAR7] != '' && (VAR2[VAR7] != '' || !strchr(VAR2 + VAR7 + 1, '')) || FUN2(VAR2))
        strcpy(VAR4, "");
    else
        FUN3(VAR4, VAR2, FUN4(VAR7 + 1, sizeof(VAR4)));
    if ((VAR6 = strchr(VAR4, '')))
        *VAR6 = '';
    FUN3(VAR5, VAR4, sizeof(VAR5));
    if ((VAR6 = strchr(VAR5, '')))
        *VAR6 = '';
    while (VAR3 = FUN5(VAR3))
    {
        if (!strcmp(VAR4, VAR3->VAR9))
            break;
        if (VAR3->VAR10 & VAR11 && !strcmp(VAR5, VAR3->VAR9))
            break;
    }
    return VAR3;
}