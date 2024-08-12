static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = (VAR8 *)VAR2->VAR10;
    int VAR11 = 0;
    int VAR12;
    unsigned char VAR13;
    unsigned int VAR14;
    int VAR15;
    unsigned int VAR16;
    int VAR17;
    int VAR18, VAR19;
    int VAR20;
    int VAR21;
    signed short VAR22;
    int VAR23;
    int VAR24;
    int VAR25;
    int VAR26;
    unsigned char *VAR27;
    int VAR28;
    int VAR29;
    VAR9->VAR30.VAR31 = 1;
    VAR9->VAR30.VAR32 = VAR33 | VAR34 | VAR35;
    if (VAR2->FUN2(VAR2, &VAR9->VAR30) < 0)
    {
        FUN3(VAR2, VAR36, "");
        return -1;
    }
    VAR27 = VAR9->VAR30.VAR3[0];
    VAR29 = VAR9->VAR2->VAR37 * VAR9->VAR30.VAR38[0];
    VAR14 = FUN4(&VAR6[VAR11]);
    VAR11 += 6;
    VAR15 = FUN5(&VAR6[VAR11]);
    VAR11 += 10;
    VAR14 -= 16;
    while ((VAR14 > 0) && (VAR15 > 0))
    {
        VAR16 = FUN4(&VAR6[VAR11]);
        VAR11 += 4;
        VAR17 = FUN5(&VAR6[VAR11]);
        VAR11 += 2;
        switch (VAR17)
        {
        case VAR39:
        case VAR40:
            VAR11 = VAR11 + VAR16 - 6;
            break;
        case VAR41:
        case VAR42:
            VAR23 = 0;
            VAR21 = FUN5(&VAR6[VAR11]);
            VAR11 += 2;
            while (VAR21 > 0)
            {
                VAR22 = FUN5(&VAR6[VAR11]);
                VAR11 += 2;
                if (VAR22 < 0)
                {
                    VAR22 = -VAR22;
                    VAR23 += VAR22 * VAR9->VAR30.VAR38[0];
                }
                else
                {
                    VAR21--;
                    VAR12 = VAR23;
                    VAR26 = VAR9->VAR2->VAR43;
                    for (VAR18 = 0; VAR18 < VAR22; VAR18++)
                    {
                        VAR25 = VAR6[VAR11++];
                        VAR12 += (VAR25 * 2);
                        VAR26 -= VAR25;
                        VAR24 = (signed char)(VAR6[VAR11++]);
                        if (VAR24 < 0)
                        {
                            VAR24 = -VAR24;
                            VAR28 = FUN5(&VAR6[VAR11]);
                            VAR11 += 2;
                            FUN6(VAR24);
                            for (VAR19 = 0; VAR19 < VAR24; VAR19++, VAR26 -= 2)
                            {
                                *((signed short *)(&VAR27[VAR12])) = VAR28;
                                VAR12 += 2;
                            }
                        }
                        else
                        {
                            FUN6(VAR24);
                            for (VAR19 = 0; VAR19 < VAR24; VAR19++, VAR26--)
                            {
                                *((signed short *)(&VAR27[VAR12])) = FUN5(&VAR6[VAR11]);
                                VAR11 += 2;
                                VAR12 += 2;
                            }
                        }
                    }
                    VAR23 += VAR9->VAR30.VAR38[0];
                }
            }
            break;
        case VAR44:
            FUN3(VAR2, VAR36, "");
            VAR11 = VAR11 + VAR16 - 6;
            break;
        case VAR45:
            memset(VAR27, 0x0000, VAR9->VAR30.VAR38[0] * VAR9->VAR2->VAR37 * 2);
            break;
        case VAR46:
            VAR23 = 0;
            for (VAR20 = 0; VAR20 < VAR9->VAR2->VAR37; VAR20++)
            {
                VAR12 = VAR23;
                VAR11++;
                VAR26 = (VAR9->VAR2->VAR43 * 2);
                while (VAR26 > 0)
                {
                    VAR24 = (signed char)(VAR6[VAR11++]);
                    if (VAR24 > 0)
                    {
                        VAR13 = VAR6[VAR11++];
                        FUN6(VAR24);
                        for (VAR19 = 0; VAR19 < VAR24; VAR19++)
                        {
                            VAR27[VAR12++] = VAR13;
                            VAR26--;
                            if (VAR26 < 0)
                                FUN3(VAR2, VAR36, "", VAR26);
                        }
                    }
                    else
                    {
                        VAR24 = -VAR24;
                        FUN6(VAR24);
                        for (VAR19 = 0; VAR19 < VAR24; VAR19++)
                        {
                            VAR13 = VAR6[VAR11++];
                            VAR27[VAR12++] = VAR13;
                            VAR26--;
                            if (VAR26 < 0)
                                FUN3(VAR2, VAR36, "", VAR26);
                        }
                    }
                }
                VAR28 = 0xFF00;
                if (0xFF00 != FUN5(&VAR28))
                {
                    VAR12 = VAR23;
                    VAR26 = VAR9->VAR2->VAR43;
                    while (VAR26 > 0)
                    {
                        *((signed short *)(&VAR27[VAR12])) = FUN5(&VAR6[VAR12]);
                        VAR12 += 2;
                    }
                }
                VAR23 += VAR9->VAR30.VAR38[0];
            }
            break;
        case VAR47:
            VAR23 = 0;
            for (VAR20 = 0; VAR20 < VAR9->VAR2->VAR37; VAR20++)
            {
                VAR12 = VAR23;
                VAR11++;
                VAR26 = VAR9->VAR2->VAR43;
                while (VAR26 > 0)
                {
                    VAR24 = (signed char)(VAR6[VAR11++]);
                    if (VAR24 > 0)
                    {
                        VAR28 = FUN5(&VAR6[VAR11]);
                        VAR11 += 2;
                        FUN6(VAR24);
                        for (VAR19 = 0; VAR19 < VAR24; VAR19++)
                        {
                            *((signed short *)(&VAR27[VAR12])) = VAR28;
                            VAR12 += 2;
                            VAR26--;
                            if (VAR26 < 0)
                                FUN3(VAR2, VAR36, "", VAR26);
                        }
                    }
                    else
                    {
                        VAR24 = -VAR24;
                        FUN6(VAR24);
                        for (VAR19 = 0; VAR19 < VAR24; VAR19++)
                        {
                            *((signed short *)(&VAR27[VAR12])) = FUN5(&VAR6[VAR11]);
                            VAR11 += 2;
                            VAR12 += 2;
                            VAR26--;
                            if (VAR26 < 0)
                                FUN3(VAR2, VAR36, "", VAR26);
                        }
                    }
                }
                VAR23 += VAR9->VAR30.VAR38[0];
            }
            break;
        case VAR48:
        case VAR49:
            if (VAR16 - 6 > (unsigned int)(VAR9->VAR2->VAR43 * VAR9->VAR2->VAR37) * 2)
            {
                FUN3(VAR2, VAR36, ""
                                            "",
                       VAR16 - 6);
                VAR11 += VAR16 - 6;
            }
            else
            {
                for (VAR23 = 0; VAR23 < VAR9->VAR30.VAR38[0] * VAR9->VAR2->VAR37; VAR23 += VAR9->VAR30.VAR38[0])
                {
                    VAR26 = VAR9->VAR2->VAR43;
                    VAR12 = 0;
                    while (VAR26 > 0)
                    {
                        *((signed short *)(&VAR27[VAR23 + VAR12])) = FUN5(&VAR6[VAR11 + VAR12]);
                        VAR12 += 2;
                        VAR26--;
                    }
                    VAR11 += VAR9->VAR2->VAR43 * 2;
                }
            }
            break;
        case VAR50:
            VAR11 += VAR16 - 6;
            break;
        default:
            FUN3(VAR2, VAR36, "", VAR17);
            break;
        }
        VAR14 -= VAR16;
        VAR15--;
    }
    if ((VAR11 != VAR7) && (VAR11 != VAR7 - 1))
        FUN3(VAR2, VAR36, ""
                                    "",
               VAR7, VAR11);
    *VAR4 = sizeof(VAR51);
    *(VAR51 *)VAR3 = VAR9->VAR30;
    return VAR7;
}