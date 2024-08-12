static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7[VAR4->VAR8];
    int VAR9 = VAR4->VAR9;
    VAR10 *VAR11 = VAR4->VAR12;
    VAR10 *VAR12 = NULL;
    VAR13 *VAR14 = VAR2->VAR15;
    VAR16 *VAR17 = VAR6->VAR15;
    const uint64_t VAR18 = FUN2(VAR2->VAR19, 90000, VAR20) * 2;
    int64_t VAR21 = VAR22, VAR23 = VAR22;
    if (VAR14->VAR24)
    {
        FUN3(VAR2, VAR25, "");
        VAR14->VAR24 = 0;
        VAR14->VAR26 |= VAR27;
    }
    if (VAR14->VAR26 & VAR27)
    {
        VAR14->VAR28 = VAR14->VAR29 - 1;
        VAR14->VAR30 = VAR14->VAR31 - 1;
        VAR14->VAR26 &= ~VAR27;
    }
    if (VAR4->VAR23 != VAR22)
        VAR23 = VAR4->VAR23 + VAR18;
    if (VAR4->VAR21 != VAR22)
        VAR21 = VAR4->VAR21 + VAR18;
    if (VAR17->VAR32 && VAR23 == VAR22)
    {
        FUN3(VAR2, VAR33, "");
        return VAR34;
    }
    VAR17->VAR32 = 0;
    if (VAR6->VAR35->VAR36 == VAR37)
    {
        const VAR10 *VAR38 = VAR11, *VAR39 = VAR38 + VAR9;
        uint32_t VAR40 = -1;
        if (VAR4->VAR9 < 5 || FUN4(VAR4->VAR12) != 0x0000001)
        {
            FUN3(VAR2, VAR33, ""
                                    "");
            return VAR34;
        }
        do
        {
            VAR38 = FUN5(VAR38, VAR39, &VAR40);
            FUN6(VAR2, "", VAR40 & 0x1f);
        } while (VAR38 < VAR39 && (VAR40 & 0x1f) != 9 && (VAR40 & 0x1f) != 5 && (VAR40 & 0x1f) != 1);
        if ((VAR40 & 0x1f) != 9)
        {
            VAR12 = FUN7(VAR4->VAR9 + 6);
            if (!VAR12)
                return FUN8(VAR41);
            memcpy(VAR12 + 6, VAR4->VAR12, VAR4->VAR9);
            FUN9(VAR12, 0x00000001);
            VAR12[4] = 0x09;
            VAR12[5] = 0xf0;
            VAR11 = VAR12;
            VAR9 = VAR4->VAR9 + 6;
        }
    }
    else if (VAR6->VAR35->VAR36 == VAR42)
    {
        if (VAR4->VAR9 < 2)
        {
            FUN3(VAR2, VAR33, "");
            return VAR34;
        }
        if ((FUN10(VAR4->VAR12) & 0xfff0) != 0xfff0)
        {
            int VAR43;
            AVPacket VAR44;
            if (!VAR17->VAR45)
            {
                FUN3(VAR2, VAR33, ""
                                        "");
                return VAR34;
            }
            FUN11(&VAR44);
            VAR44.VAR12 = VAR4->VAR12;
            VAR44.VAR9 = VAR4->VAR9;
            VAR43 = FUN12(&VAR17->VAR45->VAR46);
            if (VAR43 < 0)
                return FUN8(VAR41);
            VAR43 = FUN13(VAR17->VAR45, &VAR44);
            if (VAR43 < 0)
            {
                FUN14(VAR17->VAR45->VAR46, &VAR12);
                VAR17->VAR45->VAR46 = NULL;
                FUN15(VAR12);
                return VAR43;
            }
            VAR9 = FUN14(VAR17->VAR45->VAR46, &VAR12);
            VAR17->VAR45->VAR46 = NULL;
            VAR11 = VAR12;
        }
    }
    if (VAR6->VAR35->VAR47 != VAR48)
    {
        FUN16(VAR2, VAR6, VAR11, VAR9, VAR23, VAR21, VAR4->VAR26 & VAR49);
        FUN15(VAR12);
        return 0;
    }
    if (VAR17->VAR50 + VAR9 > VAR14->VAR51)
    {
        if (VAR17->VAR50)
        {
            FUN16(VAR2, VAR6, VAR17->VAR52, VAR17->VAR50, VAR17->VAR53, VAR17->VAR54, VAR17->VAR55 & VAR49);
            VAR17->VAR50 = 0;
        }
        if (VAR9 > VAR14->VAR51)
        {
            FUN16(VAR2, VAR6, VAR11, VAR9, VAR23, VAR21, VAR4->VAR26 & VAR49);
            FUN15(VAR12);
            return 0;
        }
    }
    if (!VAR17->VAR50)
    {
        VAR17->VAR53 = VAR23;
        VAR17->VAR54 = VAR21;
        VAR17->VAR55 = VAR4->VAR26;
    }
    memcpy(VAR17->VAR52 + VAR17->VAR50, VAR11, VAR9);
    VAR17->VAR50 += VAR9;
    FUN15(VAR12);
    return 0;
}