static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    int VAR12;
    size_t VAR13;
    APNGFctlChunk VAR14 = {0};
    if (VAR6 && VAR2->VAR15 == VAR16 && VAR9->VAR17 == VAR18)
    {
        uint32_t VAR19 = ~FUN2(FUN3(VAR20), ~0U, VAR6->VAR21[1], 256 * sizeof(VAR22));
        if (VAR2->VAR23 == 0)
        {
            VAR9->VAR24 = VAR19;
        }
        else if (VAR19 != VAR9->VAR24)
        {
            FUN4(VAR2, VAR25, "");
            return -1;
        }
    }
    VAR12 = FUN5(&VAR9->VAR26, (VAR2->VAR27 * VAR9->VAR28 + 7) >> 3);
    VAR13 = VAR29 + VAR2->VAR30 * (VAR12 + (4 + 12) * (((VAR31)VAR12 + VAR32 - 1) / VAR32));
    if (VAR13 > VAR33)
        return FUN6(VAR34);
    if (VAR2->VAR23 == 0)
    {
        if (!VAR6)
            return FUN6(VAR35);
        VAR9->VAR36 = VAR2->VAR37 = FUN7(VAR38);
        if (!VAR2->VAR37)
            return FUN6(VAR34);
        VAR11 = FUN8(VAR2, VAR6);
        if (VAR11 < 0)
            return VAR11;
        VAR2->VAR39 = VAR9->VAR36 - VAR2->VAR37;
        VAR9->VAR40 = FUN7(VAR13);
        if (!VAR9->VAR40)
            return FUN6(VAR34);
    }
    else if (VAR9->VAR41)
    {
        VAR11 = FUN9(VAR2, VAR4, VAR13, 0);
        if (VAR11 < 0)
            return VAR11;
        memcpy(VAR4->VAR21, VAR9->VAR40, VAR9->VAR42);
        VAR4->VAR43 = VAR9->VAR42;
        VAR4->VAR44 = VAR4->VAR45 = VAR9->VAR41->VAR44;
    }
    if (VAR6)
    {
        VAR9->VAR46 = VAR9->VAR36 = VAR9->VAR40;
        VAR9->VAR47 = VAR9->VAR36 + VAR13;
        VAR14.VAR48 = VAR9->VAR48;
        ++VAR9->VAR48;
        VAR9->VAR36 += 26 + 12;
        VAR11 = FUN10(VAR2, VAR6, &VAR14, &VAR9->VAR49);
        if (VAR11 < 0)
            return VAR11;
        VAR14.VAR50 = 0;
        VAR14.VAR51 = 0;
    }
    else
    {
        VAR9->VAR49.VAR52 = VAR53;
    }
    if (VAR9->VAR41)
    {
        VAR54 *VAR55 = VAR4->VAR21;
        uint8_t VAR56[26];
        FUN11(VAR56 + 0, VAR9->VAR49.VAR48);
        FUN11(VAR56 + 4, VAR9->VAR49.VAR27);
        FUN11(VAR56 + 8, VAR9->VAR49.VAR30);
        FUN11(VAR56 + 12, VAR9->VAR49.VAR57);
        FUN11(VAR56 + 16, VAR9->VAR49.VAR58);
        FUN12(VAR56 + 20, VAR9->VAR49.VAR50);
        FUN12(VAR56 + 22, VAR9->VAR49.VAR51);
        VAR56[24] = VAR9->VAR49.VAR52;
        VAR56[25] = VAR9->VAR49.VAR59;
        FUN13(&VAR55, FUN14('', '', '', ''), VAR56, 26);
        *VAR7 = 1;
    }
    if (VAR6)
    {
        if (!VAR9->VAR41)
        {
            VAR9->VAR41 = FUN15();
            if (!VAR9->VAR41)
                return FUN6(VAR34);
        }
        else if (VAR9->VAR49.VAR52 != VAR60)
        {
            if (!VAR9->VAR61)
            {
                VAR9->VAR61 = FUN15();
                if (!VAR9->VAR61)
                    return FUN6(VAR34);
                VAR9->VAR61->VAR62 = VAR6->VAR62;
                VAR9->VAR61->VAR27 = VAR6->VAR27;
                VAR9->VAR61->VAR30 = VAR6->VAR30;
                if ((VAR11 = FUN16(VAR9->VAR61, 32)) < 0)
                    return VAR11;
            }
            FUN17(VAR9->VAR61, VAR9->VAR41);
            if (VAR9->VAR49.VAR52 == VAR63)
            {
                uint32_t VAR64;
                uint8_t VAR65 = (VAR9->VAR28 + 7) >> 3;
                for (VAR64 = VAR9->VAR49.VAR58; VAR64 < VAR9->VAR49.VAR58 + VAR9->VAR49.VAR30; ++VAR64)
                {
                    size_t VAR66 = VAR9->VAR41->VAR67[0] * VAR64 + VAR65 * VAR9->VAR49.VAR57;
                    memset(VAR9->VAR61->VAR21[0] + VAR66, 0, VAR65 * VAR9->VAR49.VAR27);
                }
            }
        }
        FUN18(VAR9->VAR41);
        VAR11 = FUN19(VAR9->VAR41, (VAR5 *)VAR6);
        if (VAR11 < 0)
            return VAR11;
        VAR9->VAR49 = VAR14;
        VAR9->VAR42 = VAR9->VAR36 - VAR9->VAR46;
    }
    else
    {
        FUN20(&VAR9->VAR41);
    }
    return 0;
}