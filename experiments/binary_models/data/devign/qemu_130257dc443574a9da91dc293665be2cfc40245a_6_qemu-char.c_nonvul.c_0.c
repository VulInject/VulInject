static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR4->VAR11.VAR10;
    VAR1 *VAR12, *VAR13;
    VAR14 *VAR15;
    VAR13 = FUN2(VAR10->VAR16);
    if (VAR13 == NULL)
    {
        FUN3(VAR8, "", VAR10->VAR16);
        return NULL;
    }
    VAR12 = FUN4();
    VAR15 = FUN5(VAR14, 1);
    VAR12->VAR17 = VAR15;
    VAR15->VAR13 = VAR13;
    VAR15->VAR18 = -1;
    VAR12->VAR19 = VAR20;
    VAR12->VAR21 = VAR22;
    VAR12->VAR23 = VAR24;
    VAR12->VAR25 = NULL;
    if (VAR13->VAR26)
    {
        VAR12->VAR26 = VAR27;
    }
    VAR12->VAR28 = VAR29 ? 0 : 1;
    VAR12->VAR30 = 1;
    return VAR12;
}