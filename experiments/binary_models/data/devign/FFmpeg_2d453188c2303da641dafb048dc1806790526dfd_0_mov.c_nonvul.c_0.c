static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    int64_t VAR10;
    uint8_t VAR11[16];
    static const uint8_t VAR12[] = {0xa5, 0xd4, 0x0b, 0x30, 0xe8, 0x14, 0x11, 0xdd, 0xba, 0x2f, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66};
    static const uint8_t VAR13[] = {0xbe, 0x7a, 0xcf, 0xcb, 0x97, 0xa9, 0x42, 0xe8, 0x9c, 0x71, 0x99, 0x94, 0x91, 0xe3, 0xaf, 0xac};
    static const uint8_t VAR14[] = {
        0xff,
        0xcc,
        0x82,
        0x63,
        0xf8,
        0x55,
        0x4a,
        0x93,
        0x88,
        0x14,
        0x58,
        0x7a,
        0x02,
        0x52,
        0x1f,
        0xdd,
    };
    if (VAR5.VAR15 < sizeof(VAR11) || VAR5.VAR15 >= FUN2(VAR16, VAR17))
        return VAR18;
    if (VAR2->VAR19->VAR20 < 1)
        return 0;
    VAR7 = VAR2->VAR19->VAR21[VAR2->VAR19->VAR20 - 1];
    VAR9 = VAR7->VAR22;
    VAR10 = FUN3(VAR4, VAR11, sizeof(VAR11));
    if (VAR10 < 0)
    {
        return VAR10;
    }
    else if (VAR10 != sizeof(VAR11))
    {
        return VAR18;
    }
    if (!memcmp(VAR11, VAR12, sizeof(VAR11)))
    {
        VAR23 *VAR24, *VAR25;
        char *VAR26;
        size_t VAR27 = VAR5.VAR15 - sizeof(VAR11);
        if (VAR27 < 4)
        {
            return VAR18;
        }
        VAR10 = FUN4(VAR4, 4);
        VAR27 -= 4;
        VAR24 = FUN5(VAR27 + 1);
        if (!VAR24)
        {
            return FUN6(VAR28);
        }
        VAR10 = FUN3(VAR4, VAR24, VAR27);
        if (VAR10 < 0)
        {
            FUN7(VAR24);
            return VAR10;
        }
        else if (VAR10 != VAR27)
        {
            FUN7(VAR24);
            return VAR18;
        }
        VAR25 = VAR24;
        while ((VAR25 = FUN8(VAR25, """)))
        {
            VAR25 += sizeof(""") - 1;
            VAR2->VAR29++;
            VAR2->VAR30 = FUN9(VAR2->VAR30, VAR2->VAR29, sizeof(*VAR2->VAR30));
            if (!VAR2->VAR30)
            {
                VAR2->VAR29 = 0;
                FUN7(VAR24);
                return FUN6(VAR28);
            }
            VAR31 = 0;
            VAR10 = FUN10(VAR25, &VAR26, 10);
            if (VAR10 < 0 || VAR31 || *VAR26 != '')
            {
                VAR2->VAR30[VAR2->VAR29 - 1] = 0;
            }
            else
            {
                VAR2->VAR30[VAR2->VAR29 - 1] = VAR10;
            }
        }
        FUN7(VAR24);
    }
    else if (!memcmp(VAR11, VAR13, sizeof(VAR11)))
    {
        VAR23 *VAR24;
        size_t VAR27 = VAR5.VAR15 - sizeof(VAR11);
        if (VAR2->VAR32)
        {
            VAR24 = FUN5(VAR27 + 1);
            if (!VAR24)
            {
                return FUN6(VAR28);
            }
            VAR10 = FUN3(VAR4, VAR24, VAR27);
            if (VAR10 < 0)
            {
                FUN7(VAR24);
                return VAR10;
            }
            else if (VAR10 != VAR27)
            {
                FUN7(VAR24);
                return VAR18;
            }
            VAR24[VAR27] = '';
            FUN11(&VAR2->VAR19->VAR33, "", VAR24, 0);
            FUN7(VAR24);
        }
        else
        {
            VAR10 = FUN4(VAR4, VAR27);
            if (VAR10 < 0)
                return VAR10;
        }
    }
    else if (!memcmp(VAR11, VAR14, sizeof(VAR11)))
    {
        size_t VAR27 = VAR5.VAR15 - sizeof(VAR11);
        VAR10 = FUN12(VAR9, VAR4, VAR27);
        if (VAR10 < 0)
            return VAR10;
        if (!VAR9->VAR34)
            FUN13(VAR2->VAR19, VAR35, "");
    }
    return 0;
}