static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11 = NULL, *VAR12 = NULL, *VAR13 = 0;
    int VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    if (VAR6->VAR20)
        VAR9 = VAR6->VAR20;
    for (;;)
    {
        uint64_t VAR21 = FUN2(VAR9);
        VAR14 = FUN3(VAR9, &VAR15);
        if (VAR14 < 0)
            return VAR14;
        if (VAR15 < 0)
        {
            FUN4(VAR2, VAR22, "", VAR15);
            return VAR23;
        }
        if (VAR14 == VAR24)
        {
            int VAR25 = FUN5(VAR9);
            VAR15 -= 2;
            for (VAR16 = 0; VAR16 < VAR2->VAR26; VAR16++)
            {
                VAR13 = VAR2->VAR27[VAR16];
                if (VAR13->VAR28->VAR29 == VAR30 && VAR13->VAR31 == VAR25)
                    goto VAR32;
            }
            FUN5(VAR9);
            FUN5(VAR9);
            FUN5(VAR9);
            FUN6(VAR9);
            VAR11 = FUN7(VAR2, NULL);
            if (!VAR11)
                return FUN8(VAR33);
            VAR11->VAR31 = VAR25;
            VAR11->VAR28->VAR29 = VAR30;
            VAR11->VAR28->VAR34 = FUN9(VAR35, FUN6(VAR9));
            FUN10(VAR11, 16, 256, VAR6->VAR36);
            VAR15 -= 8;
        }
        else if (VAR14 == VAR37 || VAR14 == VAR38)
        {
            for (VAR16 = 0; VAR16 < VAR2->VAR26; VAR16++)
            {
                VAR13 = VAR2->VAR27[VAR16];
                if (VAR13->VAR28->VAR29 == VAR39 && VAR13->VAR31 == -1)
                    goto VAR32;
            }
            FUN6(VAR9);
            VAR18 = FUN6(VAR9);
            VAR6->VAR40 = FUN5(VAR9);
            VAR12 = FUN11(VAR2, -1, VAR18);
            if (!VAR12)
                return FUN8(VAR33);
            VAR15 -= 4;
        }
        else if (VAR14 == VAR41)
        {
            int VAR25 = FUN5(VAR9);
            for (VAR16 = 0; VAR16 < VAR2->VAR26; VAR16++)
            {
                VAR13 = VAR2->VAR27[VAR16];
                if (VAR13->VAR28->VAR29 == VAR39 && VAR13->VAR31 == VAR25)
                    goto VAR32;
            }
            VAR18 = FUN6(VAR9);
            VAR12 = FUN11(VAR2, VAR25, VAR18);
            if (!VAR12)
                return FUN8(VAR33);
            VAR12->VAR42 = FUN12(VAR9);
            if (((VAR18 >> 4) & 15) == 2)
            {
                VAR12->VAR43 = FUN5(VAR9);
                VAR15 -= 2;
            }
            VAR15 -= 7;
            if ((VAR19 = FUN13(VAR9, VAR4, VAR15)) < 0)
                return VAR19;
            VAR4->VAR21 = VAR21;
            VAR4->VAR44 = VAR12->VAR45;
            return VAR4->VAR46;
        }
        else if (VAR14 == VAR47)
        {
            int VAR25 = FUN5(VAR9);
            VAR15 -= 2;
            for (VAR16 = 0; VAR16 < VAR2->VAR26; VAR16++)
            {
                VAR13 = VAR2->VAR27[VAR16];
                if (VAR13->VAR28->VAR29 == VAR30 && VAR13->VAR31 == VAR25)
                {
                    VAR17 = FUN5(VAR9);
                    VAR15 -= 2;
                    if (VAR15 <= 0)
                        goto VAR32;
                    if ((VAR19 = FUN13(VAR9, VAR4, VAR15)) < 0)
                        return VAR19;
                    VAR4->VAR21 = VAR21;
                    VAR4->VAR48 = VAR17;
                    VAR4->VAR44 = VAR13->VAR45;
                    return VAR4->VAR46;
                }
            }
        }
        else if (VAR14 == VAR49 || VAR14 == VAR50)
        {
            long VAR51;
            VAR52 *VAR53 = NULL, *VAR54 = NULL, *VAR55;
            uint32_t VAR56[VAR57] = {0};
            const int VAR58 = VAR14 == VAR50;
            const int VAR59 = 3 + VAR58;
            int VAR60, VAR61 = 0;
            const int VAR25 = FUN5(VAR9);
            const int VAR62 = FUN6(VAR9);
            const int VAR63 = FUN5(VAR9);
            const int VAR64 = FUN5(VAR9);
            VAR15 -= 2 + 1 + 2 + 2;
            switch (VAR62)
            {
            case 3:
                VAR60 = VAR63;
                VAR61 = FUN6(VAR9) + 1;
                VAR15--;
                break;
            case 4:
                VAR60 = VAR63 * 2;
                break;
            case 5:
                VAR60 = VAR63 * 4;
                break;
            default:
                FUN4(VAR2, VAR22, "", VAR62);
                goto VAR65;
            }
            VAR60 = FUN14(VAR60, 4);
            if (FUN15(VAR63, VAR64, 0, VAR2) < 0 || VAR60 >= VAR66 / VAR64 || VAR60 * VAR64 >= VAR66 - VAR61 * VAR59)
            {
                FUN4(VAR2, VAR22, "", VAR63, VAR64);
                goto VAR65;
            }
            VAR51 = VAR61 * VAR59 + VAR60 * VAR64;
            FUN16(VAR2, "", VAR25, VAR62, VAR63, VAR64, VAR60, VAR15, VAR51, VAR61);
            VAR54 = FUN17(VAR15);
            VAR53 = FUN17(VAR51);
            if (!VAR54 || !VAR53)
            {
                VAR19 = FUN8(VAR33);
                goto VAR67;
            }
            VAR15 = FUN18(VAR9, VAR54, VAR15);
            if (VAR15 < 0 || (VAR19 = FUN19(VAR53, &VAR51, VAR54, VAR15)) != VAR68)
            {
                FUN4(VAR2, VAR69, "");
                goto VAR65;
            }
            for (VAR16 = 0; VAR16 < VAR2->VAR26; VAR16++)
            {
                VAR13 = VAR2->VAR27[VAR16];
                if (VAR13->VAR28->VAR34 == VAR70 && VAR13->VAR31 == -3)
                    break;
            }
            if (VAR16 == VAR2->VAR26)
            {
                VAR11 = FUN7(VAR2, NULL);
                if (!VAR11)
                {
                    VAR19 = FUN8(VAR33);
                    goto VAR67;
                }
                VAR11->VAR31 = -3;
                VAR11->VAR28->VAR29 = VAR30;
                VAR11->VAR28->VAR34 = VAR70;
                FUN10(VAR11, 64, 256, VAR6->VAR36);
                VAR13 = VAR11;
            }
            VAR13->VAR28->VAR63 = VAR63;
            VAR13->VAR28->VAR64 = VAR64;
            if ((VAR19 = FUN20(VAR4, VAR51 - VAR61 * VAR59)) < 0)
                goto VAR67;
            VAR4->VAR21 = VAR21;
            VAR4->VAR44 = VAR13->VAR45;
            switch (VAR62)
            {
            case 3:
                VAR13->VAR28->VAR71 = VAR72;
                for (VAR16 = 0; VAR16 < VAR61; VAR16++)
                    if (VAR58)
                        VAR56[VAR16] = VAR53[3] << 24 | FUN21(VAR53 + 4 * VAR16);
                    else
                        VAR56[VAR16] = 0xffU << 24 | FUN21(VAR53 + 3 * VAR16);
                VAR55 = FUN22(VAR4, VAR73, VAR74);
                if (!VAR55)
                {
                    VAR19 = FUN8(VAR33);
                    goto VAR67;
                }
                memcpy(VAR55, VAR56, VAR74);
                break;
            case 4:
                VAR13->VAR28->VAR71 = VAR75;
                break;
            case 5:
                VAR13->VAR28->VAR71 = VAR58 ? VAR76 : VAR77;
                break;
            default:
                FUN23(0);
            }
            if (VAR60 * VAR64 > VAR4->VAR46)
            {
                VAR19 = VAR23;
                goto VAR67;
            }
            memcpy(VAR4->VAR78, VAR53 + VAR61 * VAR59, VAR60 * VAR64);
            VAR19 = VAR4->VAR46;
        VAR67:
            FUN24(&VAR54);
            FUN24(&VAR53);
            return VAR19;
        VAR65:
            FUN24(&VAR54);
            FUN24(&VAR53);
            FUN4(VAR2, VAR22, "");
        }
        else if (VAR14 == VAR79)
        {
            for (VAR16 = 0; VAR16 < VAR2->VAR26; VAR16++)
            {
                VAR13 = VAR2->VAR27[VAR16];
                if (VAR13->VAR28->VAR29 == VAR39 && VAR13->VAR31 == -1)
                {
                    if (VAR13->VAR28->VAR34 == VAR80)
                    {
                        FUN25(VAR9, 4);
                        VAR15 -= 4;
                        if (VAR15 <= 0)
                            goto VAR32;
                        if ((VAR19 = FUN13(VAR9, VAR4, VAR15)) < 0)
                            return VAR19;
                    }
                    else
                    {
                        if (VAR15 <= 0)
                            goto VAR32;
                        if ((VAR19 = FUN13(VAR9, VAR4, VAR15)) < 0)
                            return VAR19;
                    }
                    VAR4->VAR21 = VAR21;
                    VAR4->VAR44 = VAR13->VAR45;
                    return VAR4->VAR46;
                }
            }
        }
        else if (VAR14 == VAR81)
        {
            for (VAR16 = 0; VAR16 < VAR2->VAR26; VAR16++)
            {
                VAR13 = VAR2->VAR27[VAR16];
                if (VAR13->VAR28->VAR34 == VAR82 && VAR13->VAR31 == -2)
                    break;
            }
            if (VAR16 == VAR2->VAR26)
            {
                VAR11 = FUN7(VAR2, NULL);
                if (!VAR11)
                    return FUN8(VAR33);
                VAR11->VAR31 = -2;
                VAR11->VAR28->VAR29 = VAR30;
                VAR11->VAR28->VAR34 = VAR82;
                FUN10(VAR11, 64, 256, VAR6->VAR36);
                VAR13 = VAR11;
            }
            FUN5(VAR9);
            VAR15 -= 2;
            if (VAR15 < 4)
                goto VAR32;
            if ((VAR19 = FUN20(VAR4, VAR15)) < 0)
                return VAR19;
            if (FUN18(VAR9, VAR4->VAR78, 4) != 4)
            {
                FUN26(VAR4);
                return VAR23;
            }
            if (FUN27(VAR4->VAR78) == 0xffd8ffd9 || FUN27(VAR4->VAR78) == 0xffd9ffd8)
            {
                VAR4->VAR46 -= 4;
                VAR19 = FUN18(VAR9, VAR4->VAR78, VAR4->VAR46);
            }
            else
            {
                VAR19 = FUN18(VAR9, VAR4->VAR78 + 4, VAR4->VAR46 - 4);
                if (VAR19 >= 0)
                    VAR19 += 4;
            }
            if (VAR19 != VAR4->VAR46)
            {
                if (VAR19 < 0)
                {
                    FUN26(VAR4);
                    return VAR19;
                }
                FUN28(VAR4, VAR19);
            }
            VAR4->VAR21 = VAR21;
            VAR4->VAR44 = VAR13->VAR45;
            return VAR4->VAR46;
        }
        else
        {
            FUN4(VAR2, VAR83, "", VAR14);
        }
    VAR32:
        if (VAR15 < 0)
            FUN4(VAR2, VAR69, "", VAR15);
        VAR15 = FUN29(0, VAR15);
        FUN25(VAR9, VAR15);
    }