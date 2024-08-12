static void FUN1(VAR1 *VAR2, int VAR3, uint8_t VAR4, uint8_t VAR5, VAR6 **VAR7)
{
    int VAR8, VAR9, VAR10;
    char VAR11[5];
    int64_t VAR12, VAR13 = FUN2(VAR2->VAR14) + VAR3;
    int VAR15;
    const char *VAR16 = NULL;
    AVIOContext VAR14;
    VAR17 *VAR18;
    unsigned char *VAR19 = NULL;
    int VAR20 = 0;
    const VAR21 *VAR22;
    switch (VAR4)
    {
    case 2:
        if (VAR5 & 0x40)
        {
            VAR16 = "";
            goto VAR23;
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
        goto VAR23;
    }
    VAR10 = VAR5 & 0x80;
    if (VAR8 && VAR5 & 0x40)
    {
        int VAR24 = FUN3(VAR2->VAR14, 4);
        if (VAR4 == 4)
            VAR24 -= 4;
        if (VAR24 < 0)
        {
            VAR16 = "";
            goto VAR23;
        }
        FUN4(VAR2->VAR14, VAR24);
    }
    while (VAR3 >= VAR15)
    {
        unsigned int VAR25 = 0;
        int VAR26 = 0;
        if (VAR8)
        {
            FUN5(VAR2->VAR14, VAR11, 4);
            VAR11[4] = 0;
            if (VAR4 == 3)
            {
                VAR9 = FUN6(VAR2->VAR14);
            }
            else
                VAR9 = FUN3(VAR2->VAR14, 4);
            VAR25 = FUN7(VAR2->VAR14);
            VAR26 = VAR25 & VAR27;
        }
        else
        {
            FUN5(VAR2->VAR14, VAR11, 3);
            VAR11[3] = 0;
            VAR9 = FUN8(VAR2->VAR14);
        }
        if (VAR9 < 0 || VAR9 > VAR3 - VAR15)
        {
            FUN9(VAR2, VAR28, "", VAR11);
            break;
        }
        VAR3 -= VAR15 + VAR9;
        VAR12 = FUN2(VAR2->VAR14) + VAR9;
        if (!VAR9)
        {
            if (VAR11[0])
                FUN9(VAR2, VAR29, "", VAR11);
            continue;
        }
        if (VAR25 & VAR30)
        {
            FUN6(VAR2->VAR14);
            VAR9 -= 4;
        }
        if (VAR25 & (VAR31 | VAR32))
        {
            FUN9(VAR2, VAR28, "", VAR11);
            FUN4(VAR2->VAR14, VAR9);
        }
        else if (VAR11[0] == '' || (VAR7 && (VAR22 = FUN10(VAR11, VAR8))))
        {
            if (VAR10 || VAR26)
            {
                int64_t VAR13 = FUN2(VAR2->VAR14) + VAR9;
                VAR33 *VAR34;
                FUN11(&VAR19, &VAR20, VAR9);
                if (!VAR19)
                {
                    FUN9(VAR2, VAR35, "", VAR9);
                    goto VAR36;
                }
                VAR34 = VAR19;
                while (FUN2(VAR2->VAR14) < VAR13 && !VAR2->VAR14->VAR37)
                {
                    *VAR34++ = FUN12(VAR2->VAR14);
                    if (*(VAR34 - 1) == 0xff && FUN2(VAR2->VAR14) < VAR13 - 1 && !VAR2->VAR14->VAR37)
                    {
                        uint8_t VAR38 = FUN12(VAR2->VAR14);
                        *VAR34++ = VAR38 ? VAR38 : FUN12(VAR2->VAR14);
                    }
                }
                FUN13(&VAR14, VAR19, VAR34 - VAR19, 0, NULL, NULL, NULL, NULL);
                VAR9 = VAR34 - VAR19;
                VAR18 = &VAR14;
            }
            else
            {
                VAR18 = VAR2->VAR14;
            }
            if (VAR11[0] == '')
                FUN14(VAR2, VAR18, VAR9, VAR11);
            else
                VAR22->read(VAR2, VAR18, VAR9, VAR11, VAR7);
        }
        else if (!VAR11[0])
        {
            if (VAR11[1])
                FUN9(VAR2, VAR28, "");
            FUN4(VAR2->VAR14, VAR9);
            break;
        }
    VAR36:
        FUN15(VAR2->VAR14, VAR12, VAR39);
    }
    if (VAR4 == 4 && VAR5 & 0x10)
        VAR13 += 10;
VAR23:
    if (VAR16)
        FUN9(VAR2, VAR40, "", VAR4, VAR16);
    FUN15(VAR2->VAR14, VAR13, VAR39);
    FUN16(VAR19);
    return;
}