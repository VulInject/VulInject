static VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3;
    char VAR4[128];
    int VAR5;
    const char *VAR6;
    if (FUN2(VAR2) || FUN3(VAR2))
        return FUN4("");
    VAR6 = strchr(VAR2, '');
    if (!VAR6)
    {
        VAR3 = FUN5(VAR2);
        if (!VAR3)
        {
            VAR3 = FUN4("");
        }
        return VAR3;
    }
    VAR5 = VAR6 - VAR2;
    if (VAR5 > sizeof(VAR4) - 1)
        VAR5 = sizeof(VAR4) - 1;
    memcpy(VAR4, VAR2, VAR5);
    VAR4[VAR5] = '';
    FUN6(VAR3, &VAR7, VAR8)
    {
        if (VAR3->VAR9 && !strcmp(VAR3->VAR9, VAR4))
        {
            return VAR3;
        }
    }
    return NULL;
}