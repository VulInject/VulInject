FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    char *VAR8;
    int VAR9, VAR10, VAR11 = 0;
    uint32_t VAR12;
    VAR6->VAR13 = VAR2;
    VAR8 = NULL;
    if ((VAR11 = FUN2(VAR6, &VAR8, &VAR9)) < 0)
        return VAR11;
    if ((VAR8 == NULL) || strcmp(VAR8, ""))
    {
        FUN3(VAR6->VAR13, VAR14, "", VAR8 ? VAR8 : "");
        if (VAR8)
            FUN4(VAR8);
        return VAR15;
    }
    FUN4(VAR8);
    if (VAR9 > 2)
    {
        FUN3(VAR6->VAR13, VAR14, "", VAR9);
        return VAR15;
    }
    while (1)
    {
        if (!(VAR12 = FUN5(VAR6, &VAR10)))
            return FUN6(VAR16);
        if (VAR12 == VAR17)
            break;
        FUN3(VAR6->VAR13, VAR18, "", VAR17, VAR12);
        if ((VAR11 = FUN7(VAR6)) < 0)
            return VAR11;
    }
    if ((VAR11 = FUN8(VAR6, &VAR12)) < 0)
        return VAR11;
    VAR6->VAR19 = FUN9(VAR2->VAR20);
    VAR6->VAR21 = 1000000;
    while (VAR11 == 0)
    {
        if (!(VAR12 = FUN5(VAR6, &VAR6->VAR22)))
        {
            VAR11 = FUN6(VAR16);
            break;
        }
        else if (VAR6->VAR22)
        {
            VAR6->VAR22--;
            break;
        }
        switch (VAR12)
        {
        case VAR23:
        {
            if ((VAR11 = FUN8(VAR6, &VAR12)) < 0)
                break;
            VAR11 = FUN10(VAR6);
            break;
        }
        case VAR24:
        {
            if ((VAR11 = FUN8(VAR6, &VAR12)) < 0)
                break;
            VAR11 = FUN11(VAR6);
            break;
        }
        case VAR25:
        {
            if (!VAR6->VAR26)
            {
                if ((VAR11 = FUN8(VAR6, &VAR12)) < 0)
                    break;
                VAR11 = FUN12(VAR6);
            }
            else
                VAR11 = FUN7(VAR6);
            break;
        }
        case VAR27:
        {
            if (!VAR6->VAR28)
            {
                if ((VAR11 = FUN8(VAR6, &VAR12)) < 0)
                    break;
                VAR11 = FUN13(VAR6);
            }
            else
                VAR11 = FUN7(VAR6);
            break;
        }
        case VAR29:
        {
            if ((VAR11 = FUN8(VAR6, &VAR12)) < 0)
                break;
            VAR11 = FUN14(VAR6);
            break;
        }
        case VAR30:
        {
            if ((VAR11 = FUN8(VAR6, &VAR12)) < 0)
                break;
            VAR11 = FUN15(VAR2);
            break;
        }
        case VAR31:
        {
            VAR11 = 1;
            break;
        }
        default:
            FUN3(VAR6->VAR13, VAR18, "", VAR12);
        case VAR32:
            VAR11 = FUN7(VAR6);
            break;
        }
        if (VAR6->VAR22)
        {
            VAR6->VAR22--;
            break;
        }
    }
    if (FUN5(VAR6, NULL) == VAR31)
    {
        int VAR33, VAR34;
        VAR35 *VAR36;
        VAR37 *VAR38;
        for (VAR33 = 0; VAR33 < VAR6->VAR39; VAR33++)
        {
            enum CodecID VAR40 = VAR41;
            VAR42 *VAR43 = NULL;
            int VAR44 = 0;
            int VAR45 = 0;
            VAR36 = VAR6->VAR46[VAR33];
            VAR36->VAR47 = -1;
            if (VAR36->VAR40 == NULL)
                continue;
            for (VAR34 = 0; VAR48[VAR34].VAR12 != VAR41; VAR34++)
            {
                if (!FUN16(VAR48[VAR34].VAR49, VAR36->VAR40, strlen(VAR48[VAR34].VAR49)))
                {
                    VAR40 = VAR48[VAR34].VAR12;
                    break;
                }
            }
            if (!strcmp(VAR36->VAR40, VAR50) && (VAR36->VAR51 >= 40) && (VAR36->VAR52 != NULL))
            {
                VAR53 *VAR54 = (VAR53 *)VAR36;
                VAR54->VAR55 = FUN17(VAR36->VAR52 + 16);
                VAR40 = FUN18(VAR56, VAR54->VAR55);
            }
            else if (!strcmp(VAR36->VAR40, VAR57) && (VAR36->VAR51 >= 18) && (VAR36->VAR52 != NULL))
            {
                uint16_t VAR58;
                VAR58 = FUN19(VAR36->VAR52);
                VAR40 = FUN18(VAR59, VAR58);
            }
            else if (VAR40 == VAR60 && !VAR36->VAR51)
            {
                VAR61 *VAR62 = (VAR61 *)VAR36;
                int VAR63 = FUN20(VAR36->VAR40);
                int VAR64 = FUN21(VAR62->VAR65);
                VAR43 = FUN22(5);
                if (VAR43 == NULL)
                    return FUN6(VAR66);
                VAR43[0] = (VAR63 << 3) | ((VAR64 & 0x0E) >> 1);
                VAR43[1] = ((VAR64 & 0x01) << 7) | (VAR62->VAR67 << 3);
                if (strstr(VAR36->VAR40, ""))
                {
                    VAR64 = FUN21(VAR62->VAR68);
                    VAR43[2] = 0x56;
                    VAR43[3] = 0xE5;
                    VAR43[4] = 0x80 | (VAR64 << 3);
                    VAR44 = 5;
                }
                else
                {
                    VAR44 = 2;
                }
            }
            else if (VAR40 == VAR69)
            {
                VAR61 *VAR62 = (VAR61 *)VAR36;
                ByteIOContext VAR70;
                VAR44 = 30;
                VAR43 = FUN23(VAR44);
                if (VAR43 == NULL)
                    return FUN6(VAR66);
                FUN24(&VAR70, VAR43, VAR44, 1, NULL, NULL, NULL, NULL);
                FUN25(&VAR70, "", 4);
                FUN26(&VAR70, 1);
                FUN26(&VAR70, VAR62->VAR67);
                FUN26(&VAR70, VAR62->VAR71);
                FUN27(&VAR70, VAR62->VAR68);
                FUN27(&VAR70, VAR6->VAR13->VAR72 * VAR62->VAR68);
            }
            else if (VAR40 == VAR73 || VAR40 == VAR74 || VAR40 == VAR75 || VAR40 == VAR76)
            {
                VAR45 = 26;
                VAR36->VAR51 -= VAR45;
            }
            else if (VAR40 == VAR77)
            {
                VAR61 *VAR62 = (VAR61 *)VAR36;
                VAR62->VAR68 = 8000;
                VAR62->VAR67 = 1;
            }
            else if (VAR40 == VAR78 || VAR40 == VAR79 || VAR40 == VAR80)
            {
                VAR61 *VAR62 = (VAR61 *)VAR36;
                ByteIOContext VAR70;
                FUN24(&VAR70, VAR36->VAR52, VAR36->VAR51, 0, NULL, NULL, NULL, NULL);
                FUN28(&VAR70, 24);
                VAR62->VAR81 = FUN29(&VAR70);
                FUN28(&VAR70, 12);
                VAR62->VAR82 = FUN30(&VAR70);
                VAR62->VAR83 = FUN30(&VAR70);
                VAR62->VAR84 = FUN30(&VAR70);
                VAR62->VAR85 = FUN22(VAR62->VAR83 * VAR62->VAR82);
                if (VAR40 == VAR78)
                {
                    VAR62->VAR86 = VAR62->VAR81;
                    VAR36->VAR51 = 0;
                }
                else
                {
                    VAR62->VAR86 = VAR62->VAR84;
                    VAR45 = 78;
                    VAR36->VAR51 -= VAR45;
                }
            }
            if (VAR40 == VAR41)
            {
                FUN3(VAR6->VAR13, VAR18, "", VAR36->VAR40);
            }
            VAR36->VAR47 = VAR6->VAR87;
            VAR6->VAR87++;
            VAR38 = FUN31(VAR2, VAR36->VAR47);
            if (VAR38 == NULL)
                return FUN6(VAR66);
            FUN32(VAR38, 64, VAR6->VAR21, 1000 * 1000 * 1000);
            VAR38->VAR88->VAR40 = VAR40;
            VAR38->VAR89 = 0;
            if (strcmp(VAR36->VAR90, ""))
                strcpy(VAR38->VAR90, VAR36->VAR90);
            if (VAR36->VAR91 & VAR92)
                VAR38->VAR93 |= VAR94;
            if (VAR36->VAR95)
                FUN33(&VAR38->VAR88->VAR96.VAR97, &VAR38->VAR88->VAR96.VAR98, VAR36->VAR95, 1000000000, 30000);
            if (VAR43)
            {
                VAR38->VAR88->VAR43 = VAR43;
                VAR38->VAR88->VAR44 = VAR44;
            }
            else if (VAR36->VAR52 && VAR36->VAR51 > 0)
            {
                VAR38->VAR88->VAR43 = FUN22(VAR36->VAR51);
                if (VAR38->VAR88->VAR43 == NULL)
                    return FUN6(VAR66);
                VAR38->VAR88->VAR44 = VAR36->VAR51;
                memcpy(VAR38->VAR88->VAR43, VAR36->VAR52 + VAR45, VAR36->VAR51);
            }
            if (VAR36->VAR99 == VAR100)
            {
                VAR53 *VAR101 = (VAR53 *)VAR36;
                VAR38->VAR88->VAR102 = VAR103;
                VAR38->VAR88->VAR104 = VAR101->VAR55;
                VAR38->VAR88->VAR105 = VAR101->VAR106;
                VAR38->VAR88->VAR107 = VAR101->VAR108;
                if (VAR101->VAR109 == 0)
                    VAR101->VAR109 = VAR101->VAR106;
                if (VAR101->VAR110 == 0)
                    VAR101->VAR110 = VAR101->VAR108;
                FUN33(&VAR38->VAR88->VAR111.VAR97, &VAR38->VAR88->VAR111.VAR98, VAR38->VAR88->VAR107 * VAR101->VAR109, VAR38->VAR88->VAR105 * VAR101->VAR110, 255);
                VAR38->VAR112 = VAR113;
            }
            else if (VAR36->VAR99 == VAR114)
            {
                VAR61 *VAR62 = (VAR61 *)VAR36;
                VAR38->VAR88->VAR102 = VAR115;
                VAR38->VAR88->VAR116 = VAR62->VAR68;
                VAR38->VAR88->VAR67 = VAR62->VAR67;
                VAR38->VAR88->VAR86 = VAR62->VAR86;
            }
            else if (VAR36->VAR99 == VAR117)
            {
                VAR38->VAR88->VAR102 = VAR118;
            }
        }
        VAR11 = 0;
    }
    if (VAR6->VAR26)
    {
        int VAR33, VAR36, VAR119;
        for (VAR33 = 0; VAR33 < VAR6->VAR120; VAR33++)
        {
            VAR121 *VAR122 = &VAR6->VAR123[VAR33];
            VAR36 = FUN34(VAR6, VAR122->VAR36);
            VAR119 = VAR6->VAR46[VAR36]->VAR47;
            if (VAR119 >= 0)
                FUN35(VAR6->VAR13->VAR124[VAR119], VAR122->VAR125, VAR122->VAR126 / VAR6->VAR21, 0, 0, VAR127);
        }
    }
    return VAR11;
}