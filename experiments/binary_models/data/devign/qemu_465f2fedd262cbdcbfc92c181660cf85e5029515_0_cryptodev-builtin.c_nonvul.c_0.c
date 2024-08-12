static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    int VAR7;
    int VAR8;
    VAR9 *VAR10;
    int VAR11;
    VAR12 *VAR13;
    if (VAR4->VAR14 != VAR15)
    {
        FUN2(VAR6, "", VAR4->VAR14);
        return -1;
    }
    VAR11 = FUN3(VAR2);
    if (VAR11 < 0)
    {
        FUN2(VAR6, "", VAR16);
        return -1;
    }
    switch (VAR4->VAR17)
    {
    case VAR18:
        VAR8 = VAR19;
        VAR7 = FUN4(VAR4->VAR20, VAR8, VAR6);
        if (VAR7 < 0)
        {
            return -1;
        }
        break;
    case VAR21:
        VAR8 = VAR22;
        VAR7 = FUN4(VAR4->VAR20, VAR8, VAR6);
        if (VAR7 < 0)
        {
            return -1;
        }
        break;
    case VAR23:
        VAR8 = VAR24;
        VAR7 = FUN4(VAR4->VAR20, VAR8, VAR6);
        if (VAR7 < 0)
        {
            return -1;
        }
        break;
    case VAR25:
        VAR8 = VAR19;
        VAR7 = VAR26;
        break;
    default:
        FUN2(VAR6, "", VAR4->VAR17);
        return -1;
    }
    VAR10 = FUN5(VAR7, VAR8, VAR4->VAR27, VAR4->VAR20, VAR6);
    if (!VAR10)
    {
        return -1;
    }
    VAR13 = FUN6(VAR12, 1);
    VAR13->VAR10 = VAR10;
    VAR13->VAR28 = VAR4->VAR28;
    VAR13->VAR29 = VAR4->VAR14;
    VAR2->VAR30[VAR11] = VAR13;
    return VAR11;
}