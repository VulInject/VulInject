VAR1 *FUN1(const char *VAR2)
{
    VAR3 *VAR4 = FUN2(-1);
    VAR5 *VAR6;
    VAR7 *VAR8;
    char VAR9[32];
    const char *VAR10;
    int VAR11;
    VAR10 = strchr(VAR2, '');
    if (VAR10)
    {
        VAR10++;
        VAR11 = VAR10 - VAR2;
        if (VAR11 > sizeof(VAR9))
            VAR11 = sizeof(VAR9);
        FUN3(VAR9, VAR11, VAR2);
    }
    else
    {
        VAR10 = "";
        FUN3(VAR9, sizeof(VAR9), VAR2);
    }
    for (VAR6 = VAR12; VAR6 != NULL; VAR6 = VAR6->VAR13)
    {
        if (VAR6->VAR14 != &VAR15)
            continue;
        VAR8 = FUN4(VAR7, VAR16, VAR6);
        if (VAR8->VAR17 == NULL)
            continue;
        if (strcmp(VAR8->VAR17, VAR9) != 0)
            continue;
        break;
    }
    if (VAR6 == NULL)
    {
        FUN5("", VAR9);
        return NULL;
    }
    if (!VAR8->VAR18)
    {
        if (*VAR10)
        {
            FUN5("", VAR9);
            return NULL;
        }
        return FUN6(VAR4, VAR8->VAR16.VAR19);
    }
    return VAR8->FUN7(VAR10);
}