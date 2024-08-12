static void FUN1(VAR1 *VAR2, int VAR3, uint8_t VAR4, uint8_t VAR5)
{
    int VAR6, VAR7, VAR8;
    char VAR9[5];
    int64_t VAR10, VAR11 = FUN2(VAR2->VAR12) + VAR3;
    int VAR13;
    const char *VAR14 = NULL;
    AVIOContext VAR12;
    unsigned char *VAR15 = NULL;
    int VAR16 = 0;
    switch (VAR4)
    {
    case 2:
        if (VAR5 & 0x40)
        {
            VAR14 = "";
            goto VAR17;
        }
        VAR6 = 0;
        VAR13 = 6;
        break;
    case 3:
    case 4:
        VAR6 = 1;
        VAR13 = 10;
        break;
    default:
        VAR14 = "";
        goto VAR17;
    }
    VAR8 = VAR5 & 0x80;
    if (VAR6 && VAR5 & 0x40)
        FUN3(VAR2->VAR12, FUN4(VAR2->VAR12, 4));
    while (VAR3 >= VAR13)
    {
        unsigned int VAR18;
        int VAR19 = 0;
        if (VAR6)
        {
            FUN5(VAR2->VAR12, VAR9, 4);
            VAR9[4] = 0;
            if (VAR4 == 3)
            {
                VAR7 = FUN6(VAR2->VAR12);
            }
            else
                VAR7 = FUN4(VAR2->VAR12, 4);
            VAR18 = FUN7(VAR2->VAR12);
            VAR19 = VAR18 & VAR20;
        }
        else
        {
            FUN5(VAR2->VAR12, VAR9, 3);
            VAR9[3] = 0;
            VAR7 = FUN8(VAR2->VAR12);
        }
        if (VAR7 < 0 || VAR7 > VAR3 - VAR13)
        {
            FUN9(VAR2, VAR21, "", VAR9);
            break;
        }
        VAR3 -= VAR13 + VAR7;
        VAR10 = FUN2(VAR2->VAR12) + VAR7;
        if (VAR18 & VAR22)
        {
            FUN6(VAR2->VAR12);
            VAR7 -= 4;
        }
        if (VAR18 & (VAR23 | VAR24))
        {
            FUN9(VAR2, VAR21, "", VAR9);
            FUN3(VAR2->VAR12, VAR7);
        }
        else if (VAR9[0] == '')
        {
            if (VAR8 || VAR19)
            {
                int VAR25, VAR26;
                FUN10(&VAR15, &VAR16, VAR7);
                for (VAR25 = 0, VAR26 = 0; VAR25 < VAR7; VAR25++, VAR26++)
                {
                    VAR15[VAR26] = FUN11(VAR2->VAR12);
                    if (VAR26 > 0 && !VAR15[VAR26] && VAR15[VAR26 - 1] == 0xff)
                    {
                        VAR26--;
                    }
                }
                FUN12(&VAR12, VAR15, VAR26, 0, NULL, NULL, NULL, NULL);
                FUN13(VAR2, &VAR12, VAR26, VAR9);
            }
            else
            {
                FUN13(VAR2, VAR2->VAR12, VAR7, VAR9);
            }
        }
        else if (!VAR9[0])
        {
            if (VAR9[1])
                FUN9(VAR2, VAR21, "");
            FUN3(VAR2->VAR12, VAR7);
            break;
        }
        FUN14(VAR2->VAR12, VAR10, VAR27);
    }
    if (VAR4 == 4 && VAR5 & 0x10)
        VAR11 += 10;
VAR17:
    if (VAR14)
        FUN9(VAR2, VAR28, "", VAR4, VAR14);
    FUN14(VAR2->VAR12, VAR11, VAR27);
    FUN15(VAR15);
    return;
}