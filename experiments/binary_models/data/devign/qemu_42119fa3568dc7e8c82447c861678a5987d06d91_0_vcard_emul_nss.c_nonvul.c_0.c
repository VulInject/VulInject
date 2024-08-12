FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5;
    int VAR6;
    unsigned char **VAR7;
    int *VAR8;
    VAR9 **VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    VAR12 = FUN2(VAR2);
    if (VAR12 == NULL)
    {
        return NULL;
    }
    VAR4 = FUN3(VAR12, VAR15);
    if (VAR4 == NULL)
    {
        return NULL;
    }
    VAR6 = 0;
    for (VAR5 = VAR4; VAR5; VAR5 = FUN4(VAR5))
    {
        VAR6++;
    }
    FUN5(&VAR7, &VAR8, &VAR10, VAR6);
    VAR6 = 0;
    for (VAR5 = VAR4; VAR5; VAR5 = FUN4(VAR5))
    {
        SECItem VAR16;
        VAR17 *VAR18;
        SECStatus VAR19;
        VAR19 = FUN6(VAR20, VAR5, VAR21, &VAR16);
        if (VAR19 != VAR22)
        {
            continue;
        }
        VAR18 = FUN7(FUN8(), &VAR16, NULL, VAR23, VAR24);
        FUN9(&VAR16, VAR23);
        if (VAR18 == NULL)
        {
            continue;
        }
        VAR7[VAR6] = VAR18->VAR16.VAR25;
        VAR8[VAR6] = VAR18->VAR16.VAR26;
        VAR10[VAR6] = FUN10(VAR12, VAR18);
        VAR6++;
        FUN11(VAR18);
    }
    VAR14 = FUN12(VAR2, VAR7, VAR8, VAR10, VAR6);
    FUN13(VAR7);
    FUN13(VAR8);
    FUN13(VAR10);
    return VAR14;
}