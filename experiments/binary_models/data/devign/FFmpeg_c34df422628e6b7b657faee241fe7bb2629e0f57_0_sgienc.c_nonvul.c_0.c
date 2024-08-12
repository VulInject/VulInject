static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    const VAR5 *const VAR11 = VAR6;
    PutByteContext VAR12;
    VAR13 *VAR14, *VAR15;
    int VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    unsigned int VAR23, VAR24, VAR25, VAR26;
    unsigned int VAR27, VAR28, VAR29;
    FF_DISABLE_DEPRECATION_WARNINGS VAR2->VAR30->VAR31 = VAR32;
    VAR2->VAR30->VAR33 = 1;
    FF_ENABLE_DEPRECATION_WARNINGS FF_DISABLE_DEPRECATION_WARNINGS if (VAR2->VAR34 == VAR35) VAR9->VAR36 = 0;
    FF_ENABLE_DEPRECATION_WARNINGS VAR23 = VAR2->VAR23;
    VAR24 = VAR2->VAR24;
    VAR27 = 1;
    VAR28 = 0xFF;
    VAR29 = VAR37;
    switch (VAR2->VAR38)
    {
    case VAR39:
        VAR26 = VAR40;
        VAR25 = VAR41;
        break;
    case VAR42:
        VAR26 = VAR43;
        VAR25 = VAR44;
        break;
    case VAR45:
        VAR26 = VAR43;
        VAR25 = VAR46;
        break;
    case VAR47:
        VAR29 = !VAR37;
    case VAR48:
        VAR27 = 2;
        VAR28 = 0xFFFF;
        VAR26 = VAR40;
        VAR25 = VAR41;
        break;
    case VAR49:
        VAR29 = !VAR37;
    case VAR50:
        VAR27 = 2;
        VAR28 = 0xFFFF;
        VAR26 = VAR43;
        VAR25 = VAR44;
        break;
    case VAR51:
        VAR29 = !VAR37;
    case VAR52:
        VAR27 = 2;
        VAR28 = 0xFFFF;
        VAR26 = VAR43;
        VAR25 = VAR46;
        break;
    default:
        return VAR53;
    }
    VAR20 = VAR25 * VAR24 * 4;
    VAR19 = VAR54;
    if (!VAR9->VAR36)
        VAR19 += VAR25 * VAR24 * VAR23;
    else
        VAR19 += VAR20 * 2 + VAR25 * VAR24 * (2 * VAR23 + 1);
    if ((VAR21 = FUN2(VAR4, VAR27 * VAR19)) < 0)
    {
        FUN3(VAR2, VAR55, "", VAR19);
        return VAR21;
    }
    FUN4(&VAR12, VAR4->VAR56, VAR4->VAR57);
    FUN5(&VAR12, VAR58);
    FUN6(&VAR12, VAR9->VAR36);
    FUN6(&VAR12, VAR27);
    FUN5(&VAR12, VAR26);
    FUN5(&VAR12, VAR23);
    FUN5(&VAR12, VAR24);
    FUN5(&VAR12, VAR25);
    FUN7(&VAR12, 0L);
    FUN7(&VAR12, VAR28);
    FUN7(&VAR12, 0L);
    for (VAR22 = 0; VAR22 < 80; VAR22++)
        FUN6(&VAR12, 0L);
    FUN7(&VAR12, 0L);
    for (VAR22 = 0; VAR22 < 404; VAR22++)
        FUN6(&VAR12, 0L);
    if (VAR9->VAR36)
    {
        PutByteContext VAR59, VAR60;
        FUN4(&VAR59, VAR12.VAR61, VAR20);
        FUN8(&VAR12, VAR20);
        FUN4(&VAR60, VAR12.VAR61, VAR20);
        FUN8(&VAR12, VAR20);
        if (!(VAR15 = FUN9(VAR23 * VAR27)))
            return FUN10(VAR62);
        for (VAR18 = 0; VAR18 < VAR25; VAR18++)
        {
            VAR14 = VAR11->VAR56[0] + VAR11->VAR63[0] * (VAR24 - 1) + VAR18 * VAR27;
            for (VAR17 = 0; VAR17 < VAR24; VAR17++)
            {
                FUN7(&VAR59, FUN11(&VAR12));
                for (VAR16 = 0; VAR16 < VAR23 * VAR27; VAR16 += VAR27)
                    VAR15[VAR16] = VAR14[VAR25 * VAR16];
                VAR19 = FUN12(&VAR12, VAR15, VAR23, VAR27);
                if (VAR19 < 1)
                {
                    FUN13(VAR15);
                    return VAR53;
                }
                FUN7(&VAR60, VAR19);
                VAR14 -= VAR11->VAR63[0];
            }
        }
        FUN13(VAR15);
    }
    else
    {
        for (VAR18 = 0; VAR18 < VAR25; VAR18++)
        {
            VAR14 = VAR11->VAR56[0] + VAR11->VAR63[0] * (VAR24 - 1) + VAR18 * VAR27;
            for (VAR17 = 0; VAR17 < VAR24; VAR17++)
            {
                for (VAR16 = 0; VAR16 < VAR23 * VAR25; VAR16 += VAR25)
                    if (VAR27 == 1)
                        FUN6(&VAR12, VAR14[VAR16]);
                    else if (VAR29)
                        FUN5(&VAR12, ((VAR64 *)VAR14)[VAR16]);
                    else
                        FUN14(&VAR12, ((VAR64 *)VAR14)[VAR16]);
                VAR14 -= VAR11->VAR63[0];
            }
        }
    }
    VAR4->VAR57 = FUN11(&VAR12);
    VAR4->VAR65 |= VAR66;
    *VAR7 = 1;
    return 0;
}