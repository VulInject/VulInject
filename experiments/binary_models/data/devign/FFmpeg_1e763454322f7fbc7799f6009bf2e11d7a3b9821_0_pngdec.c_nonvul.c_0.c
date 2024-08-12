static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *const VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6->VAR3;
    int VAR12 = VAR6->VAR13;
    VAR14 *VAR15 = VAR3;
    VAR10 *VAR16 = NULL;
    uint32_t VAR17, VAR18;
    int VAR19;
    if (VAR12 < 8 || (memcmp(VAR11, VAR20, 8) != 0 && memcmp(VAR11, VAR21, 8) != 0))
    {
        FUN2(VAR2, VAR22, "", VAR12);
        return VAR23;
    }
    FUN3(&VAR8->VAR24, VAR11 + 8, VAR12 - 8);
    VAR8->VAR25 = VAR8->VAR26 = 0;
    VAR8->VAR27.VAR28 = VAR29;
    VAR8->VAR27.VAR30 = VAR31;
    VAR8->VAR27.VAR32 = NULL;
    VAR19 = FUN4(&VAR8->VAR27);
    if (VAR19 != VAR33)
        return -1;
    for (;;)
    {
        if (FUN5(&VAR8->VAR24) <= 0)
            goto VAR34;
        VAR18 = FUN6(&VAR8->VAR24);
        if (VAR18 > 0x7fffffff)
            goto VAR34;
        VAR17 = FUN7(&VAR8->VAR24);
        FUN8(VAR2, "", (VAR17 & 0xff), ((VAR17 >> 8) & 0xff), ((VAR17 >> 16) & 0xff), ((VAR17 >> 24) & 0xff), VAR18);
        switch (VAR17)
        {
        case FUN9('', '', '', ''):
            if (VAR18 != 13)
                goto VAR34;
            VAR8->VAR35 = FUN6(&VAR8->VAR24);
            VAR8->VAR36 = FUN6(&VAR8->VAR24);
            if (FUN10(VAR8->VAR35, VAR8->VAR36, 0, VAR2))
            {
                VAR8->VAR35 = VAR8->VAR36 = 0;
                goto VAR34;
            }
            VAR8->VAR37 = FUN11(&VAR8->VAR24);
            VAR8->VAR38 = FUN11(&VAR8->VAR24);
            VAR8->VAR39 = FUN11(&VAR8->VAR24);
            VAR8->VAR40 = FUN11(&VAR8->VAR24);
            VAR8->VAR41 = FUN11(&VAR8->VAR24);
            FUN12(&VAR8->VAR24, 4);
            VAR8->VAR26 |= VAR42;
            FUN8(VAR2, ""
                           "",
                    VAR8->VAR35, VAR8->VAR36, VAR8->VAR37, VAR8->VAR38, VAR8->VAR39, VAR8->VAR40, VAR8->VAR41);
            break;
        case FUN9('', '', '', ''):
            if (!(VAR8->VAR26 & VAR42))
                goto VAR34;
            if (!(VAR8->VAR26 & VAR43))
            {
                VAR2->VAR35 = VAR8->VAR35;
                VAR2->VAR36 = VAR8->VAR36;
                VAR8->VAR44 = FUN13(VAR8->VAR38);
                VAR8->VAR45 = VAR8->VAR37 * VAR8->VAR44;
                VAR8->VAR46 = (VAR8->VAR45 + 7) >> 3;
                VAR8->VAR47 = (VAR2->VAR35 * VAR8->VAR45 + 7) >> 3;
                if (VAR8->VAR37 == 8 && VAR8->VAR38 == VAR48)
                {
                    VAR2->VAR49 = VAR50;
                }
                else if (VAR8->VAR37 == 8 && VAR8->VAR38 == VAR51)
                {
                    VAR2->VAR49 = VAR52;
                }
                else if (VAR8->VAR37 == 8 && VAR8->VAR38 == VAR53)
                {
                    VAR2->VAR49 = VAR54;
                }
                else if (VAR8->VAR37 == 16 && VAR8->VAR38 == VAR53)
                {
                    VAR2->VAR49 = VAR55;
                }
                else if (VAR8->VAR37 == 16 && VAR8->VAR38 == VAR48)
                {
                    VAR2->VAR49 = VAR56;
                }
                else if (VAR8->VAR37 == 1 && VAR8->VAR38 == VAR53)
                {
                    VAR2->VAR49 = VAR57;
                }
                else if (VAR8->VAR37 == 8 && VAR8->VAR38 == VAR58)
                {
                    VAR2->VAR49 = VAR59;
                }
                else if (VAR8->VAR37 == 8 && VAR8->VAR38 == VAR60)
                {
                    VAR2->VAR49 = VAR61;
                }
                else if (VAR8->VAR37 == 16 && VAR8->VAR38 == VAR60)
                {
                    VAR2->VAR49 = VAR62;
                }
                else
                {
                    goto VAR34;
                }
                if (FUN14(VAR2, VAR15, VAR63) < 0)
                {
                    FUN2(VAR2, VAR22, "");
                    goto VAR34;
                }
                VAR15->VAR64 = VAR65;
                VAR15->VAR66 = 1;
                VAR15->VAR67 = !!VAR8->VAR41;
                if (!VAR8->VAR41)
                {
                    VAR8->VAR68 = VAR8->VAR47 + 1;
                }
                else
                {
                    VAR8->VAR69 = 0;
                    VAR8->VAR70 = FUN15(VAR8->VAR69, VAR8->VAR45, VAR8->VAR35);
                    VAR8->VAR68 = VAR8->VAR70 + 1;
                }
                FUN8(VAR2, "", VAR8->VAR47, VAR8->VAR68);
                VAR8->VAR71 = VAR15->VAR3[0];
                VAR8->VAR72 = VAR15->VAR73[0];
                if (VAR8->VAR38 == VAR58)
                    memcpy(VAR15->VAR3[1], VAR8->VAR74, 256 * sizeof(VAR75));
                VAR8->VAR76 = FUN16(VAR8->VAR47);
                if (!VAR8->VAR76)
                    goto VAR34;
                if (VAR8->VAR41 || VAR8->VAR38 == VAR51)
                {
                    VAR8->VAR77 = FUN17(VAR8->VAR47);
                    if (!VAR8->VAR77)
                        goto VAR34;
                }
                VAR16 = FUN17(VAR8->VAR47 + 16);
                if (!VAR16)
                    goto VAR34;
                VAR8->VAR78 = VAR16 + 15;
                VAR8->VAR27.VAR79 = VAR8->VAR68;
                VAR8->VAR27.VAR80 = VAR8->VAR78;
            }
            VAR8->VAR26 |= VAR43;
            if (FUN18(VAR8, VAR18) < 0)
                goto VAR34;
            FUN12(&VAR8->VAR24, 4);
            break;
        case FUN9('', '', '', ''):
        {
            int VAR81, VAR82, VAR83, VAR84, VAR85;
            if ((VAR18 % 3) != 0 || VAR18 > 256 * 3)
                goto VAR86;
            VAR81 = VAR18 / 3;
            for (VAR82 = 0; VAR82 < VAR81; VAR82++)
            {
                VAR83 = FUN11(&VAR8->VAR24);
                VAR84 = FUN11(&VAR8->VAR24);
                VAR85 = FUN11(&VAR8->VAR24);
                VAR8->VAR74[VAR82] = (0xff << 24) | (VAR83 << 16) | (VAR84 << 8) | VAR85;
            }
            for (; VAR82 < 256; VAR82++)
                VAR8->VAR74[VAR82] = (0xff << 24);
            VAR8->VAR26 |= VAR87;
            FUN12(&VAR8->VAR24, 4);
        }
        break;
        case FUN9('', '', '', ''):
        {
            int VAR88, VAR82;
            if (VAR8->VAR38 != VAR58 || VAR18 > 256 || !(VAR8->VAR26 & VAR87))
                goto VAR86;
            for (VAR82 = 0; VAR82 < VAR18; VAR82++)
            {
                VAR88 = FUN11(&VAR8->VAR24);
                VAR8->VAR74[VAR82] = (VAR8->VAR74[VAR82] & 0x00ffffff) | (VAR88 << 24);
            }
            FUN12(&VAR8->VAR24, 4);
        }
        break;
        case FUN9('', '', '', ''):
            if (!(VAR8->VAR26 & VAR89))
                goto VAR34;
            FUN12(&VAR8->VAR24, 4);
            goto VAR90;
        default:
        VAR86:
            FUN12(&VAR8->VAR24, VAR18 + 4);
            break;
        }
    }
VAR90:
    if (VAR8->VAR91->VAR3[0])
    {
        if (!(VAR6->VAR92 & VAR93))
        {
            int VAR82, VAR94;
            VAR10 *VAR95 = VAR15->VAR3[0];
            VAR10 *VAR96 = VAR8->VAR91->VAR3[0];
            for (VAR94 = 0; VAR94 < VAR8->VAR36; VAR94++)
            {
                for (VAR82 = 0; VAR82 < VAR8->VAR35 * VAR8->VAR46; VAR82++)
                    VAR95[VAR82] += VAR96[VAR82];
                VAR95 += VAR8->VAR72;
                VAR96 += VAR8->VAR72;
            }
        }
    }
    FUN19(VAR8->VAR91);
    if ((VAR19 = FUN20(VAR8->VAR91, VAR15)) < 0)
        goto VAR34;
    *VAR4 = 1;
    VAR19 = FUN21(&VAR8->VAR24);
VAR97:
    FUN22(&VAR8->VAR27);
    FUN23(VAR16);
    VAR8->VAR78 = NULL;
    FUN24(&VAR8->VAR76);
    FUN24(&VAR8->VAR77);
    return VAR19;
VAR34:
    VAR19 = -1;
    goto VAR97;
}