static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    int VAR12;
    size_t VAR13;
    APNGFctlChunk VAR14;
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
        VAR9->VAR35 = VAR2->VAR36 = FUN7(VAR37);
        if (!VAR2->VAR36)
            return FUN6(VAR34);
        VAR11 = FUN8(VAR2, VAR6);
        if (VAR11 < 0)
            return VAR11;
        VAR2->VAR38 = VAR9->VAR35 - VAR2->VAR36;
        VAR9->VAR39 = FUN7(VAR13);
        if (!VAR9->VAR39)
            return FUN6(VAR34);
    }
    else if (VAR9->VAR40)
    {
        VAR11 = FUN9(VAR2, VAR4, VAR13, 0);
        if (VAR11 < 0)
            return VAR11;
        memcpy(VAR4->VAR21, VAR9->VAR39, VAR9->VAR41);
        VAR4->VAR42 = VAR9->VAR41;
        VAR4->VAR43 = VAR4->VAR44 = VAR9->VAR40->VAR43;
    }
    if (VAR6)
    {
        VAR9->VAR45 = VAR9->VAR35 = VAR9->VAR39;
        VAR9->VAR46 = VAR9->VAR35 + VAR13;
        VAR14.VAR47 = VAR9->VAR47;
        ++VAR9->VAR47;
        VAR9->VAR35 += 26 + 12;
        VAR11 = FUN10(VAR2, VAR6, &VAR14, &VAR9->VAR48);
        if (VAR11 < 0)
            return VAR11;
        VAR14.VAR49 = 0;
        VAR14.VAR50 = 0;
    }
    else
    {
        VAR9->VAR48.VAR51 = VAR52;
    }
    if (VAR9->VAR40)
    {
        VAR53 *VAR54 = VAR4->VAR21;
        uint8_t VAR55[26];
        FUN11(VAR55 + 0, VAR9->VAR48.VAR47);
        FUN11(VAR55 + 4, VAR9->VAR48.VAR27);
        FUN11(VAR55 + 8, VAR9->VAR48.VAR30);
        FUN11(VAR55 + 12, VAR9->VAR48.VAR56);
        FUN11(VAR55 + 16, VAR9->VAR48.VAR57);
        FUN12(VAR55 + 20, VAR9->VAR48.VAR49);
        FUN12(VAR55 + 22, VAR9->VAR48.VAR50);
        VAR55[24] = VAR9->VAR48.VAR51;
        VAR55[25] = VAR9->VAR48.VAR58;
        FUN13(&VAR54, FUN14('', '', '', ''), VAR55, 26);
        *VAR7 = 1;
    }
    if (VAR6)
    {
        if (!VAR9->VAR40)
        {
            VAR9->VAR40 = FUN15();
            if (!VAR9->VAR40)
                return FUN6(VAR34);
        }
        else if (VAR9->VAR48.VAR51 != VAR59)
        {
            if (!VAR9->VAR60)
            {
                VAR9->VAR60 = FUN15();
                if (!VAR9->VAR60)
                    return FUN6(VAR34);
                VAR9->VAR60->VAR61 = VAR6->VAR61;
                VAR9->VAR60->VAR27 = VAR6->VAR27;
                VAR9->VAR60->VAR30 = VAR6->VAR30;
                if ((VAR11 = FUN16(VAR9->VAR60, 32)) < 0)
                    return VAR11;
            }
            memcpy(VAR9->VAR60->VAR21[0], VAR9->VAR40->VAR21[0], VAR9->VAR40->VAR62[0] * VAR9->VAR40->VAR30);
            if (VAR9->VAR48.VAR51 == VAR63)
            {
                uint32_t VAR64;
                uint8_t VAR65 = (VAR9->VAR28 + 7) >> 3;
                for (VAR64 = VAR9->VAR48.VAR57; VAR64 < VAR9->VAR48.VAR57 + VAR9->VAR48.VAR30; ++VAR64)
                {
                    size_t VAR66 = VAR9->VAR40->VAR62[0] * VAR64 + VAR65 * VAR9->VAR48.VAR56;
                    memset(VAR9->VAR60->VAR21[0] + VAR66, 0, VAR65 * VAR9->VAR48.VAR27);
                }
            }
        }
        FUN17(VAR9->VAR40);
        VAR11 = FUN18(VAR9->VAR40, (VAR5 *)VAR6);
        if (VAR11 < 0)
            return VAR11;
        VAR9->VAR48 = VAR14;
        VAR9->VAR41 = VAR9->VAR35 - VAR9->VAR45;
    }
    else
    {
        FUN19(&VAR9->VAR40);
    }
    return 0;
}