static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6, ptrdiff_t VAR7, int VAR8, int VAR9, const VAR4 *VAR10, int VAR11)
{
    int VAR12, VAR13, VAR14, VAR15;
    int VAR16, send;
    VLC VAR17;
    GetBitContext VAR18;
    int VAR19, VAR20;
    const int VAR21 = VAR2->VAR22 ? ~(1 + 2 * (!VAR3 && VAR2->VAR23->VAR24 == VAR25)) : ~(!VAR3 && VAR2->VAR23->VAR24 == VAR25);
    if (FUN2(VAR10, &VAR17, &VAR20))
    {
        FUN3(VAR2->VAR23, VAR26, "");
        return VAR27;
    }
    if (VAR20 >= 0)
    {
        send = 0;
        for (VAR14 = 0; VAR14 < VAR2->VAR28; VAR14++)
        {
            VAR4 *VAR29;
            VAR16 = send;
            send = (VAR9 * (VAR14 + 1) / VAR2->VAR28) & VAR21;
            VAR29 = VAR5 + VAR16 * VAR7;
            VAR19 = 0x80;
            for (VAR13 = VAR16; VAR13 < send; VAR13++)
            {
                for (VAR12 = 0; VAR12 < VAR8 * VAR6; VAR12 += VAR6)
                {
                    VAR15 = VAR20;
                    if (VAR11)
                    {
                        VAR19 += VAR15;
                        VAR15 = VAR19;
                    }
                    VAR29[VAR12] = VAR15;
                }
                VAR29 += VAR7;
            }
        }
        return 0;
    }
    VAR10 += 256;
    send = 0;
    for (VAR14 = 0; VAR14 < VAR2->VAR28; VAR14++)
    {
        VAR4 *VAR29;
        int VAR30, VAR31, VAR32;
        VAR16 = send;
        send = (VAR9 * (VAR14 + 1) / VAR2->VAR28) & VAR21;
        VAR29 = VAR5 + VAR16 * VAR7;
        VAR30 = VAR14 ? FUN4(VAR10 + VAR14 * 4 - 4) : 0;
        VAR31 = FUN4(VAR10 + VAR14 * 4);
        VAR32 = VAR31 - VAR30;
        if (!VAR32)
        {
            FUN3(VAR2->VAR23, VAR26, ""
                                           "");
            goto VAR33;
        }
        memset(VAR2->VAR34 + VAR32, 0, VAR35);
        VAR2->VAR36.FUN5((VAR37 *)VAR2->VAR34, (VAR37 *)(VAR10 + VAR30 + VAR2->VAR28 * 4), (VAR31 - VAR30 + 3) >> 2);
        FUN6(&VAR18, VAR2->VAR34, VAR32 * 8);
        VAR19 = 0x80;
        for (VAR13 = VAR16; VAR13 < send; VAR13++)
        {
            int VAR38 = VAR8 * VAR6;
            for (VAR12 = 0; VAR12 < VAR38; VAR12 += VAR6)
            {
                VAR15 = FUN7(&VAR18, VAR17.VAR39, VAR40, 3);
                if (VAR15 < 0)
                {
                    FUN3(VAR2->VAR23, VAR26, "");
                    goto VAR33;
                }
                if (VAR11)
                {
                    VAR19 += VAR15;
                    VAR15 = VAR19;
                }
                VAR29[VAR12] = VAR15;
            }
            if (FUN8(&VAR18) < 0)
            {
                FUN3(VAR2->VAR23, VAR26, "");
                goto VAR33;
            }
            VAR29 += VAR7;
        }
        if (FUN8(&VAR18) > 32)
            FUN3(VAR2->VAR23, VAR41, "", FUN8(&VAR18));
    }
    FUN9(&VAR17);
    return 0;
VAR33:
    FUN9(&VAR17);
    return VAR27;
}