int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6)
{
    struct elfhdr VAR7;
    struct elfhdr VAR8;
    struct exec VAR9;
    int VAR10 = -1;
    abi_ulong VAR11, VAR12;
    int VAR13 = 0;
    unsigned int VAR14 = VAR15;
    unsigned char VAR16;
    int VAR17;
    abi_ulong VAR18;
    struct VAR19 *VAR20;
    struct VAR19 *VAR21;
    abi_ulong VAR22, VAR23;
    int VAR24;
    char *VAR25;
    abi_ulong VAR26, VAR27 = 0;
    int VAR28;
    abi_ulong VAR29, VAR30, VAR31, VAR32;
    abi_ulong VAR33 = 0;
    abi_ulong VAR34;
    char VAR35[6];
    VAR16 = 0;
    VAR28 = 0;
    VAR11 = 0;
    VAR12 = 0;
    VAR7 = *((struct VAR36 *)VAR2->VAR37);
    if (!FUN2(&VAR7))
    {
        return -VAR38;
    }
    FUN3(&VAR7);
    if (!FUN4(&VAR7))
    {
        return -VAR38;
    }
    VAR2->VAR39 = FUN5(1, &VAR2->VAR40, VAR2->VAR41, VAR2->VAR39);
    VAR2->VAR39 = FUN5(VAR2->VAR42, VAR2->VAR43, VAR2->VAR41, VAR2->VAR39);
    VAR2->VAR39 = FUN5(VAR2->argc, VAR2->argv, VAR2->VAR41, VAR2->VAR39);
    if (!VAR2->VAR39)
    {
        VAR24 = -VAR44;
    }
    VAR21 = (struct VAR19 *)malloc(VAR7.VAR45 * sizeof(struct VAR19));
    if (VAR21 == NULL)
    {
        return -VAR46;
    }
    VAR17 = VAR7.VAR45 * sizeof(struct VAR19);
    if (VAR7.VAR47 + VAR17 <= VAR48)
    {
        memcpy(VAR21, VAR2->VAR37 + VAR7.VAR47, VAR17);
    }
    else
    {
        VAR24 = pread(VAR2->VAR49, (char *)VAR21, VAR17, VAR7.VAR47);
        if (VAR24 != VAR17)
        {
            FUN6("");
            FUN7(-1);
        }
    }
    FUN8(VAR21, VAR7.VAR45);
    VAR23 = 0;
    VAR34 = ~((VAR50)0UL);
    VAR25 = NULL;
    VAR29 = ~((VAR50)0UL);
    VAR30 = 0;
    VAR31 = 0;
    VAR32 = 0;
    VAR9.VAR51 = 0;
    VAR20 = VAR21;
    for (VAR17 = 0; VAR17 < VAR7.VAR45; VAR17++)
    {
        if (VAR20->VAR52 == VAR53)
        {
            if (VAR25 != NULL)
            {
                free(VAR21);
                free(VAR25);
                close(VAR2->VAR49);
                return -VAR54;
            }
            VAR25 = (char *)malloc(VAR20->VAR55);
            if (VAR25 == NULL)
            {
                free(VAR21);
                close(VAR2->VAR49);
                return -VAR46;
            }
            if (VAR20->VAR56 + VAR20->VAR55 <= VAR48)
            {
                memcpy(VAR25, VAR2->VAR37 + VAR20->VAR56, VAR20->VAR55);
            }
            else
            {
                VAR24 = pread(VAR2->VAR49, VAR25, VAR20->VAR55, VAR20->VAR56);
                if (VAR24 != VAR20->VAR55)
                {
                    FUN6("");
                    FUN7(-1);
                }
            }
            if (strcmp(VAR25, "") == 0 || strcmp(VAR25, "") == 0)
            {
                VAR16 = 1;
            }
            VAR24 = open(FUN9(VAR25), VAR57);
            if (VAR24 < 0)
            {
                FUN6(VAR25);
                FUN7(-1);
            }
            VAR10 = VAR24;
            VAR24 = read(VAR10, VAR2->VAR37, VAR48);
            if (VAR24 < 0)
            {
                FUN6("");
                FUN7(-1);
            }
            if (VAR24 < VAR48)
            {
                memset(VAR2->VAR37, 0, VAR48 - VAR24);
            }
            VAR9 = *((struct VAR58 *)VAR2->VAR37);
            VAR8 = *((struct VAR36 *)VAR2->VAR37);
        }
        VAR20++;
    }
    if (VAR25)
    {
        VAR14 = VAR59 | VAR60;
        if ((FUN10(VAR9) != VAR61) && (FUN10(VAR9) != VAR62) && (FUN10(VAR9) != VAR63))
        {
            VAR14 = VAR59;
        }
        if (!FUN2(&VAR8))
        {
            VAR14 &= ~VAR59;
        }
        if (!VAR14)
        {
            free(VAR25);
            free(VAR21);
            close(VAR2->VAR49);
            return -VAR64;
        }
    }
    {
        char *VAR65;
        if (VAR14 == VAR60)
        {
            snprintf(VAR35, sizeof(VAR35), "", VAR2->VAR49);
            VAR65 = VAR35;
            if (VAR25)
            {
                VAR2->VAR39 = FUN5(1, &VAR65, VAR2->VAR41, VAR2->VAR39);
                VAR2->argc++;
            }
        }
        if (!VAR2->VAR39)
        {
            if (VAR25)
            {
                free(VAR25);
            }
            free(VAR21);
            close(VAR2->VAR49);
            return -VAR44;
        }
    }
    VAR6->VAR32 = 0;
    VAR6->VAR30 = 0;
    VAR6->VAR66 = (VAR50)VAR67;
    VAR6->VAR68 = 0;
    VAR26 = (VAR50)VAR7.VAR69;
    if (!(VAR70 || VAR71))
    {
        abi_ulong VAR72 = ~0;
        abi_ulong VAR73 = 0;
        abi_ulong VAR74;
        unsigned long VAR75;
        unsigned long VAR76;
        unsigned long VAR77;
        for (VAR17 = 0, VAR20 = VAR21; VAR17 < VAR7.VAR45; VAR17++, VAR20++)
        {
            if (VAR20->VAR52 != VAR78)
                continue;
            VAR74 = VAR20->VAR79;
            if (VAR74 < VAR72)
            {
                VAR72 = VAR74;
            }
            VAR74 += VAR20->VAR80;
            if (VAR74 > VAR73)
            {
                VAR73 = VAR74;
            }
        }
        assert(VAR72 < VAR73);
        VAR72 = VAR72 & VAR81;
        VAR73 = FUN11(VAR73);
        if (VAR72 < VAR82)
        {
            VAR75 = FUN11(VAR82);
        }
        else
        {
            VAR75 = VAR72;
            if (VAR75 != VAR72)
            {
                fprintf(VAR83, "");
                FUN12();
            }
        }
        VAR77 = VAR73 - VAR72;
        while (1)
        {
            VAR76 = (unsigned long)FUN13((void *)VAR75, VAR77, VAR84, VAR85 | VAR86 | VAR87, -1, 0);
            if (VAR76 == (unsigned long)-1)
            {
                fprintf(VAR83, "");
                FUN12();
            }
            if (VAR76 == VAR75)
            {
                break;
            }
            FUN14((void *)VAR76, VAR77);
            VAR75 += VAR88;
            if (VAR75 == VAR72)
            {
                fprintf(VAR83, "");
                FUN12();
            }
        }
        FUN15("" VAR89 "", VAR72, VAR76);
        VAR90 = VAR76 - VAR72;
    }
    VAR6->VAR91 = 0;
    VAR2->VAR39 = FUN16(VAR2->VAR39, VAR2, VAR6);
    VAR6->VAR92 = VAR2->VAR39;
    for (VAR17 = 0, VAR20 = VAR21; VAR17 < VAR7.VAR45; VAR17++, VAR20++)
    {
        int VAR93 = 0;
        int VAR94 = 0;
        abi_ulong VAR95;
        if (VAR20->VAR52 != VAR78)
            continue;
        if (VAR20->VAR96 & VAR97)
            VAR93 |= VAR98;
        if (VAR20->VAR96 & VAR99)
            VAR93 |= VAR100;
        if (VAR20->VAR96 & VAR101)
            VAR93 |= VAR102;
        VAR94 = VAR86 | VAR103;
        if (VAR7.VAR104 == VAR105 || VAR13)
        {
            VAR94 |= VAR106;
        }
        else if (VAR7.VAR104 == VAR107)
        {
            VAR95 = FUN17(0, VAR108, VAR84, VAR86 | VAR109, -1, 0);
            if (VAR95 == -1)
            {
                FUN6("");
                FUN7(-1);
            }
            VAR12 = FUN18(VAR95 - VAR20->VAR79);
        }
        VAR95 = FUN17(FUN18(VAR12 + VAR20->VAR79), (VAR20->VAR55 + FUN19(VAR20->VAR79)), VAR93, (VAR106 | VAR86 | VAR103), VAR2->VAR49, (VAR20->VAR56 - FUN19(VAR20->VAR79)));
        if (VAR95 == -1)
        {
            FUN6("");
            FUN7(-1);
        }
        if (FUN18(VAR20->VAR79) < VAR34)
            VAR34 = FUN18(VAR20->VAR79);
        if (!VAR13)
        {
            VAR13 = 1;
            VAR11 = VAR20->VAR79 - VAR20->VAR56;
            if (VAR7.VAR104 == VAR107)
            {
                VAR12 += VAR95 - FUN18(VAR12 + VAR20->VAR79);
                VAR11 += VAR12;
                VAR33 = VAR12;
            }
        }
        VAR22 = VAR20->VAR79;
        if (VAR22 < VAR29)
            VAR29 = VAR22;
        if (VAR31 < VAR22)
            VAR31 = VAR22;
        VAR22 = VAR20->VAR79 + VAR20->VAR55;
        if ((VAR20->VAR96 & VAR101) && VAR30 < VAR22)
            VAR30 = VAR22;
        if (VAR32 < VAR22)
            VAR32 = VAR22;
        VAR22 = VAR20->VAR79 + VAR20->VAR80;
        if (VAR22 > VAR23)
        {
            VAR23 = FUN20(VAR22);
        }
        if (VAR20->VAR55 < VAR20->VAR80)
        {
            abi_ulong VAR110 = VAR12 + VAR20->VAR79;
            FUN21(VAR110 + VAR20->VAR55, VAR110 + VAR20->VAR80, VAR93);
        }
    }
    VAR26 += VAR12;
    VAR23 += VAR12;
    VAR29 += VAR12;
    VAR30 += VAR12;
    VAR31 += VAR12;
    VAR32 += VAR12;
    if (VAR25)
    {
        if (VAR14 & 1)
        {
            VAR26 = FUN22(&VAR9, VAR10);
        }
        else if (VAR14 & 2)
        {
            VAR26 = FUN23(&VAR8, VAR10, &VAR27, VAR2->VAR37);
        }
        VAR33 = VAR27;
        close(VAR10);
        free(VAR25);
        if (VAR26 == ~((VAR50)0UL))
        {
            FUN24("");
            free(VAR21);
            FUN7(-1);
            return 0;
        }
    }
    free(VAR21);
    if (FUN25())
    {
        FUN26(&VAR7, VAR2->VAR49, VAR12);
    }
    if (VAR14 != VAR60)
        close(VAR2->VAR49);
    VAR6->VAR111 = (VAR16 ? VAR112 : VAR113);
    VAR6->VAR92 = VAR2->VAR39 = VAR34 - 4;
    VAR2->VAR39 = FUN27(VAR2->VAR39, VAR2->argc, VAR2->VAR42, &VAR7, VAR11, VAR12, VAR27, (VAR14 == VAR60 ? 0 : 1), VAR6);
    VAR6->VAR11 = VAR33;
    VAR6->VAR114 = VAR6->VAR115 = VAR23;
    VAR6->VAR30 = VAR30;
    VAR6->VAR29 = VAR29;
    VAR6->VAR31 = VAR31;
    VAR6->VAR32 = VAR32;
    VAR6->VAR92 = VAR2->VAR39;
    FUN24("", VAR6->VAR114);
    FUN24("", VAR6->VAR30);
    FUN24("", VAR6->VAR29);
    FUN24("", VAR6->VAR32);
    FUN24("", VAR6->VAR92);
    FUN24("", VAR6->VAR115);
    if (VAR6->VAR111 == VAR112)
    {
        VAR18 = FUN17(0, VAR88, VAR98 | VAR102, VAR106 | VAR86, -1, 0);
    }
    VAR6->VAR116 = VAR26;
    VAR2->VAR117 = &VAR118;
    return 0;
}