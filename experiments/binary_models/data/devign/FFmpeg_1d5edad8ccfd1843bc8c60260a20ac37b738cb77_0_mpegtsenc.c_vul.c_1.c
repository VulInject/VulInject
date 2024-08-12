static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7[VAR4->VAR8];
    int VAR9 = VAR4->VAR9;
    VAR10 *VAR11 = VAR4->VAR12;
    VAR10 *VAR12 = NULL;
    VAR13 *VAR14 = VAR2->VAR15;
    VAR16 *VAR17 = VAR6->VAR15;
    const int64_t VAR18 = FUN2(VAR2->VAR19, 90000, VAR20) * 2;
    int64_t VAR21 = VAR4->VAR21, VAR22 = VAR4->VAR22;
    if (VAR14->VAR23)
    {
        FUN3(VAR2, VAR24, "");
        VAR14->VAR23 = 0;
        VAR14->VAR25 |= VAR26;
    }
    if (VAR14->VAR25 & VAR26)
    {
        VAR14->VAR27 = VAR14->VAR28 - 1;
        VAR14->VAR29 = VAR14->VAR30 - 1;
        VAR14->VAR25 &= ~VAR26;
    }
    if (VAR14->VAR31 < 1)
    {
        if (VAR22 != VAR32)
            VAR22 += VAR18;
        if (VAR21 != VAR32)
            VAR21 += VAR18;
    }
    if (VAR17->VAR33 && VAR22 == VAR32)
    {
        FUN3(VAR2, VAR34, "");
        return VAR35;
    }
    VAR17->VAR33 = 0;
    if (VAR6->VAR36->VAR37 == VAR38)
    {
        const VAR10 *VAR39 = VAR11, *VAR40 = VAR39 + VAR9;
        uint32_t VAR41 = -1;
        int VAR42 = (VAR4->VAR25 & VAR43) ? VAR6->VAR36->VAR44 : 0;
        int VAR45 = FUN4(VAR2, VAR6, VAR4);
        if (VAR45 < 0)
            return VAR45;
        if (VAR42 && FUN5(VAR6->VAR36->VAR46) > 1)
            VAR42 = 0;
        do
        {
            VAR39 = FUN6(VAR39, VAR40, &VAR41);
            FUN3(VAR2, VAR47, "", VAR41 & 0x1f);
            if ((VAR41 & 0x1f) == 7)
                VAR42 = 0;
        } while (VAR39 < VAR40 && (VAR41 & 0x1f) != 9 && (VAR41 & 0x1f) != 5 && (VAR41 & 0x1f) != 1);
        if ((VAR41 & 0x1f) != 5)
            VAR42 = 0;
        if ((VAR41 & 0x1f) != 9)
        {
            VAR12 = FUN7(VAR4->VAR9 + 6 + VAR42);
            if (!VAR12)
                return FUN8(VAR48);
            memcpy(VAR12 + 6, VAR6->VAR36->VAR46, VAR42);
            memcpy(VAR12 + 6 + VAR42, VAR4->VAR12, VAR4->VAR9);
            FUN9(VAR12, 0x00000001);
            VAR12[4] = 0x09;
            VAR12[5] = 0xf0;
            VAR11 = VAR12;
            VAR9 = VAR4->VAR9 + 6 + VAR42;
        }
    }
    else if (VAR6->VAR36->VAR37 == VAR49)
    {
        if (VAR4->VAR9 < 2)
        {
            FUN3(VAR2, VAR34, "");
            return VAR35;
        }
        if ((FUN10(VAR4->VAR12) & 0xfff0) != 0xfff0)
        {
            int VAR45;
            AVPacket VAR50;
            if (!VAR17->VAR51)
            {
                FUN3(VAR2, VAR34, ""
                                        "");
                return VAR35;
            }
            FUN11(&VAR50);
            VAR50.VAR12 = VAR4->VAR12;
            VAR50.VAR9 = VAR4->VAR9;
            FUN12(VAR4->VAR21 != VAR32);
            VAR50.VAR21 = FUN13(VAR4->VAR21, VAR6->VAR52, VAR17->VAR51->VAR7[0]->VAR52);
            VAR45 = FUN14(&VAR17->VAR51->VAR53);
            if (VAR45 < 0)
                return FUN8(VAR48);
            VAR45 = FUN15(VAR17->VAR51, &VAR50);
            if (VAR45 < 0)
            {
                FUN16(&VAR17->VAR51->VAR53);
                return VAR45;
            }
            VAR9 = FUN17(VAR17->VAR51->VAR53, &VAR12);
            VAR17->VAR51->VAR53 = NULL;
            VAR11 = VAR12;
        }
    }
    else if (VAR6->VAR36->VAR37 == VAR54)
    {
        int VAR45 = FUN18(VAR2, VAR6, VAR4);
        if (VAR45 < 0)
            return VAR45;
    }
    if (VAR4->VAR21 != VAR32)
    {
        int VAR55;
        for (VAR55 = 0; VAR55 < VAR2->VAR56; VAR55++)
        {
            VAR5 *VAR57 = VAR2->VAR7[VAR55];
            VAR16 *VAR58 = VAR57->VAR15;
            if (VAR58->VAR59 && (VAR58->VAR60 == VAR32 || VAR21 - VAR58->VAR60 > VAR18 / 2))
            {
                FUN19(VAR2, VAR57, VAR58->VAR61, VAR58->VAR59, VAR58->VAR62, VAR58->VAR60, VAR58->VAR63 & VAR43);
                VAR58->VAR59 = 0;
            }
        }
    }
    if (VAR17->VAR59 && (VAR17->VAR59 + VAR9 > VAR14->VAR64 || (VAR21 != VAR32 && VAR17->VAR60 != VAR32 && FUN20(VAR21 - VAR17->VAR60, VAR6->VAR52, VAR2->VAR19, VAR65) >= 0)))
    {
        FUN19(VAR2, VAR6, VAR17->VAR61, VAR17->VAR59, VAR17->VAR62, VAR17->VAR60, VAR17->VAR63 & VAR43);
        VAR17->VAR59 = 0;
    }
    if (VAR6->VAR36->VAR66 != VAR67 || VAR9 > VAR14->VAR64)
    {
        FUN12(!VAR17->VAR59);
        FUN19(VAR2, VAR6, VAR11, VAR9, VAR22, VAR21, VAR4->VAR25 & VAR43);
        FUN21(VAR12);
        return 0;
    }
    if (!VAR17->VAR59)
    {
        VAR17->VAR62 = VAR22;
        VAR17->VAR60 = VAR21;
        VAR17->VAR63 = VAR4->VAR25;
    }
    memcpy(VAR17->VAR61 + VAR17->VAR59, VAR11, VAR9);
    VAR17->VAR59 += VAR9;
    FUN21(VAR12);
    return 0;
}