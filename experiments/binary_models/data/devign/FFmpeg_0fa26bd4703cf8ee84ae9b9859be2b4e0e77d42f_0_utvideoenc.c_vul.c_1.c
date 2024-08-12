static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    uint8_t VAR14[256];
    uint64_t VAR15[256] = {0};
    HuffEntry VAR16[256];
    uint32_t VAR17 = 0, VAR18 = 0;
    int VAR19, VAR20, send = 0;
    int VAR21;
    switch (VAR12->VAR22)
    {
    case VAR23:
        for (VAR19 = 0; VAR19 < VAR12->VAR24; VAR19++)
        {
            VAR20 = send;
            send = VAR8 * (VAR19 + 1) / VAR12->VAR24;
            FUN2(VAR4 + VAR20 * VAR6, VAR5 + VAR20 * VAR7, VAR6, VAR7, send - VAR20);
        }
        break;
    case VAR25:
        for (VAR19 = 0; VAR19 < VAR12->VAR24; VAR19++)
        {
            VAR20 = send;
            send = VAR8 * (VAR19 + 1) / VAR12->VAR24;
            FUN3(VAR4 + VAR20 * VAR6, VAR5 + VAR20 * VAR7, VAR6, VAR7, send - VAR20);
        }
        break;
    case VAR26:
        for (VAR19 = 0; VAR19 < VAR12->VAR24; VAR19++)
        {
            VAR20 = send;
            send = VAR8 * (VAR19 + 1) / VAR12->VAR24;
            FUN4(VAR12, VAR4 + VAR20 * VAR6, VAR5 + VAR20 * VAR7, VAR6, VAR7, send - VAR20);
        }
        break;
    default:
        FUN5(VAR2, VAR27, "", VAR12->VAR22);
        return VAR28;
    }
    FUN6(VAR5, VAR7, VAR8, VAR15);
    for (VAR21 = 0; VAR21 < 256; VAR21++)
    {
        if (VAR15[VAR21])
        {
            if (VAR15[VAR21] == VAR7 * VAR8)
            {
                for (VAR19 = 0; VAR19 < 256; VAR19++)
                {
                    if (VAR19 == VAR21)
                        FUN7(VAR10, 0);
                    else
                        FUN7(VAR10, 0xFF);
                }
                for (VAR19 = 0; VAR19 < VAR12->VAR24; VAR19++)
                    FUN8(VAR10, 0);
                return 0;
            }
            break;
        }
    }
    FUN9(VAR14, VAR15);
    for (VAR19 = 0; VAR19 < 256; VAR19++)
    {
        FUN7(VAR10, VAR14[VAR19]);
        VAR16[VAR19].VAR29 = VAR14[VAR19];
        VAR16[VAR19].VAR30 = VAR19;
    }
    FUN10(VAR16);
    send = 0;
    for (VAR19 = 0; VAR19 < VAR12->VAR24; VAR19++)
    {
        VAR20 = send;
        send = VAR8 * (VAR19 + 1) / VAR12->VAR24;
        VAR17 += FUN11(VAR5 + VAR20 * VAR7, VAR12->VAR31, VAR7 * (send - VAR20), VAR7, send - VAR20, VAR16) >> 3;
        VAR18 = VAR17 - VAR18;
        VAR12->VAR32.FUN12((VAR33 *)VAR12->VAR31, (VAR33 *)VAR12->VAR31, VAR18 >> 2);
        FUN8(VAR10, VAR17);
        FUN13(VAR10, 4 * (VAR12->VAR24 - VAR19 - 1) + VAR17 - VAR18, VAR34);
        FUN14(VAR10, VAR12->VAR31, VAR18);
        FUN13(VAR10, -4 * (VAR12->VAR24 - VAR19 - 1) - VAR17, VAR34);
        VAR18 = VAR17;
    }
    FUN13(VAR10, VAR17, VAR34);
    return 0;
}