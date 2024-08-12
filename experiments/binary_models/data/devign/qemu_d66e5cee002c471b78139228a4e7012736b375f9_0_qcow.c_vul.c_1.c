static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    QCowHeader VAR15;
    VAR14 = FUN2(VAR2->VAR16, 0, &VAR15, sizeof(VAR15));
    if (VAR14 < 0)
    {
        goto VAR17;
    }
    FUN3(&VAR15.VAR18);
    FUN3(&VAR15.VAR19);
    FUN4(&VAR15.VAR20);
    FUN3(&VAR15.VAR21);
    FUN3(&VAR15.VAR22);
    FUN4(&VAR15.VAR23);
    FUN3(&VAR15.VAR24);
    FUN4(&VAR15.VAR25);
    if (VAR15.VAR18 != VAR26)
    {
        FUN5(VAR7, "");
        VAR14 = -VAR27;
        goto VAR17;
    }
    if (VAR15.VAR19 != VAR28)
    {
        char VAR19[64];
        snprintf(VAR19, sizeof(VAR19), "" VAR29, VAR15.VAR19);
        FUN6(VAR7, VAR30, VAR2->VAR31, "", VAR19);
        VAR14 = -VAR32;
        goto VAR17;
    }
    if (VAR15.VAR23 <= 1)
    {
        FUN5(VAR7, "");
        VAR14 = -VAR27;
        goto VAR17;
    }
    if (VAR15.VAR33 < 9 || VAR15.VAR33 > 16)
    {
        FUN5(VAR7, "");
        VAR14 = -VAR27;
        goto VAR17;
    }
    if (VAR15.VAR34 < 9 - 3 || VAR15.VAR34 > 16 - 3)
    {
        FUN5(VAR7, "");
        VAR14 = -VAR27;
        goto VAR17;
    }
    if (VAR15.VAR24 > VAR35)
    {
        FUN5(VAR7, "");
        VAR14 = -VAR27;
        goto VAR17;
    }
    VAR9->VAR36 = VAR15.VAR24;
    if (VAR9->VAR36)
    {
        VAR2->VAR37 = 1;
    }
    VAR9->VAR33 = VAR15.VAR33;
    VAR9->VAR38 = 1 << VAR9->VAR33;
    VAR9->VAR39 = 1 << (VAR9->VAR33 - 9);
    VAR9->VAR34 = VAR15.VAR34;
    VAR9->VAR40 = 1 << VAR9->VAR34;
    VAR2->VAR41 = VAR15.VAR23 / 512;
    VAR9->VAR42 = (1LL << (63 - VAR9->VAR33)) - 1;
    VAR13 = VAR9->VAR33 + VAR9->VAR34;
    if (VAR15.VAR23 > VAR43 - (1LL << VAR13))
    {
        FUN5(VAR7, "");
        VAR14 = -VAR27;
        goto VAR17;
    }
    else
    {
        uint64_t VAR44 = (VAR15.VAR23 + (1LL << VAR13) - 1) >> VAR13;
        if (VAR44 > VAR45 / sizeof(VAR46))
        {
            FUN5(VAR7, "");
            VAR14 = -VAR27;
            goto VAR17;
        }
        VAR9->VAR44 = VAR44;
    }
    VAR9->VAR25 = VAR15.VAR25;
    VAR9->VAR47 = FUN7(VAR9->VAR44 * sizeof(VAR46));
    VAR14 = FUN2(VAR2->VAR16, VAR9->VAR25, VAR9->VAR47, VAR9->VAR44 * sizeof(VAR46));
    if (VAR14 < 0)
    {
        goto VAR17;
    }
    for (VAR12 = 0; VAR12 < VAR9->VAR44; VAR12++)
    {
        FUN4(&VAR9->VAR47[VAR12]);
    }
    VAR9->VAR48 = FUN7(VAR9->VAR40 * VAR49 * sizeof(VAR46));
    VAR9->VAR50 = FUN7(VAR9->VAR38);
    VAR9->VAR51 = FUN7(VAR9->VAR38);
    VAR9->VAR52 = -1;
    if (VAR15.VAR20 != 0)
    {
        VAR11 = VAR15.VAR21;
        if (VAR11 > 1023)
        {
            VAR11 = 1023;
        }
        VAR14 = FUN2(VAR2->VAR16, VAR15.VAR20, VAR2->VAR53, VAR11);
        if (VAR14 < 0)
        {
            goto VAR17;
        }
        VAR2->VAR53[VAR11] = '';
    }
    FUN6(&VAR9->VAR54, VAR55, "", VAR2->VAR31, "");
    FUN8(VAR9->VAR54);
    FUN9(&VAR9->VAR56);
    return 0;
VAR17:
    FUN10(VAR9->VAR47);
    FUN10(VAR9->VAR48);
    FUN10(VAR9->VAR50);
    FUN10(VAR9->VAR51);
    return VAR14;
}