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
    void (*VAR21)(VAR1 *, VAR17 *, int, char *, VAR6 **) = NULL;
    switch (VAR4)
    {
    case 2:
        if (VAR5 & 0x40)
        {
            VAR16 = "";
            goto VAR22;
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
        goto VAR22;
    }
    VAR10 = VAR5 & 0x80;
    if (VAR8 && VAR5 & 0x40)
        FUN3(VAR2->VAR14, FUN4(VAR2->VAR14, 4));
    while (VAR3 >= VAR15)
    {
        unsigned int VAR23 = 0;
        int VAR24 = 0;
        if (VAR8)
        {
            FUN5(VAR2->VAR14, VAR11, 4);
            VAR11[4] = 0;
            if (VAR4 == 3)
            {
                VAR9 = FUN6(VAR2->VAR14);
            }
            else
                VAR9 = FUN4(VAR2->VAR14, 4);
            VAR23 = FUN7(VAR2->VAR14);
            VAR24 = VAR23 & VAR25;
        }
        else
        {
            FUN5(VAR2->VAR14, VAR11, 3);
            VAR11[3] = 0;
            VAR9 = FUN8(VAR2->VAR14);
        }
        if (VAR9 < 0 || VAR9 > VAR3 - VAR15)
        {
            FUN9(VAR2, VAR26, "", VAR11);
            break;
        }
        VAR3 -= VAR15 + VAR9;
        VAR12 = FUN2(VAR2->VAR14) + VAR9;
        if (!VAR9)
        {
            if (VAR11[0])
                FUN9(VAR2, VAR27, "", VAR11);
            continue;
        }
        if (VAR23 & VAR28)
        {
            FUN6(VAR2->VAR14);
            VAR9 -= 4;
        }
        if (VAR23 & (VAR29 | VAR30))
        {
            FUN9(VAR2, VAR26, "", VAR11);
            FUN3(VAR2->VAR14, VAR9);
        }
        else if (VAR11[0] == '' || (VAR7 && (VAR21 = FUN10(VAR11, VAR8)->read)))
        {
            if (VAR10 || VAR24)
            {
                int VAR31, VAR32;
                FUN11(&VAR19, &VAR20, VAR9);
                if (!VAR19)
                {
                    FUN9(VAR2, VAR33, "", VAR9);
                    goto VAR34;
                }
                for (VAR31 = 0, VAR32 = 0; VAR31 < VAR9; VAR31++, VAR32++)
                {
                    VAR19[VAR32] = FUN12(VAR2->VAR14);
                    if (VAR32 > 0 && !VAR19[VAR32] && VAR19[VAR32 - 1] == 0xff)
                    {
                        VAR32--;
                    }
                }
                FUN13(&VAR14, VAR19, VAR32, 0, NULL, NULL, NULL, NULL);
                VAR9 = VAR32;
                VAR18 = &VAR14;
            }
            else
            {
                VAR18 = VAR2->VAR14;
            }
            if (VAR11[0] == '')
                FUN14(VAR2, VAR18, VAR9, VAR11);
            else
                FUN15(VAR2, VAR18, VAR9, VAR11, VAR7);
        }
        else if (!VAR11[0])
        {
            if (VAR11[1])
                FUN9(VAR2, VAR26, "");
            FUN3(VAR2->VAR14, VAR9);
            break;
        }
    VAR34:
        FUN16(VAR2->VAR14, VAR12, VAR35);
    }
    if (VAR4 == 4 && VAR5 & 0x10)
        VAR13 += 10;
VAR22:
    if (VAR16)
        FUN9(VAR2, VAR36, "", VAR4, VAR16);
    FUN16(VAR2->VAR14, VAR13, VAR35);
    FUN17(VAR19);
    return;
}