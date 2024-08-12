static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6, int VAR7, int VAR8, int VAR9, const VAR4 *VAR10, int VAR11, int VAR12)
{
    int VAR13, VAR14, VAR15, VAR16;
    int VAR17, send;
    VLC VAR18;
    GetBitContext VAR19;
    int VAR20, VAR21;
    const int VAR22 = ~(!VAR3 && VAR2->VAR23->VAR24 == VAR25);
    if (FUN2(VAR10, &VAR18, &VAR21))
    {
        FUN3(VAR2->VAR23, VAR26, "");
        return VAR27;
    }
    if (VAR21 >= 0)
    {
        send = 0;
        for (VAR15 = 0; VAR15 < VAR2->VAR28; VAR15++)
        {
            VAR4 *VAR29;
            VAR17 = send;
            send = (VAR9 * (VAR15 + 1) / VAR2->VAR28) & VAR22;
            VAR29 = VAR5 + VAR17 * VAR7;
            VAR20 = 0x80;
            for (VAR14 = VAR17; VAR14 < send; VAR14++)
            {
                for (VAR13 = 0; VAR13 < VAR8 * VAR6; VAR13 += VAR6)
                {
                    VAR16 = VAR21;
                    if (VAR12)
                    {
                        VAR20 += VAR16;
                        VAR16 = VAR20;
                    }
                    VAR29[VAR13] = VAR16;
                }
                VAR29 += VAR7;
            }
        }
        return 0;
    }
    VAR10 += 256;
    VAR11 -= 256;
    send = 0;
    for (VAR15 = 0; VAR15 < VAR2->VAR28; VAR15++)
    {
        VAR4 *VAR29;
        int VAR30, VAR31, VAR32;
        VAR17 = send;
        send = (VAR9 * (VAR15 + 1) / VAR2->VAR28) & VAR22;
        VAR29 = VAR5 + VAR17 * VAR7;
        VAR30 = VAR15 ? FUN4(VAR10 + VAR15 * 4 - 4) : 0;
        VAR31 = FUN4(VAR10 + VAR15 * 4);
        VAR32 = VAR31 - VAR30;
        if (!VAR32)
        {
            for (VAR14 = VAR17; VAR14 < send; VAR14++)
            {
                for (VAR13 = 0; VAR13 < VAR8 * VAR6; VAR13 += VAR6)
                    VAR29[VAR13] = 0x80;
                VAR29 += VAR7;
            }
            continue;
        }
        memcpy(VAR2->VAR33, VAR10 + VAR30 + VAR2->VAR28 * 4, VAR32);
        memset(VAR2->VAR33 + VAR32, 0, VAR34);
        VAR2->VAR35.FUN5((VAR36 *)VAR2->VAR33, (VAR36 *)VAR2->VAR33, (VAR31 - VAR30 + 3) >> 2);
        FUN6(&VAR19, VAR2->VAR33, VAR32 * 8);
        VAR20 = 0x80;
        for (VAR14 = VAR17; VAR14 < send; VAR14++)
        {
            for (VAR13 = 0; VAR13 < VAR8 * VAR6; VAR13 += VAR6)
            {
                if (FUN7(&VAR19) <= 0)
                {
                    FUN3(VAR2->VAR23, VAR26, "");
                    goto VAR37;
                }
                VAR16 = FUN8(&VAR19, VAR18.VAR38, VAR18.VAR39, 4);
                if (VAR16 < 0)
                {
                    FUN3(VAR2->VAR23, VAR26, "");
                    goto VAR37;
                }
                if (VAR12)
                {
                    VAR20 += VAR16;
                    VAR16 = VAR20;
                }
                VAR29[VAR13] = VAR16;
            }
            VAR29 += VAR7;
        }
        if (FUN7(&VAR19) > 32)
            FUN3(VAR2->VAR23, VAR40, "", FUN7(&VAR19));
    }
    FUN9(&VAR18);
    return 0;
VAR37:
    FUN9(&VAR18);
    return VAR27;
}