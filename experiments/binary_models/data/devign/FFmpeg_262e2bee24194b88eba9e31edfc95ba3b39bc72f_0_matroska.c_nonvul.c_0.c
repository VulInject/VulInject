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
            return VAR16;
        if (VAR12 == VAR17)
            break;
        FUN3(VAR6->VAR13, VAR18, "", VAR17, VAR12);
        if ((VAR11 = FUN6(VAR6)) < 0)
            return VAR11;
    }
    if ((VAR11 = FUN7(VAR6, &VAR12)) < 0)
        return VAR11;
    VAR6->VAR19 = FUN8(&VAR2->VAR20);
    VAR6->VAR21 = 1000000;
    while (VAR11 == 0)
    {
        if (!(VAR12 = FUN5(VAR6, &VAR6->VAR22)))
        {
            VAR11 = VAR16;
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
            if ((VAR11 = FUN7(VAR6, &VAR12)) < 0)
                break;
            VAR11 = FUN9(VAR6);
            break;
        }
        case VAR24:
        {
            if ((VAR11 = FUN7(VAR6, &VAR12)) < 0)
                break;
            VAR11 = FUN10(VAR6);
            break;
        }
        case VAR25:
        {
            if (!VAR6->VAR26)
            {
                if ((VAR11 = FUN7(VAR6, &VAR12)) < 0)
                    break;
                VAR11 = FUN11(VAR6);
            }
            else
                VAR11 = FUN6(VAR6);
            break;
        }
        case VAR27:
        {
            if (!VAR6->VAR28)
            {
                if ((VAR11 = FUN7(VAR6, &VAR12)) < 0)
                    break;
                VAR11 = FUN12(VAR6);
            }
            else
                VAR11 = FUN6(VAR6);
            break;
        }
        case VAR29:
        {
            if ((VAR11 = FUN7(VAR6, &VAR12)) < 0)
                break;
            VAR11 = FUN13(VAR6);
            break;
        }
        case VAR30:
        {
            VAR11 = 1;
            break;
        }
        default:
            FUN3(VAR6->VAR13, VAR18, "", VAR12);
        case VAR31:
            VAR11 = FUN6(VAR6);
            break;
        }
        if (VAR6->VAR22)
        {
            VAR6->VAR22--;
            break;
        }
    }
    if (FUN5(VAR6, NULL) == VAR30)
    {
        int VAR32, VAR33;
        VAR34 *VAR35;
        VAR36 *VAR37;
        for (VAR32 = 0; VAR32 < VAR6->VAR38; VAR32++)
        {
            enum CodecID VAR39 = VAR40;
            VAR41 *VAR42 = NULL;
            int VAR43 = 0;
            int VAR44 = 0;
            VAR35 = VAR6->VAR45[VAR32];
            if ((VAR35->VAR46 == VAR47) || (VAR35->VAR39 == NULL))
                continue;
            for (VAR33 = 0; VAR48[VAR33].VAR49; VAR33++)
            {
                if (!FUN14(VAR48[VAR33].VAR49, VAR35->VAR39, strlen(VAR48[VAR33].VAR49)))
                {
                    VAR39 = VAR48[VAR33].VAR12;
                    break;
                }
            }
            if (!strcmp(VAR35->VAR39, VAR50) && (VAR35->VAR51 >= 40) && (VAR35->VAR52 != NULL))
            {
                unsigned char *VAR53;
                VAR53 = (unsigned char *)VAR35->VAR52 + 16;
                ((VAR54 *)VAR35)->VAR55 = (VAR53[3] << 24) | (VAR53[2] << 16) | (VAR53[1] << 8) | VAR53[0];
                VAR39 = FUN15(VAR56, ((VAR54 *)VAR35)->VAR55);
            }
            else if (!strcmp(VAR35->VAR39, VAR57) && (VAR35->VAR51 >= 18) && (VAR35->VAR52 != NULL))
            {
                unsigned char *VAR53;
                uint16_t VAR58;
                VAR53 = (unsigned char *)VAR35->VAR52;
                VAR58 = (VAR53[1] << 8) | VAR53[0];
                VAR39 = FUN15(VAR59, VAR58);
            }
            else if (VAR39 == VAR60 && !VAR35->VAR51)
            {
                VAR61 *VAR62 = (VAR61 *)VAR35;
                int VAR63 = FUN16(VAR35->VAR39);
                int VAR64 = FUN17(VAR62->VAR65);
                VAR42 = FUN18(5);
                if (VAR42 == NULL)
                    return VAR66;
                VAR42[0] = (VAR63 << 3) | ((VAR64 & 0x0E) >> 1);
                VAR42[1] = ((VAR64 & 0x01) << 7) | (VAR62->VAR67 << 3);
                if (strstr(VAR35->VAR39, ""))
                {
                    VAR64 = FUN17(VAR62->VAR68);
                    VAR42[2] = 0x56;
                    VAR42[3] = 0xE5;
                    VAR42[4] = 0x80 | (VAR64 << 3);
                    VAR43 = 5;
                }
                else
                {
                    VAR43 = 2;
                }
                VAR35->VAR69 = 1024 * 1000 / VAR62->VAR65;
            }
            else if (VAR39 == VAR70)
            {
                VAR61 *VAR62 = (VAR61 *)VAR35;
                ByteIOContext VAR71;
                VAR43 = 30;
                VAR42 = FUN19(VAR43);
                if (VAR42 == NULL)
                    return VAR66;
                FUN20(&VAR71, VAR42, VAR43, 1, NULL, NULL, NULL, NULL);
                FUN21(&VAR71, (VAR41 *)"", 4);
                FUN22(&VAR71, 1);
                FUN22(&VAR71, VAR62->VAR67);
                FUN22(&VAR71, VAR62->VAR72);
                FUN23(&VAR71, VAR62->VAR68);
                FUN23(&VAR71, VAR6->VAR13->VAR73 * VAR62->VAR68);
            }
            else if (VAR39 == VAR74 || VAR39 == VAR75 || VAR39 == VAR76 || VAR39 == VAR77)
            {
                VAR44 = 26;
                VAR35->VAR51 -= VAR44;
                VAR35->VAR78 |= VAR79;
            }
            if (VAR39 == VAR40)
            {
                FUN3(VAR6->VAR13, VAR18, "", VAR35->VAR39);
            }
            VAR35->VAR80 = VAR6->VAR81;
            VAR6->VAR81++;
            VAR37 = FUN24(VAR2, VAR35->VAR80);
            if (VAR37 == NULL)
                return VAR66;
            FUN25(VAR37, 64, VAR6->VAR21, 1000 * 1000 * 1000);
            VAR37->VAR82->VAR39 = VAR39;
            if (VAR35->VAR69)
                FUN26(&VAR37->VAR82->VAR83.VAR84, &VAR37->VAR82->VAR83.VAR85, VAR35->VAR69, 1000, 30000);
            if (VAR42)
            {
                VAR37->VAR82->VAR42 = VAR42;
                VAR37->VAR82->VAR43 = VAR43;
            }
            else if (VAR35->VAR52 && VAR35->VAR51 > 0)
            {
                VAR37->VAR82->VAR42 = FUN18(VAR35->VAR51);
                if (VAR37->VAR82->VAR42 == NULL)
                    return VAR66;
                VAR37->VAR82->VAR43 = VAR35->VAR51;
                memcpy(VAR37->VAR82->VAR42, VAR35->VAR52 + VAR44, VAR35->VAR51);
            }
            if (VAR35->VAR46 == VAR86)
            {
                VAR54 *VAR87 = (VAR54 *)VAR35;
                VAR37->VAR82->VAR88 = VAR89;
                VAR37->VAR82->VAR90 = VAR87->VAR55;
                VAR37->VAR82->VAR91 = VAR87->VAR92;
                VAR37->VAR82->VAR93 = VAR87->VAR94;
                if (VAR87->VAR95 == 0)
                    VAR87->VAR95 = VAR87->VAR92;
                if (VAR87->VAR96 == 0)
                    VAR87->VAR96 = VAR87->VAR94;
                FUN26(&VAR37->VAR82->VAR97.VAR84, &VAR37->VAR82->VAR97.VAR85, VAR37->VAR82->VAR93 * VAR87->VAR95, VAR37->VAR82->VAR91 * VAR87->VAR96, 255);
                VAR37->VAR98 = 2;
            }
            else if (VAR35->VAR46 == VAR99)
            {
                VAR61 *VAR62 = (VAR61 *)VAR35;
                VAR37->VAR82->VAR88 = VAR100;
                VAR37->VAR82->VAR101 = VAR62->VAR68;
                VAR37->VAR82->VAR67 = VAR62->VAR67;
            }
            else if (VAR35->VAR46 == VAR47)
            {
                VAR37->VAR82->VAR88 = VAR102;
            }
        }
        VAR11 = 0;
    }
    return VAR11;
}