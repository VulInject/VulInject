static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6, ptrdiff_t VAR7, int VAR8, int VAR9, const VAR10 *VAR11, const VAR10 *VAR12, int VAR13)
{
    int VAR14, VAR15, VAR16, VAR17, VAR18;
    int VAR19, send;
    VLC VAR20;
    GetBitContext VAR21;
    int VAR22, VAR23;
    if ((VAR18 = FUN2(VAR12, &VAR20, &VAR23)) < 0)
    {
        FUN3(VAR2->VAR24, VAR25, "");
        return VAR18;
    }
    if (VAR23 >= 0)
    {
        send = 0;
        for (VAR16 = 0; VAR16 < VAR2->VAR26; VAR16++)
        {
            VAR4 *VAR27;
            VAR19 = send;
            send = (VAR9 * (VAR16 + 1) / VAR2->VAR26);
            VAR27 = VAR5 + VAR19 * VAR7;
            VAR22 = 0x200;
            for (VAR15 = VAR19; VAR15 < send; VAR15++)
            {
                for (VAR14 = 0; VAR14 < VAR8 * VAR6; VAR14 += VAR6)
                {
                    VAR17 = VAR23;
                    if (VAR13)
                    {
                        VAR22 += VAR17;
                        VAR22 &= 0x3FF;
                        VAR17 = VAR22;
                    }
                    VAR27[VAR14] = VAR17;
                }
                VAR27 += VAR7;
            }
        }
        return 0;
    }
    send = 0;
    for (VAR16 = 0; VAR16 < VAR2->VAR26; VAR16++)
    {
        VAR4 *VAR27;
        int VAR28, VAR29, VAR30;
        VAR19 = send;
        send = (VAR9 * (VAR16 + 1) / VAR2->VAR26);
        VAR27 = VAR5 + VAR19 * VAR7;
        VAR28 = VAR16 ? FUN4(VAR11 + VAR16 * 4 - 4) : 0;
        VAR29 = FUN4(VAR11 + VAR16 * 4);
        VAR30 = VAR29 - VAR28;
        if (!VAR30)
        {
            FUN3(VAR2->VAR24, VAR25, ""
                                           "");
            goto VAR31;
        }
        memset(VAR2->VAR32 + VAR30, 0, VAR33);
        VAR2->VAR34.FUN5((VAR35 *)VAR2->VAR32, (VAR35 *)(VAR11 + VAR28 + VAR2->VAR26 * 4), (VAR29 - VAR28 + 3) >> 2);
        FUN6(&VAR21, VAR2->VAR32, VAR30 * 8);
        VAR22 = 0x200;
        for (VAR15 = VAR19; VAR15 < send; VAR15++)
        {
            int VAR36 = VAR8 * VAR6;
            for (VAR14 = 0; VAR14 < VAR36; VAR14 += VAR6)
            {
                VAR17 = FUN7(&VAR21, VAR20.VAR37, VAR38, 3);
                if (VAR17 < 0)
                {
                    FUN3(VAR2->VAR24, VAR25, "");
                    goto VAR31;
                }
                if (VAR13)
                {
                    VAR22 += VAR17;
                    VAR22 &= 0x3FF;
                    VAR17 = VAR22;
                }
                VAR27[VAR14] = VAR17;
            }
            VAR27 += VAR7;
            if (FUN8(&VAR21) < 0)
            {
                FUN3(VAR2->VAR24, VAR25, "");
                goto VAR31;
            }
        }
        if (FUN8(&VAR21) > 32)
            FUN3(VAR2->VAR24, VAR39, "", FUN8(&VAR21));
    }
    FUN9(&VAR20);
    return 0;
VAR31:
    FUN9(&VAR20);
    return VAR40;
}