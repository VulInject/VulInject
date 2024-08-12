static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR3;
    const VAR7 *VAR13 = VAR8 + VAR9;
    VAR7 *VAR14;
    int VAR15, VAR16, VAR17, VAR18, VAR19, VAR20;
    int64_t VAR21 = 0;
    GetBitContext VAR22;
    int VAR23 = VAR2->VAR24 == FUN2('', '', '', '');
    if (VAR9 < 27 + 7 * 2 + 4 * (3 + VAR23))
    {
        FUN3(VAR2, VAR25, "", VAR9);
        return -1;
    }
    if (VAR8[0] != '' || VAR8[13] != '' || VAR8[26] != '')
    {
        FUN3(VAR2, VAR25, "");
        return -1;
    }
    if (VAR6->VAR26 != VAR27)
        VAR21 = FUN4(VAR6->VAR26, VAR28, (VAR29){1, 1000});
    VAR12->VAR30 = FUN5(VAR8 + 1, VAR21);
    VAR12->VAR31 = FUN5(VAR8 + 14, VAR21);
    VAR8 += 27;
    VAR15 = FUN6(&VAR8);
    VAR16 = FUN6(&VAR8);
    if (FUN7(VAR15, VAR16, 0, VAR2) < 0)
        return -1;
    VAR17 = FUN6(&VAR8);
    VAR18 = FUN6(&VAR8);
    FUN6(&VAR8);
    FUN6(&VAR8);
    FUN6(&VAR8);
    VAR12->VAR32 = FUN8(sizeof(*VAR12->VAR32));
    if (!VAR12->VAR32)
        return FUN9(VAR33);
    VAR12->VAR32[0] = FUN8(sizeof(*VAR12->VAR32[0]));
    if (!VAR12->VAR32[0])
    {
        FUN10(&VAR12->VAR32);
        return FUN9(VAR33);
    }
    VAR12->VAR32[0]->VAR17 = VAR17;
    VAR12->VAR32[0]->VAR18 = VAR18;
    VAR12->VAR32[0]->VAR15 = VAR15;
    VAR12->VAR32[0]->VAR16 = VAR16;
    VAR12->VAR32[0]->VAR34 = VAR35;
    VAR12->VAR32[0]->VAR36[0] = VAR15;
    VAR12->VAR32[0]->VAR3[0] = FUN11(VAR15 * VAR16);
    VAR12->VAR32[0]->VAR37 = 4;
    VAR12->VAR32[0]->VAR3[1] = FUN8(VAR38);
    if (!VAR12->VAR32[0]->VAR3[0] || !VAR12->VAR32[0]->VAR3[1])
    {
        FUN10(&VAR12->VAR32[0]->VAR3[1]);
        FUN10(&VAR12->VAR32[0]->VAR3[0]);
        FUN10(&VAR12->VAR32[0]);
        FUN10(&VAR12->VAR32);
        return FUN9(VAR33);
    }
    VAR12->VAR39 = 1;
    for (VAR19 = 0; VAR19 < VAR12->VAR32[0]->VAR37; VAR19++)
        ((VAR40 *)VAR12->VAR32[0]->VAR3[1])[VAR19] = FUN12(&VAR8);
    if (!VAR23)
    {
        for (VAR19 = 1; VAR19 < VAR12->VAR32[0]->VAR37; VAR19++)
            ((VAR40 *)VAR12->VAR32[0]->VAR3[1])[VAR19] |= 0xff000000;
    }
    else
    {
        for (VAR19 = 0; VAR19 < VAR12->VAR32[0]->VAR37; VAR19++)
            ((VAR40 *)VAR12->VAR32[0]->VAR3[1])[VAR19] |= *VAR8++ << 24;
    }
    VAR41
    {
        VAR42 *VAR43;
        int VAR44;
        VAR43 = VAR12->VAR32[0];
        for (VAR44 = 0; VAR44 < 4; VAR44++)
        {
            VAR43->VAR45.VAR3[VAR44] = VAR43->VAR3[VAR44];
            VAR43->VAR45.VAR36[VAR44] = VAR43->VAR36[VAR44];
        }
    }
    FF_ENABLE_DEPRECATION_WARNINGS if ((VAR20 = FUN13(&VAR22, VAR8, VAR13 - VAR8)) < 0) return VAR20;
    VAR14 = VAR12->VAR32[0]->VAR3[0];
    for (VAR18 = 0; VAR18 < VAR16; VAR18++)
    {
        if (VAR18 == (VAR16 + 1) / 2)
            VAR14 = VAR12->VAR32[0]->VAR3[0] + VAR15;
        for (VAR17 = 0; VAR17 < VAR15;)
        {
            int VAR46 = VAR47[FUN14(&VAR22, 8)];
            int VAR48 = FUN15(&VAR22, 14 - 4 * (VAR46 >> 1));
            int VAR49 = FUN15(&VAR22, 2);
            VAR48 = FUN16(VAR48, VAR15 - VAR17);
            if (!VAR48)
                VAR48 = VAR15 - VAR17;
            memset(VAR14, VAR49, VAR48);
            VAR14 += VAR48;
            VAR17 += VAR48;
        }
        VAR14 += VAR15;
        FUN17(&VAR22);
    }
    *VAR4 = 1;
    return VAR9;