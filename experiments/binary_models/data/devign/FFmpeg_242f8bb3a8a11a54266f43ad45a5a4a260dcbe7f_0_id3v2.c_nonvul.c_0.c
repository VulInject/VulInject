static void FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR5 *VAR6, int VAR7, uint8_t VAR8, uint8_t VAR9, VAR10 **VAR11)
{
    int VAR12, VAR13;
    unsigned VAR14;
    char VAR15[5];
    int64_t VAR16, VAR17 = FUN2(VAR2) + VAR7;
    int VAR18;
    const char *VAR19 = NULL;
    AVIOContext VAR20;
    VAR1 *VAR21;
    unsigned char *VAR22 = NULL;
    int VAR23 = 0;
    const VAR24 *VAR25 = NULL;
    unsigned char *VAR26 = NULL;
    av_unused int VAR27 = 0;
    FUN3(VAR6, VAR28, "", VAR8, VAR9, VAR7);
    switch (VAR8)
    {
    case 2:
        if (VAR9 & 0x40)
        {
            VAR19 = "";
            goto VAR29;
        }
        VAR12 = 0;
        VAR18 = 6;
        break;
    case 3:
    case 4:
        VAR12 = 1;
        VAR18 = 10;
        break;
    default:
        VAR19 = "";
        goto VAR29;
    }
    VAR13 = VAR9 & 0x80;
    if (VAR12 && VAR9 & 0x40)
    {
        int VAR30 = FUN4(VAR2, 4);
        if (VAR8 == 4)
            VAR30 -= 4;
        if (VAR30 < 0)
        {
            VAR19 = "";
            goto VAR29;
        }
        FUN5(VAR2, VAR30);
        VAR7 -= VAR30 + 4;
        if (VAR7 < 0)
        {
            VAR19 = "";
            goto VAR29;
        }
    }
    while (VAR7 >= VAR18)
    {
        unsigned int VAR31 = 0;
        int VAR32 = 0;
        int VAR33 = 0;
        int VAR34 = 0;
        unsigned long av_unused VAR35;
        if (VAR12)
        {
            if (FUN6(VAR2, VAR15, 4) < 4)
                break;
            VAR15[4] = 0;
            if (VAR8 == 3)
            {
                VAR14 = FUN7(VAR2);
            }
            else
            {
                VAR14 = FUN7(VAR2);
                if (VAR14 > 0x7f)
                {
                    if (VAR14 < VAR7)
                    {
                        int64_t VAR36 = FUN2(VAR2);
                        if (FUN8(VAR2, 2 + VAR14 + 4))
                            break;
                        if (FUN9(VAR2, VAR36 + 2 + FUN10(VAR14), 4) == 1)
                            VAR14 = FUN10(VAR14);
                        else if (FUN9(VAR2, VAR36 + 2 + VAR14, 4) != 1)
                            break;
                        FUN11(VAR2, VAR36, VAR37);
                    }
                    else
                        VAR14 = FUN10(VAR14);
                }
            }
            VAR31 = FUN12(VAR2);
            VAR32 = VAR31 & VAR38;
        }
        else
        {
            if (FUN6(VAR2, VAR15, 3) < 3)
                break;
            VAR15[3] = 0;
            VAR14 = FUN13(VAR2);
        }
        if (VAR14 > (1 << 28))
            break;
        VAR7 -= VAR18 + VAR14;
        if (VAR7 < 0)
            break;
        VAR16 = FUN2(VAR2) + VAR14;
        if (!VAR14)
        {
            if (VAR15[0])
                FUN3(VAR6, VAR28, "", VAR15);
            continue;
        }
        if (VAR31 & VAR39)
        {
            if (VAR14 < 4)
                break;
            VAR35 = FUN7(VAR2);
            VAR14 -= 4;
        }
        else
            VAR35 = VAR14;
        VAR33 = VAR31 & VAR40;
        VAR34 = VAR31 & VAR41;
        if (VAR34 || (!VAR42 && VAR33))
        {
            const char *VAR43;
            if (!VAR33)
                VAR43 = "";
            else if (!VAR34)
                VAR43 = "";
            else
                VAR43 = "";
            FUN3(VAR6, VAR44, "", VAR43, VAR15);
            FUN5(VAR2, VAR14);
        }
        else if (VAR15[0] == '' || (VAR11 && (VAR25 = FUN14(VAR15, VAR12))))
        {
            VAR21 = VAR2;
            if (VAR13 || VAR32 || VAR33)
            {
                FUN15(&VAR22, &VAR23, VAR14);
                if (!VAR22)
                {
                    FUN3(VAR6, VAR45, "", VAR14);
                    goto VAR46;
                }
            }
            if (VAR13 || VAR32)
            {
                int64_t VAR17 = FUN2(VAR2) + VAR14;
                VAR47 *VAR48;
                VAR48 = VAR22;
                while (FUN2(VAR2) < VAR17 && VAR48 - VAR22 < VAR14 && !VAR2->VAR49)
                {
                    *VAR48++ = FUN16(VAR2);
                    if (*(VAR48 - 1) == 0xff && FUN2(VAR2) < VAR17 - 1 && VAR48 - VAR22 < VAR14 && !VAR2->VAR49)
                    {
                        uint8_t VAR50 = FUN16(VAR2);
                        *VAR48++ = VAR50 ? VAR50 : FUN16(VAR2);
                    }
                }
                FUN17(&VAR20, VAR22, VAR48 - VAR22, 0, NULL, NULL, NULL, NULL);
                VAR14 = VAR48 - VAR22;
                VAR21 = &VAR20;
            }
            if (VAR33)
            {
                int VAR51;
                FUN3(VAR6, VAR28, "", VAR15, VAR14, VAR35);
                FUN15(&VAR26, &VAR27, VAR35);
                if (!VAR26)
                {
                    FUN3(VAR6, VAR45, "", VAR35);
                    goto VAR46;
                }
                if (!(VAR13 || VAR32))
                {
                    VAR51 = FUN6(VAR2, VAR22, VAR14);
                    if (VAR51 < 0)
                    {
                        FUN3(VAR6, VAR45, "");
                        goto VAR46;
                    }
                    VAR14 = VAR51;
                }
                VAR51 = FUN18(VAR26, &VAR35, VAR22, VAR14);
                if (VAR51 != VAR52)
                {
                    FUN3(VAR6, VAR45, "", VAR51);
                    goto VAR46;
                }
                FUN17(&VAR20, VAR26, VAR35, 0, NULL, NULL, NULL, NULL);
                VAR14 = VAR35;
                VAR21 = &VAR20;
            }
            if (VAR15[0] == '')
                FUN19(VAR6, VAR21, VAR14, VAR4, VAR15);
            else
                VAR25->read(VAR6, VAR21, VAR14, VAR15, VAR11, VAR12);
        }
        else if (!VAR15[0])
        {
            if (VAR15[1])
                FUN3(VAR6, VAR44, "");
            FUN5(VAR2, VAR14);
            break;
        }
    VAR46:
        FUN11(VAR2, VAR16, VAR37);
    }
    if (VAR8 == 4 && VAR9 & 0x10)
        VAR17 += 10;
VAR29:
    if (VAR19)
        FUN3(VAR6, VAR53, "", VAR8, VAR19);
    FUN11(VAR2, VAR17, VAR37);
    FUN20(VAR22);
    FUN20(VAR26);
    return;
}