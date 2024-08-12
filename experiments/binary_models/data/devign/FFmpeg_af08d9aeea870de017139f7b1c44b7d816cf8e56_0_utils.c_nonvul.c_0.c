int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9;
    VAR10 *VAR11;
    AVPacket VAR12, *VAR13;
    int64_t VAR14 = FUN2(VAR2->VAR15);
    int VAR16 = VAR2->VAR17;
    for (VAR5 = 0; VAR5 < VAR2->VAR17; VAR5++)
    {
        VAR18 *VAR19;
        VAR3 *VAR20 = NULL;
        VAR11 = VAR2->VAR21[VAR5];
        if (VAR11->VAR19->VAR22 == VAR23 || VAR11->VAR19->VAR22 == VAR24)
        {
            if (!VAR11->VAR19->VAR25.VAR26)
                VAR11->VAR19->VAR25 = VAR11->VAR25;
        }
        if (!VAR11->VAR27 && !(VAR2->VAR28 & VAR29))
        {
            VAR11->VAR27 = FUN3(VAR11->VAR19->VAR30);
            if (VAR11->VAR31 == VAR32 && VAR11->VAR27)
            {
                VAR11->VAR27->VAR28 |= VAR33;
            }
        }
        assert(!VAR11->VAR19->VAR19);
        VAR19 = FUN4(VAR11->VAR19->VAR30);
        FUN5(VAR4 ? &VAR4[VAR5] : &VAR20, "", "", 0);
        if (VAR11->VAR19->VAR22 == VAR24 && VAR19 && !VAR11->VAR19->VAR19)
            FUN6(VAR11->VAR19, VAR19, VAR4 ? &VAR4[VAR5] : &VAR20);
        if (!FUN7(VAR11->VAR19))
        {
            if (VAR19 && !VAR11->VAR19->VAR19)
                FUN6(VAR11->VAR19, VAR19, VAR4 ? &VAR4[VAR5] : &VAR20);
        }
        if (!VAR4)
            FUN8(&VAR20);
    }
    for (VAR5 = 0; VAR5 < VAR2->VAR17; VAR5++)
    {
        VAR2->VAR21[VAR5]->VAR34->VAR35 = VAR36;
    }
    VAR6 = 0;
    VAR8 = 0;
    for (;;)
    {
        if (FUN9(&VAR2->VAR37))
        {
            VAR7 = VAR38;
            FUN10(VAR2, VAR39, "");
            break;
        }
        for (VAR5 = 0; VAR5 < VAR2->VAR17; VAR5++)
        {
            int VAR40 = 20;
            VAR11 = VAR2->VAR21[VAR5];
            if (!FUN7(VAR11->VAR19))
                break;
            if (FUN11(VAR11->VAR25) > 0.0005)
                VAR40 *= 2;
            if (VAR2->VAR41 >= 0)
                VAR40 = VAR2->VAR41;
            if (FUN12(VAR11->VAR19) && !(VAR11->VAR42.VAR26 && VAR11->VAR43.VAR26) && VAR11->VAR34->VAR44 < VAR40 && VAR11->VAR19->VAR22 == VAR23)
                break;
            if (VAR11->VAR27 && VAR11->VAR27->VAR27->VAR45 && !VAR11->VAR19->VAR46)
                break;
            if (VAR11->VAR47 == VAR36)
                break;
        }
        if (VAR5 == VAR2->VAR17)
        {
            if (!(VAR2->VAR48 & VAR49))
            {
                VAR7 = VAR6;
                FUN10(VAR2, VAR39, "");
                break;
            }
        }
        if (VAR8 >= VAR2->VAR50)
        {
            VAR7 = VAR6;
            FUN10(VAR2, VAR39, "", VAR2->VAR50);
            break;
        }
        VAR7 = FUN13(VAR2, &VAR12);
        if (VAR7 == FUN14(VAR51))
            continue;
        if (VAR7 < 0)
        {
            AVPacket VAR52 = {0};
            int VAR53;
            FUN15(&VAR52);
            VAR7 = -1;
            for (VAR5 = 0; VAR5 < VAR2->VAR17; VAR5++)
            {
                VAR11 = VAR2->VAR21[VAR5];
                do
                {
                    VAR53 = FUN16(VAR11, &VAR52, (VAR4 && VAR5 < VAR16) ? &VAR4[VAR5] : NULL);
                } while (VAR53 > 0 && !FUN7(VAR11->VAR19));
                if (VAR53 < 0)
                {
                    FUN10(VAR2, VAR54, "", VAR11->VAR55);
                }
                else if (!FUN7(VAR11->VAR19))
                {
                    char VAR56[256];
                    FUN17(VAR56, sizeof(VAR56), VAR11->VAR19, 0);
                    FUN10(VAR2, VAR54, "", VAR56);
                }
                else
                {
                    VAR7 = 0;
                }
            }
            break;
        }
        VAR13 = FUN18(&VAR2->VAR57, &VAR12, &VAR2->VAR58);
        if ((VAR7 = FUN19(VAR13)) < 0)
            goto VAR59;
        VAR8 += VAR13->VAR60;
        VAR11 = VAR2->VAR21[VAR13->VAR61];
        if (VAR11->VAR62 > 1)
        {
            if (VAR11->VAR25.VAR63 > 0 && FUN20(VAR11->VAR34->VAR64, VAR11->VAR25, VAR65) >= VAR2->VAR66)
            {
                FUN10(VAR2, VAR54, "");
                break;
            }
            VAR11->VAR34->VAR64 += VAR13->VAR67;
        }
        {
            int64_t VAR68 = VAR11->VAR34->VAR35;
            if (VAR13->VAR69 != VAR36 && VAR68 != VAR36 && VAR13->VAR69 > VAR68)
            {
                int64_t VAR67 = VAR13->VAR69 - VAR68;
                double VAR70 = VAR67 * FUN11(VAR11->VAR25);
                if (VAR11->VAR34->VAR44 < 2)
                    memset(VAR11->VAR34->VAR71, 0, sizeof(VAR11->VAR34->VAR71));
                for (VAR5 = 1; VAR5 < FUN21(VAR11->VAR34->VAR71); VAR5++)
                {
                    int VAR72 = FUN22(VAR5);
                    int VAR73 = FUN23(VAR70 * VAR72 / (1001 * 12));
                    double VAR74 = VAR70 - (double)VAR73 * 1001 * 12 / VAR72;
                    VAR11->VAR34->VAR71[VAR5] += VAR74 * VAR74;
                }
                VAR11->VAR34->VAR44++;
                if (VAR11->VAR34->VAR44 > 3)
                    VAR11->VAR34->VAR75 = FUN24(VAR11->VAR34->VAR75, VAR67);
            }
            if (VAR68 == VAR36 || VAR11->VAR34->VAR44 <= 1)
                VAR11->VAR34->VAR35 = VAR13->VAR69;
        }
        if (VAR11->VAR27 && VAR11->VAR27->VAR27->VAR45 && !VAR11->VAR19->VAR46)
        {
            int VAR5 = VAR11->VAR27->VAR27->FUN25(VAR11->VAR19, VAR13->VAR76, VAR13->VAR60);
            if (VAR5 > 0 && VAR5 < VAR77)
            {
                VAR11->VAR19->VAR78 = VAR5;
                VAR11->VAR19->VAR46 = FUN26(VAR11->VAR19->VAR78 + VAR79);
                if (!VAR11->VAR19->VAR46)
                    return FUN14(VAR80);
                memcpy(VAR11->VAR19->VAR46, VAR13->VAR76, VAR11->VAR19->VAR78);
                memset(VAR11->VAR19->VAR46 + VAR5, 0, VAR79);
            }
        }
        FUN16(VAR11, VAR13, (VAR4 && VAR5 < VAR16) ? &VAR4[VAR5] : NULL);
        VAR11->VAR62++;
        VAR6++;
    }
    for (VAR5 = 0; VAR5 < VAR2->VAR17; VAR5++)
    {
        VAR11 = VAR2->VAR21[VAR5];
        FUN27(VAR11->VAR19);
    }
    for (VAR5 = 0; VAR5 < VAR2->VAR17; VAR5++)
    {
        VAR11 = VAR2->VAR21[VAR5];
        if (VAR11->VAR62 > 2 && !VAR11->VAR43.VAR26 && VAR11->VAR34->VAR64)
            FUN28(&VAR11->VAR43.VAR26, &VAR11->VAR43.VAR63, (VAR11->VAR62 - 2) * (VAR81)VAR11->VAR25.VAR63, VAR11->VAR34->VAR64 * (VAR81)VAR11->VAR25.VAR26, 60000);
        if (VAR11->VAR19->VAR22 == VAR23)
        {
            if (FUN12(VAR11->VAR19) && VAR11->VAR34->VAR44 > 15 && VAR11->VAR34->VAR75 > 1 && !VAR11->VAR42.VAR26)
                FUN28(&VAR11->VAR42.VAR26, &VAR11->VAR42.VAR63, VAR11->VAR25.VAR63, VAR11->VAR25.VAR26 * VAR11->VAR34->VAR75, VAR82);
            if (VAR11->VAR34->VAR44 && !VAR11->VAR42.VAR26 && FUN12(VAR11->VAR19))
            {
                int VAR26 = 0;
                double VAR83 = 2 * FUN11(VAR11->VAR25);
                VAR83 = VAR83 * VAR83 * VAR11->VAR34->VAR44 * 1000 * 12 * 30;
                for (VAR9 = 1; VAR9 < FUN21(VAR11->VAR34->VAR71); VAR9++)
                {
                    double VAR74 = VAR11->VAR34->VAR71[VAR9] * FUN22(VAR9);
                    if (VAR74 < VAR83)
                    {
                        VAR83 = VAR74;
                        VAR26 = FUN22(VAR9);
                    }
                }
                if (VAR26 && (!VAR11->VAR42.VAR26 || (double)VAR26 / (12 * 1001) < 1.01 * FUN11(VAR11->VAR42)))
                    FUN28(&VAR11->VAR42.VAR26, &VAR11->VAR42.VAR63, VAR26, 12 * 1001, VAR82);
            }
            if (!VAR11->VAR42.VAR26)
            {
                if (VAR11->VAR19->VAR25.VAR63 * (VAR81)VAR11->VAR25.VAR26 <= VAR11->VAR19->VAR25.VAR26 * VAR11->VAR19->VAR84 * (VAR81)VAR11->VAR25.VAR63)
                {
                    VAR11->VAR42.VAR26 = VAR11->VAR19->VAR25.VAR63;
                    VAR11->VAR42.VAR63 = VAR11->VAR19->VAR25.VAR26 * VAR11->VAR19->VAR84;
                }
                else
                {
                    VAR11->VAR42.VAR26 = VAR11->VAR25.VAR63;
                    VAR11->VAR42.VAR63 = VAR11->VAR25.VAR26;
                }
            }
        }
        else if (VAR11->VAR19->VAR22 == VAR85)
        {
            if (!VAR11->VAR19->VAR86)
                VAR11->VAR19->VAR86 = FUN29(VAR11->VAR19->VAR30);
            switch (VAR11->VAR19->VAR87)
            {
            case VAR88:
                VAR11->VAR89 = VAR90;
                break;
            case VAR91:
                VAR11->VAR89 = VAR92;
                break;
            case VAR93:
                VAR11->VAR89 = VAR94;
                break;
            case VAR95:
                VAR11->VAR89 = VAR96;
                break;
            case VAR97:
                VAR11->VAR89 = VAR98;
                break;
            }
        }
    }
    FUN30(VAR2, VAR14);
    FUN31(VAR2);
    for (VAR5 = 0; VAR5 < VAR2->VAR17; VAR5++)
    {
        VAR11 = VAR2->VAR21[VAR5];
        if (VAR11->VAR19->VAR22 == VAR23)
        {
            if (VAR99 - VAR100)
            {
                VAR101 = &VAR2->VAR57;
                while (VAR102)
                {
                    if (VAR102->VAR61 != VAR5)
                        continue;
                    if (VAR102->VAR13->VAR69 < 0)
                        break;
                    if (VAR102->VAR13->VAR103 != VAR36)
                        break;
                    VAR102->VAR13->VAR69 -= VAR104;
                    VAR102 = VAR102->VAR105;
                }
                if (VAR102)
                    continue;
                VAR11->VAR106 -= VAR104;
            }
        }
    }
VAR59:
    for (VAR5 = 0; VAR5 < VAR2->VAR17; VAR5++)
    {
        if (VAR2->VAR21[VAR5]->VAR19)
            VAR2->VAR21[VAR5]->VAR19->VAR107 = 0;
        FUN32(&VAR2->VAR21[VAR5]->VAR34);
    }
    return VAR7;
}