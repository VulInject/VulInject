static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    int VAR16 = VAR9;
    int VAR17;
    int VAR18;
    enum
    {
        VAR19 = '',
        VAR20 = '',
        VAR21 = '',
        VAR22 = '',
        VAR23 = '',
        VAR24 = ''
    } VAR25;
    if (VAR9 < 12)
    {
        FUN2(VAR2, VAR26, "");
        return -1;
    }
    if (VAR8[0] == '' && VAR8[1] == '')
    {
        int VAR27;
        VAR8 = &VAR8[12];
        VAR9 -= 12;
        VAR27 = FUN3(VAR2, VAR12, VAR8, VAR9);
        if (VAR27 < 0)
            return VAR27;
        FUN4(&VAR12->VAR28, &VAR12->VAR29, VAR12->VAR30, VAR12->VAR31, VAR12->VAR32, VAR12->VAR33);
        return VAR16;
    }
    if (VAR8[0] != '' || VAR9 < 12)
    {
        FUN2(VAR2, VAR26, "");
        return -1;
    }
    VAR25 = VAR8[1];
    switch (VAR25)
    {
    case VAR21:
    case VAR20:
        VAR17 = !VAR8[2];
        break;
    case VAR24:
        VAR17 = 0;
        break;
    default:
        VAR17 = 1;
        break;
    }
    VAR8 = &VAR8[12];
    VAR9 -= 12;
    if (VAR25 == VAR21 || VAR25 == VAR22)
    {
        int VAR34 = VAR12->VAR35, VAR36 = VAR9;
        if (FUN5(VAR12->VAR37, &VAR34, VAR8, &VAR36))
            FUN2(VAR2, VAR26, "");
        VAR8 = VAR12->VAR37;
        VAR9 = VAR12->VAR35;
    }
    if (VAR12->VAR38)
    {
        int VAR39, VAR40, VAR41;
        if (VAR9 < VAR42 || VAR8[4] != VAR42 || VAR8[5] != VAR43)
        {
            FUN2(VAR2, VAR26, "");
            return VAR44;
        }
        VAR39 = FUN6(&VAR8[6]);
        VAR40 = FUN6(&VAR8[8]);
        VAR41 = VAR8[10];
        if (!FUN7(VAR2, VAR39, VAR40, VAR41))
            return -1;
        VAR8 = &VAR8[VAR42];
        VAR9 -= VAR42;
    }
    if (VAR17 && VAR12->VAR45.VAR3[0])
        VAR2->FUN8(VAR2, &VAR12->VAR45);
    VAR12->VAR45.VAR46 = 3;
    VAR12->VAR45.VAR47 = VAR48 | VAR49 | VAR50 | VAR51;
    VAR18 = VAR2->FUN9(VAR2, &VAR12->VAR45);
    if (VAR18 < 0)
    {
        FUN2(VAR2, VAR26, "");
        return -1;
    }
    VAR12->VAR45.VAR52 = VAR17 ? VAR53 : VAR54;
    VAR12->VAR45.VAR55 = VAR17;
    switch (VAR25)
    {
    case VAR22:
    case VAR19:
    {
        int VAR31 = VAR12->VAR31;
        if (VAR9 < VAR12->VAR30 * VAR31 * 3 / 2)
        {
            FUN2(VAR2, VAR26, "");
            VAR31 = VAR9 / VAR12->VAR30 / 3 * 2;
        }
        FUN10(&VAR12->VAR45, VAR8, VAR12->VAR30, VAR31);
        break;
    }
    case VAR21:
    case VAR20:
    {
        FUN11(&VAR12->VAR28, &VAR12->VAR45, VAR8, VAR9);
        break;
    }
    case VAR23:
    {
        memset(VAR12->VAR45.VAR3[0], 0, VAR12->VAR30 * VAR12->VAR31);
        memset(VAR12->VAR45.VAR3[1], 128, VAR12->VAR30 * VAR12->VAR31 / 4);
        memset(VAR12->VAR45.VAR3[2], 128, VAR12->VAR30 * VAR12->VAR31 / 4);
        break;
    }
    case VAR24:
    {
        break;
    }
    default:
        FUN2(VAR2, VAR26, "");
        return -1;
    }
    *VAR15 = VAR12->VAR45;
    *VAR4 = sizeof(VAR14);
    return VAR16;
}