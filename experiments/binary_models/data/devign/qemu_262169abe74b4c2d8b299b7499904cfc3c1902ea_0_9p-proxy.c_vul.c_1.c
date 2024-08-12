static int FUN1(VAR1 *VAR2, int VAR3, int *VAR4, void *VAR5)
{
    int VAR6;
    ProxyHeader VAR7;
    struct VAR8 *VAR9 = &VAR2->VAR10;
    *VAR4 = 0;
    VAR9->VAR11 = 0;
    VAR6 = FUN2(VAR2->VAR12, VAR9->VAR13, VAR14);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    VAR9->VAR11 = VAR14;
    FUN3(VAR9, 0, "", &VAR7.VAR3, &VAR7.VAR15);
    if (VAR7.VAR15 > VAR16)
    {
        int VAR17;
        while (VAR7.VAR15 > 0)
        {
            VAR17 = FUN4(VAR16, VAR7.VAR15);
            VAR17 = FUN2(VAR2->VAR12, VAR9->VAR13, VAR17);
            if (VAR17 < 0)
            {
                return VAR17;
            }
            VAR7.VAR15 -= VAR17;
        }
        *VAR4 = -VAR18;
        return 0;
    }
    VAR6 = FUN2(VAR2->VAR12, VAR9->VAR13 + VAR14, VAR7.VAR15);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    VAR9->VAR11 += VAR7.VAR15;
    if (VAR7.VAR3 == VAR19)
    {
        int VAR20;
        VAR20 = FUN3(VAR9, VAR14, "", VAR4);
        if (VAR20 < 0)
        {
            *VAR4 = VAR20;
        }
        return 0;
    }
    switch (VAR3)
    {
    case VAR21:
    {
        ProxyStat VAR22;
        VAR6 = FUN3(VAR9, VAR14, "", &VAR22.VAR23, &VAR22.VAR24, &VAR22.VAR25, &VAR22.VAR26, &VAR22.VAR27, &VAR22.VAR28, &VAR22.VAR29, &VAR22.VAR30, &VAR22.VAR31, &VAR22.VAR32, &VAR22.VAR33, &VAR22.VAR34, &VAR22.VAR35, &VAR22.VAR36, &VAR22.VAR37, &VAR22.VAR38);
        FUN5(VAR5, &VAR22);
        break;
    }
    case VAR39:
    {
        ProxyStatFS VAR40;
        VAR6 = FUN3(VAR9, VAR14, "", &VAR40.VAR41, &VAR40.VAR42, &VAR40.VAR43, &VAR40.VAR44, &VAR40.VAR45, &VAR40.VAR46, &VAR40.VAR47, &VAR40.VAR48[0], &VAR40.VAR48[1], &VAR40.VAR49, &VAR40.VAR50);
        FUN6(VAR5, &VAR40);
        break;
    }
    case VAR51:
    {
        V9fsString VAR52;
        FUN7(&VAR52);
        VAR6 = FUN3(VAR9, VAR14, "", &VAR52);
        strcpy(VAR5, VAR52.VAR53);
        FUN8(&VAR52);
        break;
    }
    case VAR54:
    case VAR55:
    {
        V9fsString VAR56;
        FUN7(&VAR56);
        VAR6 = FUN3(VAR9, VAR14, "", &VAR56);
        memcpy(VAR5, VAR56.VAR53, VAR56.VAR15);
        FUN8(&VAR56);
        break;
    }
    case VAR57:
        FUN3(VAR9, VAR14, "", VAR5);
        break;
    default:
        return -1;
    }
    if (VAR6 < 0)
    {
        *VAR4 = VAR6;
    }
    return 0;
}