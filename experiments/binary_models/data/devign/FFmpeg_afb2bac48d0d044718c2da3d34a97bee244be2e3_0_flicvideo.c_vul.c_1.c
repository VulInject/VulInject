static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11 = 0;
    int VAR12;
    int VAR13;
    unsigned char VAR14;
    unsigned char VAR15;
    unsigned int VAR16;
    int VAR17;
    unsigned int VAR18;
    int VAR19;
    int VAR20, VAR21;
    int VAR22;
    int VAR23;
    int VAR24;
    unsigned char VAR25, VAR26, VAR27;
    int VAR28;
    int VAR29;
    int VAR30;
    signed short VAR31;
    int VAR32;
    int VAR33;
    int VAR34;
    int VAR35;
    unsigned char *VAR36;
    unsigned int VAR37;
    VAR9->VAR38.VAR39 = 3;
    VAR9->VAR38.VAR40 = VAR41 | VAR42 | VAR43;
    if (VAR2->FUN2(VAR2, &VAR9->VAR38) < 0)
    {
        FUN3(VAR2, VAR44, "");
        return -1;
    }
    VAR36 = VAR9->VAR38.VAR3[0];
    VAR37 = VAR9->VAR2->VAR45 * VAR9->VAR38.VAR46[0];
    if (VAR7 < 16 || VAR7 > VAR47 - (3 * 256 + VAR48))
        return VAR49;
    VAR16 = FUN4(&VAR6[VAR11]);
    if (VAR16 > VAR7)
        VAR16 = VAR7;
    VAR11 += 6;
    VAR17 = FUN5(&VAR6[VAR11]);
    VAR11 += 10;
    VAR16 -= 16;
    while ((VAR16 >= 6) && (VAR17 > 0))
    {
        int VAR50;
        VAR18 = FUN4(&VAR6[VAR11]);
        if (VAR18 > VAR16)
        {
            FUN3(VAR2, VAR51, "", VAR18, VAR16);
            VAR18 = VAR16;
        }
        VAR50 = VAR11 + VAR18;
        VAR11 += 4;
        VAR19 = FUN5(&VAR6[VAR11]);
        VAR11 += 2;
        switch (VAR19)
        {
        case VAR52:
        case VAR53:
            if ((VAR19 == VAR52) && (VAR9->VAR54 != VAR55))
                VAR24 = 0;
            else
                VAR24 = 2;
            VAR22 = FUN5(&VAR6[VAR11]);
            VAR11 += 2;
            VAR13 = 0;
            for (VAR20 = 0; VAR20 < VAR22; VAR20++)
            {
                VAR13 += VAR6[VAR11++];
                VAR23 = VAR6[VAR11++];
                if (VAR23 == 0)
                    VAR23 = 256;
                if (VAR11 + VAR23 * 3 > VAR50)
                    break;
                for (VAR21 = 0; VAR21 < VAR23; VAR21++)
                {
                    unsigned int VAR56;
                    if ((unsigned)VAR13 >= 256)
                        VAR13 = 0;
                    VAR25 = VAR6[VAR11++] << VAR24;
                    VAR26 = VAR6[VAR11++] << VAR24;
                    VAR27 = VAR6[VAR11++] << VAR24;
                    VAR56 = 0xFF << 24 | VAR25 << 16 | VAR26 << 8 | VAR27;
                    if (VAR24 == 2)
                        VAR56 |= VAR56 >> 6 & 0x30303;
                    if (VAR9->VAR57[VAR13] != VAR56)
                        VAR9->VAR58 = 1;
                    VAR9->VAR57[VAR13++] = VAR56;
                }
            }
            break;
        case VAR59:
            VAR32 = 0;
            VAR29 = FUN5(&VAR6[VAR11]);
            VAR11 += 2;
            while (VAR29 > 0)
            {
                if (VAR11 + 2 > VAR50)
                    break;
                VAR31 = FUN5(&VAR6[VAR11]);
                VAR11 += 2;
                if ((VAR31 & 0xC000) == 0xC000)
                {
                    VAR31 = -VAR31;
                    VAR32 += VAR31 * VAR9->VAR38.VAR46[0];
                }
                else if ((VAR31 & 0xC000) == 0x4000)
                {
                    FUN3(VAR2, VAR44, "", VAR31);
                }
                else if ((VAR31 & 0xC000) == 0x8000)
                {
                    VAR12 = VAR32 + VAR9->VAR38.VAR46[0] - 1;
                    FUN6(0);
                    VAR36[VAR12] = VAR31 & 0xff;
                }
                else
                {
                    VAR29--;
                    VAR12 = VAR32;
                    FUN6(0);
                    VAR35 = VAR9->VAR2->VAR60;
                    for (VAR20 = 0; VAR20 < VAR31; VAR20++)
                    {
                        if (VAR11 + 2 > VAR50)
                            break;
                        VAR34 = VAR6[VAR11++];
                        VAR12 += VAR34;
                        VAR35 -= VAR34;
                        VAR33 = (signed char)(VAR6[VAR11++]);
                        if (VAR33 < 0)
                        {
                            VAR33 = -VAR33;
                            VAR14 = VAR6[VAR11++];
                            VAR15 = VAR6[VAR11++];
                            FUN6(VAR33 * 2);
                            for (VAR21 = 0; VAR21 < VAR33; VAR21++, VAR35 -= 2)
                            {
                                VAR36[VAR12++] = VAR14;
                                VAR36[VAR12++] = VAR15;
                            }
                        }
                        else
                        {
                            FUN6(VAR33 * 2);
                            if (VAR11 + VAR33 * 2 > VAR50)
                                break;
                            for (VAR21 = 0; VAR21 < VAR33 * 2; VAR21++, VAR35--)
                            {
                                VAR14 = VAR6[VAR11++];
                                VAR36[VAR12++] = VAR14;
                            }
                        }
                    }
                    VAR32 += VAR9->VAR38.VAR46[0];
                }
            }
            break;
        case VAR61:
            VAR30 = FUN5(&VAR6[VAR11]);
            VAR11 += 2;
            VAR32 = 0;
            VAR32 += VAR30 * VAR9->VAR38.VAR46[0];
            VAR29 = FUN5(&VAR6[VAR11]);
            VAR11 += 2;
            while (VAR29 > 0)
            {
                VAR12 = VAR32;
                FUN6(0);
                VAR35 = VAR9->VAR2->VAR60;
                VAR31 = VAR6[VAR11++];
                if (VAR11 + 2 * VAR31 > VAR50)
                    break;
                if (VAR31 > 0)
                {
                    for (VAR20 = 0; VAR20 < VAR31; VAR20++)
                    {
                        VAR34 = VAR6[VAR11++];
                        VAR12 += VAR34;
                        VAR35 -= VAR34;
                        VAR33 = (signed char)(VAR6[VAR11++]);
                        if (VAR33 > 0)
                        {
                            FUN6(VAR33);
                            if (VAR11 + VAR33 > VAR50)
                                break;
                            for (VAR21 = 0; VAR21 < VAR33; VAR21++, VAR35--)
                            {
                                VAR14 = VAR6[VAR11++];
                                VAR36[VAR12++] = VAR14;
                            }
                        }
                        else if (VAR33 < 0)
                        {
                            VAR33 = -VAR33;
                            VAR14 = VAR6[VAR11++];
                            FUN6(VAR33);
                            for (VAR21 = 0; VAR21 < VAR33; VAR21++, VAR35--)
                            {
                                VAR36[VAR12++] = VAR14;
                            }
                        }
                    }
                }
                VAR32 += VAR9->VAR38.VAR46[0];
                VAR29--;
            }
            break;
        case VAR62:
            memset(VAR36, 0, VAR9->VAR38.VAR46[0] * VAR9->VAR2->VAR45);
            break;
        case VAR63:
            VAR32 = 0;
            for (VAR28 = 0; VAR28 < VAR9->VAR2->VAR45; VAR28++)
            {
                VAR12 = VAR32;
                VAR11++;
                VAR35 = VAR9->VAR2->VAR60;
                while (VAR35 > 0)
                {
                    if (VAR11 + 1 > VAR50)
                        break;
                    VAR33 = (signed char)(VAR6[VAR11++]);
                    if (VAR33 > 0)
                    {
                        VAR14 = VAR6[VAR11++];
                        FUN6(VAR33);
                        for (VAR21 = 0; VAR21 < VAR33; VAR21++)
                        {
                            VAR36[VAR12++] = VAR14;
                            VAR35--;
                            if (VAR35 < 0)
                                FUN3(VAR2, VAR44, "", VAR35, VAR28);
                        }
                    }
                    else
                    {
                        VAR33 = -VAR33;
                        FUN6(VAR33);
                        if (VAR11 + VAR33 > VAR50)
                            break;
                        for (VAR21 = 0; VAR21 < VAR33; VAR21++)
                        {
                            VAR14 = VAR6[VAR11++];
                            VAR36[VAR12++] = VAR14;
                            VAR35--;
                            if (VAR35 < 0)
                                FUN3(VAR2, VAR44, "", VAR35, VAR28);
                        }
                    }
                }
                VAR32 += VAR9->VAR38.VAR46[0];
            }
            break;
        case VAR64:
            if (VAR18 - 6 != VAR9->VAR2->VAR60 * VAR9->VAR2->VAR45)
            {
                FUN3(VAR2, VAR44, ""
                                            "",
                       VAR18 - 6);
            }
            else
            {
                for (VAR32 = 0; VAR32 < VAR9->VAR38.VAR46[0] * VAR9->VAR2->VAR45; VAR32 += VAR9->VAR38.VAR46[0])
                {
                    memcpy(&VAR36[VAR32], &VAR6[VAR11], VAR9->VAR2->VAR60);
                    VAR11 += VAR9->VAR2->VAR60;
                }
            }
            break;
        case VAR65:
            break;
        default:
            FUN3(VAR2, VAR44, "", VAR19);
            break;
        }
        VAR11 = VAR50;
        VAR16 -= VAR18;
        VAR17--;
    }
    if ((VAR11 != VAR7) && (VAR11 != VAR7 - 1))
        FUN3(VAR2, VAR44, ""
                                    "",
               VAR7, VAR11);
    memcpy(VAR9->VAR38.VAR3[1], VAR9->VAR57, VAR66);
    if (VAR9->VAR58)
    {
        VAR9->VAR38.VAR67 = 1;
        VAR9->VAR58 = 0;
    }
    *VAR4 = sizeof(VAR68);
    *(VAR68 *)VAR3 = VAR9->VAR38;
    return VAR7;
}