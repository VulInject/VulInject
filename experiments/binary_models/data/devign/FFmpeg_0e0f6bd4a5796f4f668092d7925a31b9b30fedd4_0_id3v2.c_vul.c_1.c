static void FUN1(VAR1 *VAR2, int VAR3, uint8_t VAR4, uint8_t VAR5, VAR6 **VAR7)
{
    int VAR8, VAR9;
    unsigned VAR10;
    char VAR11[5];
    int64_t VAR12, VAR13 = FUN2(VAR2->VAR14) + VAR3;
    int VAR15;
    const char *VAR16 = NULL;
    AVIOContext VAR14;
    VAR17 *VAR18;
    unsigned char *VAR19 = NULL;
    int VAR20 = 0;
    const VAR21 *VAR22 = NULL;
    unsigned char *VAR23 = NULL;
    int VAR24 = 0;
    FUN3(VAR2, VAR25, "", VAR4, VAR5, VAR3);
    switch (VAR4)
    {
    case 2:
        if (VAR5 & 0x40)
        {
            VAR16 = "";
            goto VAR26;
        }
        VAR8 = 0;
        VAR15 = 6;
        break;
    case 3:
    case 4:
        VAR8 = 1;
        VAR15 = 10;
        break;
    default:
        VAR16 = "";
        goto VAR26;
    }
    VAR9 = VAR5 & 0x80;
    if (VAR8 && VAR5 & 0x40)
    {
        int VAR27 = FUN4(VAR2->VAR14, 4);
        if (VAR4 == 4)
            VAR27 -= 4;
        if (VAR27 < 0)
        {
            VAR16 = "";
            goto VAR26;
        }
        FUN5(VAR2->VAR14, VAR27);
        VAR3 -= VAR27 + 4;
        if (VAR3 < 0)
        {
            VAR16 = "";
            goto VAR26;
        }
    }
    while (VAR3 >= VAR15)
    {
        unsigned int VAR28 = 0;
        int VAR29 = 0;
        int VAR30 = 0;
        int VAR31 = 0;
        unsigned long VAR32;
        if (VAR8)
        {
            FUN6(VAR2->VAR14, VAR11, 4);
            VAR11[4] = 0;
            if (VAR4 == 3)
            {
                VAR10 = FUN7(VAR2->VAR14);
            }
            else
                VAR10 = FUN4(VAR2->VAR14, 4);
            VAR28 = FUN8(VAR2->VAR14);
            VAR29 = VAR28 & VAR33;
        }
        else
        {
            FUN6(VAR2->VAR14, VAR11, 3);
            VAR11[3] = 0;
            VAR10 = FUN9(VAR2->VAR14);
        }
        if (VAR10 > (1 << 28))
            break;
        VAR3 -= VAR15 + VAR10;
        if (VAR3 < 0)
            break;
        VAR12 = FUN2(VAR2->VAR14) + VAR10;
        if (!VAR10)
        {
            if (VAR11[0])
                FUN3(VAR2, VAR25, "", VAR11);
            continue;
        }
        if (VAR28 & VAR34)
        {
            if (VAR10 < 4)
                break;
            VAR32 = FUN7(VAR2->VAR14);
            VAR10 -= 4;
        }
        else
            VAR32 = VAR10;
        VAR30 = VAR28 & VAR35;
        VAR31 = VAR28 & VAR36;
        if (VAR31 || (!VAR37 && VAR30))
        {
            const char *VAR38;
            if (!VAR30)
                VAR38 = "";
            else if (!VAR31)
                VAR38 = "";
            else
                VAR38 = "";
            FUN3(VAR2, VAR39, "", VAR38, VAR11);
            FUN5(VAR2->VAR14, VAR10);
        }
        else if (VAR11[0] == '' || (VAR7 && (VAR22 = FUN10(VAR11, VAR8))))
        {
            VAR18 = VAR2->VAR14;
            if (VAR9 || VAR29 || VAR30)
            {
                FUN11(&VAR19, &VAR20, VAR10);
                if (!VAR19)
                {
                    FUN3(VAR2, VAR40, "", VAR10);
                    goto VAR41;
                }
            }
            if (VAR9 || VAR29)
            {
                int64_t VAR13 = FUN2(VAR2->VAR14) + VAR10;
                VAR42 *VAR43;
                VAR43 = VAR19;
                while (FUN2(VAR2->VAR14) < VAR13 && VAR43 - VAR19 < VAR10 && !VAR2->VAR14->VAR44)
                {
                    *VAR43++ = FUN12(VAR2->VAR14);
                    if (*(VAR43 - 1) == 0xff && FUN2(VAR2->VAR14) < VAR13 - 1 && VAR43 - VAR19 < VAR10 && !VAR2->VAR14->VAR44)
                    {
                        uint8_t VAR45 = FUN12(VAR2->VAR14);
                        *VAR43++ = VAR45 ? VAR45 : FUN12(VAR2->VAR14);
                    }
                }
                FUN13(&VAR14, VAR19, VAR43 - VAR19, 0, NULL, NULL, NULL, NULL);
                VAR10 = VAR43 - VAR19;
                VAR18 = &VAR14;
            }
            if (VAR30)
            {
                int VAR46;
                FUN3(VAR2, VAR25, "", VAR11, VAR10, VAR32);
                FUN11(&VAR23, &VAR24, VAR32);
                if (!VAR23)
                {
                    FUN3(VAR2, VAR40, "", VAR32);
                    goto VAR41;
                }
                if (!(VAR9 || VAR29))
                {
                    VAR46 = FUN6(VAR2->VAR14, VAR19, VAR10);
                    if (VAR46 < 0)
                    {
                        FUN3(VAR2, VAR40, "");
                        goto VAR41;
                    }
                    VAR10 = VAR46;
                }
                VAR46 = FUN14(VAR23, &VAR32, VAR19, VAR10);
                if (VAR46 != VAR47)
                {
                    FUN3(VAR2, VAR40, "", VAR46);
                    goto VAR41;
                }
                FUN13(&VAR14, VAR23, VAR32, 0, NULL, NULL, NULL, NULL);
                VAR10 = VAR32;
                VAR18 = &VAR14;
            }
            if (VAR11[0] == '')
                FUN15(VAR2, VAR18, VAR10, &VAR2->VAR48, VAR11);
            else
                VAR22->read(VAR2, VAR18, VAR10, VAR11, VAR7);
        }
        else if (!VAR11[0])
        {
            if (VAR11[1])
                FUN3(VAR2, VAR39, "");
            FUN5(VAR2->VAR14, VAR10);
            break;
        }
    VAR41:
        FUN16(VAR2->VAR14, VAR12, VAR49);
    }
    if (VAR4 == 4 && VAR5 & 0x10)
        VAR13 += 10;
VAR26:
    if (VAR16)
        FUN3(VAR2, VAR50, "", VAR4, VAR16);
    FUN16(VAR2->VAR14, VAR13, VAR49);
    FUN17(VAR19);
    FUN17(VAR23);
    return;
}