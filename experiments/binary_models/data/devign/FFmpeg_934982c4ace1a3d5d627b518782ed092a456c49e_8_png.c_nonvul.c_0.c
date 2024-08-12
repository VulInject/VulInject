static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *const VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR3;
    VAR11 *const VAR13 = (VAR11 *)&VAR9->VAR12;
    uint32_t VAR14, VAR15;
    int VAR16, VAR17;
    VAR9->VAR18 = VAR9->VAR19 = VAR6;
    VAR9->VAR20 = VAR6 + VAR7;
    if (memcmp(VAR9->VAR19, VAR21, 8) != 0)
        return -1;
    VAR9->VAR19 += 8;
    VAR9->VAR22 = VAR9->VAR23 = 0;
    VAR9->VAR24.VAR25 = VAR26;
    VAR9->VAR24.VAR27 = VAR28;
    VAR9->VAR24.VAR29 = NULL;
    VAR16 = FUN2(&VAR9->VAR24);
    if (VAR16 != VAR30)
        return -1;
    for (;;)
    {
        int VAR31;
        if (VAR9->VAR19 >= VAR9->VAR20)
            goto VAR32;
        VAR15 = FUN3(&VAR9->VAR19);
        if (VAR15 > 0x7fffffff)
            goto VAR32;
        VAR31 = FUN3(&VAR9->VAR19);
        VAR14 = FUN4(VAR31);
        FUN5("", (VAR14 & 0xff), ((VAR14 >> 8) & 0xff), ((VAR14 >> 16) & 0xff), ((VAR14 >> 24) & 0xff), VAR15);
        switch (VAR14)
        {
        case FUN6('', '', '', ''):
            if (VAR15 != 13)
                goto VAR32;
            VAR9->VAR33 = FUN3(&VAR9->VAR19);
            VAR9->VAR34 = FUN3(&VAR9->VAR19);
            if (FUN7(VAR2, VAR9->VAR33, VAR9->VAR34))
            {
                VAR9->VAR33 = VAR9->VAR34 = 0;
                goto VAR32;
            }
            VAR9->VAR35 = *VAR9->VAR19++;
            VAR9->VAR36 = *VAR9->VAR19++;
            VAR9->VAR37 = *VAR9->VAR19++;
            VAR9->VAR38 = *VAR9->VAR19++;
            VAR9->VAR39 = *VAR9->VAR19++;
            VAR17 = FUN3(&VAR9->VAR19);
            VAR9->VAR23 |= VAR40;
            FUN5("", VAR9->VAR33, VAR9->VAR34, VAR9->VAR35, VAR9->VAR36, VAR9->VAR37, VAR9->VAR38, VAR9->VAR39);
            break;
        case FUN6('', '', '', ''):
            if (!(VAR9->VAR23 & VAR40))
                goto VAR32;
            if (!(VAR9->VAR23 & VAR41))
            {
                VAR2->VAR33 = VAR9->VAR33;
                VAR2->VAR34 = VAR9->VAR34;
                VAR9->VAR42 = FUN8(VAR9->VAR36);
                VAR9->VAR43 = VAR9->VAR35 * VAR9->VAR42;
                VAR9->VAR44 = (VAR9->VAR43 + 7) >> 3;
                VAR9->VAR45 = (VAR2->VAR33 * VAR9->VAR43 + 7) >> 3;
                if (VAR9->VAR35 == 8 && VAR9->VAR36 == VAR46)
                {
                    VAR2->VAR47 = VAR48;
                }
                else if (VAR9->VAR35 == 8 && VAR9->VAR36 == VAR49)
                {
                    VAR2->VAR47 = VAR50;
                }
                else if (VAR9->VAR35 == 8 && VAR9->VAR36 == VAR51)
                {
                    VAR2->VAR47 = VAR52;
                }
                else if (VAR9->VAR35 == 1 && VAR9->VAR36 == VAR51)
                {
                    VAR2->VAR47 = VAR53;
                }
                else if (VAR9->VAR36 == VAR54)
                {
                    VAR2->VAR47 = VAR55;
                }
                else
                {
                    goto VAR32;
                }
                if (VAR13->VAR3[0])
                    VAR2->FUN9(VAR2, VAR13);
                VAR13->VAR56 = 0;
                if (VAR2->FUN10(VAR2, VAR13) < 0)
                {
                    FUN11(VAR2, VAR57, "");
                    goto VAR32;
                }
                VAR13->VAR58 = VAR59;
                VAR13->VAR60 = 1;
                VAR13->VAR61 = !!VAR9->VAR39;
                if (!VAR9->VAR39)
                {
                    VAR9->VAR62 = VAR9->VAR45 + 1;
                }
                else
                {
                    VAR9->VAR63 = 0;
                    VAR9->VAR64 = FUN12(VAR9->VAR63, VAR9->VAR43, VAR9->VAR33);
                    VAR9->VAR62 = VAR9->VAR64 + 1;
                }
                FUN5("", VAR9->VAR45, VAR9->VAR62);
                VAR9->VAR65 = VAR13->VAR3[0];
                VAR9->VAR66 = VAR13->VAR67[0];
                if (VAR9->VAR36 == VAR54)
                    memcpy(VAR13->VAR3[1], VAR9->VAR68, 256 * sizeof(VAR69));
                VAR9->VAR70 = FUN13(VAR9->VAR45);
                if (!VAR9->VAR70)
                    goto VAR32;
                if (VAR9->VAR39 || VAR9->VAR36 == VAR49)
                {
                    VAR9->VAR71 = FUN14(VAR9->VAR45);
                    if (!VAR9->VAR71)
                        goto VAR32;
                }
                VAR9->VAR72 = FUN14(VAR9->VAR45 + 1);
                if (!VAR9->VAR72)
                    goto VAR32;
                VAR9->VAR24.VAR73 = VAR9->VAR62;
                VAR9->VAR24.VAR74 = VAR9->VAR72;
            }
            VAR9->VAR23 |= VAR41;
            if (FUN15(VAR9, VAR15) < 0)
                goto VAR32;
            VAR17 = FUN3(&VAR9->VAR19);
            break;
        case FUN6('', '', '', ''):
        {
            int VAR75, VAR76, VAR77, VAR78, VAR79;
            if ((VAR15 % 3) != 0 || VAR15 > 256 * 3)
                goto VAR80;
            VAR75 = VAR15 / 3;
            for (VAR76 = 0; VAR76 < VAR75; VAR76++)
            {
                VAR77 = *VAR9->VAR19++;
                VAR78 = *VAR9->VAR19++;
                VAR79 = *VAR9->VAR19++;
                VAR9->VAR68[VAR76] = (0xff << 24) | (VAR77 << 16) | (VAR78 << 8) | VAR79;
            }
            for (; VAR76 < 256; VAR76++)
            {
                VAR9->VAR68[VAR76] = (0xff << 24);
            }
            VAR9->VAR23 |= VAR81;
            VAR17 = FUN3(&VAR9->VAR19);
        }
        break;
        case FUN6('', '', '', ''):
        {
            int VAR82, VAR76;
            if (VAR9->VAR36 != VAR54 || VAR15 > 256 || !(VAR9->VAR23 & VAR81))
                goto VAR80;
            for (VAR76 = 0; VAR76 < VAR15; VAR76++)
            {
                VAR82 = *VAR9->VAR19++;
                VAR9->VAR68[VAR76] = (VAR9->VAR68[VAR76] & 0x00ffffff) | (VAR82 << 24);
            }
            VAR17 = FUN3(&VAR9->VAR19);
        }
        break;
        case FUN6('', '', '', ''):
            if (!(VAR9->VAR23 & VAR83))
                goto VAR32;
            VAR17 = FUN3(&VAR9->VAR19);
            goto VAR84;
        default:
        VAR80:
            VAR9->VAR19 += VAR15 + 4;
            break;
        }
    }
VAR84:
    *VAR12 = *(VAR11 *)&VAR9->VAR12;
    *VAR4 = sizeof(VAR85);
    VAR16 = VAR9->VAR19 - VAR9->VAR18;
VAR86:
    FUN16(&VAR9->VAR24);
    FUN17(&VAR9->VAR72);
    FUN17(&VAR9->VAR70);
    FUN17(&VAR9->VAR71);
    return VAR16;
VAR32:
    VAR16 = -1;
    goto VAR86;
}