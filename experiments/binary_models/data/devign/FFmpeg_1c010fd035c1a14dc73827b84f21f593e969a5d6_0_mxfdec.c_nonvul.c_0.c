static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    KLVPacket VAR6;
    int64_t VAR7 = 0;
    int64_t VAR8 = -1;
    uint64_t VAR9 = 1;
    int VAR10;
    VAR4->VAR11 = VAR12;
    VAR4->VAR13 = 1;
    if (!FUN2(VAR2->VAR14, VAR15, 14))
    {
        FUN3(VAR2, VAR16, "");
        return VAR17;
    }
    FUN4(VAR2->VAR14, -14, VAR18);
    VAR4->VAR19 = VAR2;
    VAR4->VAR20 = FUN5(VAR2->VAR14);
    FUN6(VAR2);
    while (!FUN7(VAR2->VAR14))
    {
        const VAR21 *VAR22;
        if (FUN5(VAR2->VAR14) == VAR8)
        {
            FUN3(VAR4->VAR19, VAR16, "");
            return VAR17;
        }
        if ((1ULL << 61) % VAR9++ == 0)
            VAR8 = FUN5(VAR2->VAR14);
        if (FUN8(&VAR6, VAR2->VAR14) < 0)
        {
            if (FUN9(VAR4) <= 0)
                break;
            else
                continue;
        }
        FUN10(VAR2, "", VAR6.VAR23);
        FUN11(VAR2, "" VAR24 "" VAR25 "", VAR6.VAR26, VAR6.VAR27);
        if (FUN12(VAR6.VAR23, VAR28) || FUN12(VAR6.VAR23, VAR29) || FUN12(VAR6.VAR23, VAR30) || FUN12(VAR6.VAR23, VAR31))
        {
            if (!VAR4->VAR32)
            {
                FUN3(VAR4->VAR19, VAR16, "");
                return VAR17;
            }
            if (!VAR4->VAR32->VAR7)
            {
                int64_t VAR33 = FUN13(VAR4->VAR32->VAR34 + VAR4->VAR32->VAR35, VAR4->VAR32->VAR36) + FUN13(VAR4->VAR32->VAR37, VAR4->VAR32->VAR36) + FUN13(VAR4->VAR32->VAR38, VAR4->VAR32->VAR36);
                if (VAR4->VAR39 == VAR40)
                {
                    VAR4->VAR32->VAR7 = FUN5(VAR2->VAR14);
                    VAR4->VAR32->VAR41 = VAR6.VAR26;
                }
                else
                {
                    VAR4->VAR32->VAR7 = VAR33;
                }
            }
            if (!VAR7)
                VAR7 = VAR6.VAR27;
            if (FUN14(VAR4) <= 0)
                break;
            continue;
        }
        else if (!memcmp(VAR6.VAR23, VAR15, 13) && VAR6.VAR23[13] >= 2 && VAR6.VAR23[13] <= 4 && VAR4->VAR32)
        {
            if (FUN9(VAR4) <= 0)
                break;
            else if (VAR4->VAR42)
                continue;
        }
        for (VAR22 = VAR43; VAR22->read; VAR22++)
        {
            if (FUN12(VAR6.VAR23, VAR22->VAR23))
            {
                int VAR44;
                if (VAR6.VAR23[5] == 0x53)
                {
                    VAR44 = FUN15(VAR4, &VAR6, VAR22->read, VAR22->VAR45, VAR22->VAR46);
                }
                else
                {
                    uint64_t VAR47 = FUN5(VAR2->VAR14) + VAR6.VAR26;
                    VAR44 = VAR22->read(VAR4, VAR2->VAR14, 0, VAR6.VAR26, VAR6.VAR23, VAR6.VAR27);
                    if (FUN5(VAR2->VAR14) > VAR47)
                    {
                        FUN3(VAR2, VAR16, "" VAR25 "", VAR6.VAR27);
                        return VAR17;
                    }
                    FUN4(VAR2->VAR14, VAR47, VAR48);
                }
                if (VAR44 < 0)
                {
                    FUN3(VAR2, VAR16, "");
                    return VAR44;
                }
                break;
            }
        }
        if (!VAR22->read)
            FUN16(VAR2->VAR14, VAR6.VAR26);
    }
    if (!VAR7)
    {
        FUN3(VAR2, VAR16, "");
        return VAR17;
    }
    FUN4(VAR2->VAR14, VAR7, VAR48);
    FUN17(VAR4);
    if ((VAR10 = FUN18(VAR4)) < 0)
        goto VAR49;
    if ((VAR10 = FUN19(VAR4)) < 0)
        goto VAR49;
    if (VAR4->VAR50 > 1)
    {
        FUN3(VAR4->VAR19, VAR51, "", VAR4->VAR50, VAR4->VAR52[0].VAR53);
    }
    else if (VAR4->VAR50 == 0 && VAR4->VAR39 == VAR40)
    {
        FUN3(VAR4->VAR19, VAR16, "");
        VAR10 = VAR17;
        goto VAR49;
    }
    FUN20(VAR2);
    return 0;
VAR49:
    FUN21(VAR2);
    return VAR10;
}