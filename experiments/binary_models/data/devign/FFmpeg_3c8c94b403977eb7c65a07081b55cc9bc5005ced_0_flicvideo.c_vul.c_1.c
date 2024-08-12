static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = (VAR8 *)VAR2->VAR10;
    int VAR11 = 0;
    int VAR12;
    int VAR13;
    int VAR14;
    unsigned char VAR15;
    unsigned char VAR16;
    unsigned int VAR17;
    int VAR18;
    unsigned int VAR19;
    int VAR20;
    int VAR21, VAR22;
    int VAR23;
    int VAR24;
    int VAR25;
    unsigned char VAR26, VAR27, VAR28;
    int VAR29;
    int VAR30;
    int VAR31;
    signed short VAR32;
    int VAR33;
    signed char VAR34;
    int VAR35;
    int VAR36;
    unsigned char *VAR37;
    int VAR38;
    VAR9->VAR39.VAR40 = 1;
    VAR9->VAR39.VAR41 = VAR42 | VAR43 | VAR44;
    if (VAR2->FUN2(VAR2, &VAR9->VAR39) < 0)
    {
        FUN3(VAR2, VAR45, "");
        return -1;
    }
    VAR37 = VAR9->VAR39.VAR3[0];
    VAR38 = VAR9->VAR2->VAR46 * VAR9->VAR39.VAR47[0];
    VAR17 = FUN4(&VAR6[VAR11]);
    VAR11 += 6;
    VAR18 = FUN5(&VAR6[VAR11]);
    VAR11 += 10;
    VAR17 -= 16;
    while ((VAR17 > 0) && (VAR18 > 0))
    {
        VAR19 = FUN4(&VAR6[VAR11]);
        VAR11 += 4;
        VAR20 = FUN5(&VAR6[VAR11]);
        VAR11 += 2;
        switch (VAR20)
        {
        case VAR48:
        case VAR49:
            VAR12 = VAR11 + VAR19 - 6;
            VAR9->VAR50 = 1;
            if ((VAR20 == VAR48) && (VAR9->VAR51 != 0xAF13))
                VAR25 = 0;
            else
                VAR25 = 2;
            VAR23 = FUN5(&VAR6[VAR11]);
            VAR11 += 2;
            VAR14 = 0;
            for (VAR21 = 0; VAR21 < VAR23; VAR21++)
            {
                VAR14 += VAR6[VAR11++];
                VAR24 = VAR6[VAR11++];
                if (VAR24 == 0)
                    VAR24 = 256;
                for (VAR22 = 0; VAR22 < VAR24; VAR22++)
                {
                    if ((unsigned)VAR14 >= 256)
                        VAR14 = 0;
                    VAR26 = VAR6[VAR11++] << VAR25;
                    VAR27 = VAR6[VAR11++] << VAR25;
                    VAR28 = VAR6[VAR11++] << VAR25;
                    VAR9->VAR52[VAR14++] = (VAR26 << 16) | (VAR27 << 8) | VAR28;
                }
            }
            VAR11 = VAR12;
            break;
        case VAR53:
            VAR33 = 0;
            VAR30 = FUN5(&VAR6[VAR11]);
            VAR11 += 2;
            while (VAR30 > 0)
            {
                VAR32 = FUN5(&VAR6[VAR11]);
                VAR11 += 2;
                if (VAR32 < 0)
                {
                    VAR32 = -VAR32;
                    VAR33 += VAR32 * VAR9->VAR39.VAR47[0];
                }
                else
                {
                    VAR30--;
                    VAR13 = VAR33;
                    VAR36 = VAR9->VAR2->VAR54;
                    for (VAR21 = 0; VAR21 < VAR32; VAR21++)
                    {
                        VAR35 = VAR6[VAR11++];
                        VAR13 += VAR35;
                        VAR36 -= VAR35;
                        VAR34 = VAR6[VAR11++];
                        if (VAR34 < 0)
                        {
                            VAR34 = -VAR34;
                            VAR15 = VAR6[VAR11++];
                            VAR16 = VAR6[VAR11++];
                            for (VAR22 = 0; VAR22 < VAR34; VAR22++, VAR36 -= 2)
                            {
                                VAR37[VAR13++] = VAR15;
                                VAR37[VAR13++] = VAR16;
                            }
                        }
                        else
                        {
                            for (VAR22 = 0; VAR22 < VAR34 * 2; VAR22++, VAR36--)
                            {
                                VAR15 = VAR6[VAR11++];
                                VAR37[VAR13++] = VAR15;
                            }
                        }
                    }
                    VAR33 += VAR9->VAR39.VAR47[0];
                }
            }
            break;
        case VAR55:
            VAR31 = FUN5(&VAR6[VAR11]);
            VAR11 += 2;
            VAR33 = 0;
            VAR33 += VAR31 * VAR9->VAR39.VAR47[0];
            VAR30 = FUN5(&VAR6[VAR11]);
            VAR11 += 2;
            while (VAR30 > 0)
            {
                VAR13 = VAR33;
                VAR36 = VAR9->VAR2->VAR54;
                VAR32 = VAR6[VAR11++];
                if (VAR32 > 0)
                {
                    for (VAR21 = 0; VAR21 < VAR32; VAR21++)
                    {
                        VAR35 = VAR6[VAR11++];
                        VAR13 += VAR35;
                        VAR36 -= VAR35;
                        VAR34 = VAR6[VAR11++];
                        if (VAR34 > 0)
                        {
                            for (VAR22 = 0; VAR22 < VAR34; VAR22++, VAR36--)
                            {
                                VAR15 = VAR6[VAR11++];
                                VAR37[VAR13++] = VAR15;
                            }
                        }
                        else
                        {
                            VAR34 = -VAR34;
                            VAR15 = VAR6[VAR11++];
                            for (VAR22 = 0; VAR22 < VAR34; VAR22++, VAR36--)
                            {
                                VAR37[VAR13++] = VAR15;
                            }
                        }
                    }
                }
                VAR33 += VAR9->VAR39.VAR47[0];
                VAR30--;
            }
            break;
        case VAR56:
            memset(VAR37, 0, VAR9->VAR39.VAR47[0] * VAR9->VAR2->VAR46);
            break;
        case VAR57:
            VAR33 = 0;
            for (VAR29 = 0; VAR29 < VAR9->VAR2->VAR46; VAR29++)
            {
                VAR13 = VAR33;
                VAR11++;
                VAR36 = VAR9->VAR2->VAR54;
                while (VAR36 > 0)
                {
                    VAR34 = VAR6[VAR11++];
                    if (VAR34 > 0)
                    {
                        VAR15 = VAR6[VAR11++];
                        for (VAR22 = 0; VAR22 < VAR34; VAR22++)
                        {
                            VAR37[VAR13++] = VAR15;
                            VAR36--;
                            if (VAR36 < 0)
                                FUN3(VAR2, VAR45, "", VAR36);
                        }
                    }
                    else
                    {
                        VAR34 = -VAR34;
                        for (VAR22 = 0; VAR22 < VAR34; VAR22++)
                        {
                            VAR15 = VAR6[VAR11++];
                            VAR37[VAR13++] = VAR15;
                            VAR36--;
                            if (VAR36 < 0)
                                FUN3(VAR2, VAR45, "", VAR36);
                        }
                    }
                }
                VAR33 += VAR9->VAR39.VAR47[0];
            }
            break;
        case VAR58:
            if (VAR19 - 6 > VAR9->VAR2->VAR54 * VAR9->VAR2->VAR46)
            {
                FUN3(VAR2, VAR45, ""
                                            "",
                       VAR19 - 6);
                VAR11 += VAR19 - 6;
            }
            else
            {
                for (VAR33 = 0; VAR33 < VAR9->VAR39.VAR47[0] * VAR9->VAR2->VAR46; VAR33 += VAR9->VAR39.VAR47[0])
                {
                    memcpy(&VAR37[VAR33], &VAR6[VAR11], VAR9->VAR2->VAR54);
                    VAR11 += VAR9->VAR2->VAR54;
                }
            }
            break;
        case VAR59:
            VAR11 += VAR19 - 6;
            break;
        default:
            FUN3(VAR2, VAR45, "", VAR20);
            break;
        }
        VAR17 -= VAR19;
        VAR18--;
    }
    if ((VAR11 != VAR7) && (VAR11 != VAR7 - 1))
        FUN3(VAR2, VAR45, ""
                                    "",
               VAR7, VAR11);
    if (1)
    {
        memcpy(VAR9->VAR39.VAR3[1], VAR9->VAR52, VAR60);
        VAR9->VAR39.VAR61 = 1;
        VAR9->VAR50 = 0;
    }
    *VAR4 = sizeof(VAR62);
    *(VAR62 *)VAR3 = VAR9->VAR39;
    return VAR7;