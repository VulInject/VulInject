static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    GUID VAR8;
    VAR9 *VAR10 = &VAR2->VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    int VAR15, VAR16, VAR17;
    INT64 VAR18;
    FUN2(VAR10, &VAR8);
    if (memcmp(&VAR8, &VAR19, sizeof(VAR20)))
        goto VAR21;
    FUN3(VAR10);
    FUN4(VAR10);
    FUN5(VAR10);
    FUN5(VAR10);
    memset(&VAR6->VAR22, -1, sizeof(VAR6->VAR22));
    for (;;)
    {
        FUN2(VAR10, &VAR8);
        VAR18 = FUN3(VAR10);
        FUN6("", FUN7(VAR10) - 24);
        FUN8(&VAR8);
        FUN6("", VAR18);
        if (VAR18 < 24)
            goto VAR21;
        if (!memcmp(&VAR8, &VAR23, sizeof(VAR20)))
        {
            FUN2(VAR10, &VAR6->VAR24.VAR25);
            VAR6->VAR24.VAR26 = FUN3(VAR10);
            VAR6->VAR24.VAR27 = FUN3(VAR10);
            VAR6->VAR24.VAR28 = FUN3(VAR10);
            VAR6->VAR24.VAR29 = FUN3(VAR10);
            VAR6->VAR24.VAR30 = FUN3(VAR10);
            VAR6->VAR24.VAR31 = FUN4(VAR10);
            VAR6->VAR24.VAR32 = FUN4(VAR10);
            VAR6->VAR24.VAR33 = FUN4(VAR10);
            VAR6->VAR24.VAR34 = FUN4(VAR10);
            VAR6->VAR24.VAR35 = FUN4(VAR10);
            VAR6->VAR24.VAR36 = FUN4(VAR10);
            VAR6->VAR37 = VAR6->VAR24.VAR35;
            VAR6->VAR38 = VAR6->VAR24.VAR28;
        }
        else if (!memcmp(&VAR8, &VAR39, sizeof(VAR20)))
        {
            int VAR40, VAR41, VAR42;
            unsigned int VAR43;
            INT64 VAR44, VAR45;
            VAR44 = FUN7(VAR10);
            VAR12 = FUN9(sizeof(VAR11));
            if (!VAR12)
                goto VAR21;
            VAR2->VAR46[VAR2->VAR47] = VAR12;
            VAR14 = FUN9(sizeof(VAR13));
            if (!VAR14)
                goto VAR21;
            VAR12->VAR7 = VAR14;
            VAR12->VAR48 = (VAR6->VAR24.VAR30 - VAR6->VAR24.VAR31) / 10;
            FUN2(VAR10, &VAR8);
            if (!memcmp(&VAR8, &VAR49, sizeof(VAR20)))
            {
                VAR40 = VAR50;
            }
            else if (!memcmp(&VAR8, &VAR51, sizeof(VAR20)))
            {
                VAR40 = VAR52;
            }
            else
            {
                goto VAR21;
            }
            FUN2(VAR10, &VAR8);
            VAR42 = FUN3(VAR10);
            FUN4(VAR10);
            FUN4(VAR10);
            VAR12->VAR41 = FUN10(VAR10) & 0x7f;
            VAR6->VAR22[VAR12->VAR41] = VAR2->VAR47++;
            FUN4(VAR10);
            VAR12->VAR53.VAR54 = VAR40;
            VAR12->VAR53.VAR55 = 1000000;
            if (VAR40 == VAR50)
            {
                VAR41 = FUN10(VAR10);
                VAR12->VAR53.VAR56 = VAR41;
                VAR12->VAR53.VAR57 = FUN10(VAR10);
                VAR12->VAR53.VAR58 = FUN4(VAR10);
                VAR12->VAR53.VAR59 = FUN4(VAR10) * 8;
                VAR12->VAR53.VAR60 = FUN10(VAR10);
                VAR17 = FUN10(VAR10);
                VAR12->VAR53.VAR61 = FUN11(VAR41, VAR17);
                VAR15 = FUN10(VAR10);
                if (VAR15 > 0)
                {
                    VAR12->VAR62 = FUN9(VAR15);
                    FUN12(VAR10, VAR12->VAR62, VAR15);
                    VAR12->VAR63 = VAR15;
                }
                VAR45 = FUN7(VAR10);
                if (VAR18 > (VAR45 + 8 - VAR44 + 24))
                {
                    VAR14->VAR64 = FUN5(VAR10);
                    VAR14->VAR65 = FUN10(VAR10);
                    VAR14->VAR66 = FUN10(VAR10);
                    VAR14->VAR67 = FUN10(VAR10);
                    VAR14->VAR68 = FUN5(VAR10);
                }
                if (VAR14->VAR64 > 1)
                {
                    if (!VAR14->VAR66 || (VAR14->VAR65 / VAR14->VAR66 <= 1))
                        VAR14->VAR64 = 0;
                }
                switch (VAR12->VAR53.VAR61)
                {
                case VAR69:
                    VAR12->VAR53.VAR70 = VAR71;
                    break;
                case VAR72:
                case VAR73:
                case VAR74:
                case VAR75:
                case VAR76:
                case VAR77:
                case VAR78:
                case VAR79:
                    VAR12->VAR53.VAR70 = 1;
                    break;
                default:
                    VAR12->VAR53.VAR70 = 1;
                    break;
                }
            }
            else
            {
                FUN4(VAR10);
                FUN4(VAR10);
                FUN5(VAR10);
                VAR15 = FUN10(VAR10);
                FUN4(VAR10);
                VAR12->VAR53.VAR80 = FUN4(VAR10);
                VAR12->VAR53.VAR81 = FUN4(VAR10);
                FUN10(VAR10);
                FUN10(VAR10);
                VAR43 = FUN4(VAR10);
                FUN13(VAR10, 20);
                if (VAR15 > 40)
                {
                    VAR12->VAR63 = VAR15 - 40;
                    VAR12->VAR62 = FUN9(VAR12->VAR63);
                    FUN12(VAR10, VAR12->VAR62, VAR12->VAR63);
                }
                VAR12->VAR53.VAR56 = VAR43;
                VAR12->VAR53.VAR61 = FUN14(VAR82, VAR43);
            }
            VAR45 = FUN7(VAR10);
            FUN13(VAR10, VAR18 - (VAR45 - VAR44 + 24));
        }
        else if (!memcmp(&VAR8, &VAR83, sizeof(VAR20)))
        {
            break;
        }
        else if (!memcmp(&VAR8, &VAR84, sizeof(VAR20)))
        {
            int VAR85, VAR86, VAR87, VAR88, VAR89;
            VAR85 = FUN10(VAR10);
            VAR86 = FUN10(VAR10);
            VAR87 = FUN10(VAR10);
            VAR88 = FUN10(VAR10);
            VAR89 = FUN10(VAR10);
            FUN15(VAR10, VAR85, VAR2->VAR90, sizeof(VAR2->VAR90));
            FUN15(VAR10, VAR86, VAR2->VAR91, sizeof(VAR2->VAR91));
            FUN15(VAR10, VAR87, VAR2->VAR92, sizeof(VAR2->VAR92));
            FUN15(VAR10, VAR88, VAR2->VAR93, sizeof(VAR2->VAR93));
            FUN13(VAR10, VAR89);
        }
        else if (!memcmp(&VAR8, &VAR94, sizeof(VAR20)))
        {
            int VAR95, VAR96;
            FUN2(VAR10, &VAR8);
            VAR95 = FUN4(VAR10);
            VAR96 = FUN10(VAR10);
        }
        else if (!memcmp(&VAR8, &VAR97, sizeof(VAR20)))
        {
            int VAR98, VAR95, VAR99, VAR100;
            char VAR101[256], *VAR102;
            char VAR103[16];
            FUN2(VAR10, &VAR8);
            FUN8(&VAR8);
            VAR99 = FUN4(VAR10);
            for (VAR16 = 0; VAR16 < VAR99; VAR16++)
            {
                VAR100 = FUN10(VAR10);
                FUN16(VAR10, VAR101, sizeof(VAR101));
                FUN16(VAR10, VAR101, sizeof(VAR101));
                VAR98 = FUN10(VAR10);
                VAR102 = VAR103;
                while (VAR98 > 0)
                {
                    VAR95 = FUN5(VAR10);
                    if ((VAR102 - VAR103) < sizeof(VAR103) - 1)
                        *VAR102++ = VAR95;
                    VAR98--;
                }
                *VAR102 = '';
            }
        }
        else if (FUN17(VAR10))
        {
            goto VAR21;
        }
        else
        {
            FUN18(VAR10, VAR18 - 24, VAR104);
        }
    }
    FUN2(VAR10, &VAR8);
    FUN3(VAR10);
    FUN5(VAR10);
    FUN5(VAR10);
    if (FUN17(VAR10))
        goto VAR21;
    VAR6->VAR105 = FUN7(VAR10);
    VAR6->VAR106 = 0;
    return 0;
VAR21:
    for (VAR16 = 0; VAR16 < VAR2->VAR47; VAR16++)
    {
        VAR11 *VAR12 = VAR2->VAR46[VAR16];
        if (VAR12)
        {
            FUN19(VAR12->VAR7);
            FUN19(VAR12->VAR62);
        }
        FUN19(VAR12);
    }
    return -1;
}