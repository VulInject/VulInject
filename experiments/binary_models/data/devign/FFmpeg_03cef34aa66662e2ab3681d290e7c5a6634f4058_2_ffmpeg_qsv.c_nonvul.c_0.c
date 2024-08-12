int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    const enum VAR5 *VAR6;
    int VAR7, VAR8;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12;
    VAR13 *VAR14;
    if (!VAR2->VAR15->VAR16)
        return 0;
    for (VAR6 = VAR2->VAR15->VAR16; *VAR6 != VAR17; VAR6++)
        if (*VAR6 == VAR18)
            break;
    if (*VAR6 == VAR17)
        return 0;
    if (strcmp(VAR2->VAR19, "") || VAR2->VAR20 < 0)
        return 0;
    VAR4 = VAR21[VAR2->VAR20];
    if (VAR4->VAR22 != VAR23 || !VAR4->VAR24 || !VAR4->VAR24->VAR16)
        return 0;
    for (VAR6 = VAR4->VAR24->VAR16; *VAR6 != VAR17; VAR6++)
        if (*VAR6 == VAR18)
            break;
    if (*VAR6 == VAR17)
        return 0;
    for (VAR8 = 0; VAR8 < VAR25; VAR8++)
        if (VAR26[VAR8] != VAR2 && VAR26[VAR8]->VAR20 == VAR2->VAR20)
            return 0;
    FUN2(NULL, VAR27, "");
    if (!VAR28)
    {
        VAR7 = FUN3(VAR4);
        if (VAR7 < 0)
            goto VAR29;
    }
    VAR10 = FUN4(VAR28);
    if (!VAR10)
    {
        VAR7 = FUN5(VAR30);
        goto VAR29;
    }
    VAR12 = (VAR11 *)VAR10->VAR31;
    VAR14 = VAR12->VAR32;
    VAR12->VAR33 = FUN6(VAR4->VAR34, 32);
    VAR12->VAR35 = FUN6(VAR4->VAR36, 32);
    VAR12->VAR37 = VAR18;
    VAR12->VAR38 = VAR39;
    VAR12->VAR40 = 1;
    VAR14->VAR41 = VAR42;
    VAR7 = FUN7(VAR10);
    if (VAR7 < 0)
        goto VAR29;
    VAR4->VAR43->VAR6 = VAR18;
    VAR4->VAR44 = VAR18;
    VAR2->VAR45->VAR6 = VAR18;
    VAR2->VAR45->VAR46 = VAR10;
    return 0;
VAR29:
    FUN8(&VAR10);
    return VAR7;
}