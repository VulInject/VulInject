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
    abi_ulong VAR22, VAR23, VAR24;
    int VAR25;
    char *VAR26;
    abi_ulong VAR27, VAR28 = 0;
    int VAR29;
    abi_ulong VAR30, VAR31, VAR32, VAR33;
    abi_ulong VAR34 = 0;
    abi_ulong VAR35;
    char VAR36[6];
    VAR16 = 0;
    VAR29 = 0;
    VAR11 = 0;
    VAR12 = 0;
    VAR7 = *((struct VAR37 *)VAR2->VAR38);
    FUN2(&VAR7);
    if ((VAR7.VAR39 != VAR40 && VAR7.VAR39 != VAR41) || (!FUN3(VAR7.VAR42)))
    {
        return -VAR43;
    }
    VAR2->VAR44 = FUN4(1, &VAR2->VAR45, VAR2->VAR46, VAR2->VAR44);
    VAR2->VAR44 = FUN4(VAR2->VAR47, VAR2->VAR48, VAR2->VAR46, VAR2->VAR44);
    VAR2->VAR44 = FUN4(VAR2->argc, VAR2->argv, VAR2->VAR46, VAR2->VAR44);
    if (!VAR2->VAR44)
    {
        VAR25 = -VAR49;
    }
    VAR21 = (struct VAR19 *)malloc(VAR7.VAR50 * VAR7.VAR51);
    if (VAR21 == NULL)
    {
        return -VAR52;
    }
    VAR25 = FUN5(VAR2->VAR53, VAR7.VAR54, VAR55);
    if (VAR25 > 0)
    {
        VAR25 = read(VAR2->VAR53, (char *)VAR21, VAR7.VAR50 * VAR7.VAR51);
    }
    if (VAR25 < 0)
    {
        FUN6("");
        FUN7(-1);
        free(VAR21);
        return -VAR56;
    }
    VAR20 = VAR21;
    for (VAR17 = 0; VAR17 < VAR7.VAR51; VAR17++, VAR20++)
    {
        FUN8(VAR20);
    }
    VAR20 = VAR21;
    VAR22 = 0;
    VAR24 = 0;
    VAR35 = ~((VAR57)0UL);
    VAR26 = NULL;
    VAR30 = ~((VAR57)0UL);
    VAR31 = 0;
    VAR32 = 0;
    VAR33 = 0;
    for (VAR17 = 0; VAR17 < VAR7.VAR51; VAR17++)
    {
        if (VAR20->VAR58 == VAR59)
        {
            if (VAR26 != NULL)
            {
                free(VAR21);
                free(VAR26);
                close(VAR2->VAR53);
                return -VAR60;
            }
            VAR26 = (char *)malloc(VAR20->VAR61);
            if (VAR26 == NULL)
            {
                free(VAR21);
                close(VAR2->VAR53);
                return -VAR52;
            }
            VAR25 = FUN5(VAR2->VAR53, VAR20->VAR62, VAR55);
            if (VAR25 >= 0)
            {
                VAR25 = read(VAR2->VAR53, VAR26, VAR20->VAR61);
            }
            if (VAR25 < 0)
            {
                FUN6("");
                FUN7(-1);
            }
            if (strcmp(VAR26, "") == 0 || strcmp(VAR26, "") == 0)
            {
                VAR16 = 1;
            }
            FUN9("", VAR26);
            if (VAR25 >= 0)
            {
                VAR25 = open(FUN10(VAR26), VAR63);
                if (VAR25 >= 0)
                {
                    VAR10 = VAR25;
                }
                else
                {
                    FUN6(VAR26);
                    FUN7(-1);
                }
            }
            if (VAR25 >= 0)
            {
                VAR25 = FUN5(VAR10, 0, VAR55);
                if (VAR25 >= 0)
                {
                    VAR25 = read(VAR10, VAR2->VAR38, 128);
                }
            }
            if (VAR25 >= 0)
            {
                VAR9 = *((struct VAR64 *)VAR2->VAR38);
                VAR8 = *((struct VAR37 *)VAR2->VAR38);
            }
            if (VAR25 < 0)
            {
                FUN6("");
                FUN7(-1);
                free(VAR21);
                free(VAR26);
                close(VAR2->VAR53);
                return VAR25;
            }
        }
        VAR20++;
    }
    if (VAR26)
    {
        VAR14 = VAR65 | VAR66;
        if ((FUN11(VAR9) != VAR67) && (FUN11(VAR9) != VAR68) && (FUN11(VAR9) != VAR69))
        {
            VAR14 = VAR65;
        }
        if (VAR8.VAR70[0] != 0x7f || FUN12((char *)&VAR8.VAR70[1], "", 3) != 0)
        {
            VAR14 &= ~VAR65;
        }
        if (!VAR14)
        {
            free(VAR26);
            free(VAR21);
            close(VAR2->VAR53);
            return -VAR71;
        }
    }
    {
        char *VAR72;
        if (VAR14 == VAR66)
        {
            snprintf(VAR36, sizeof(VAR36), "", VAR2->VAR53);
            VAR72 = VAR36;
            if (VAR26)
            {
                VAR2->VAR44 = FUN4(1, &VAR72, VAR2->VAR46, VAR2->VAR44);
                VAR2->argc++;
            }
        }
        if (!VAR2->VAR44)
        {
            if (VAR26)
            {
                free(VAR26);
            }
            free(VAR21);
            close(VAR2->VAR53);
            return -VAR49;
        }
    }
    VAR6->VAR33 = 0;
    VAR6->VAR31 = 0;
    VAR6->VAR73 = (VAR57)VAR74;
    VAR6->VAR75 = 0;
    VAR27 = (VAR57)VAR7.VAR76;
    VAR6->VAR77 = 0;
    VAR2->VAR44 = FUN13(VAR2->VAR44, VAR2, VAR6);
    VAR6->VAR78 = VAR2->VAR44;
    for (VAR17 = 0, VAR20 = VAR21; VAR17 < VAR7.VAR51; VAR17++, VAR20++)
    {
        int VAR79 = 0;
        int VAR80 = 0;
        abi_ulong VAR81;
        if (VAR20->VAR58 != VAR82)
            continue;
        if (VAR20->VAR83 & VAR84)
            VAR79 |= VAR85;
        if (VAR20->VAR83 & VAR86)
            VAR79 |= VAR87;
        if (VAR20->VAR83 & VAR88)
            VAR79 |= VAR89;
        VAR80 = VAR90 | VAR91;
        if (VAR7.VAR39 == VAR40 || VAR13)
        {
            VAR80 |= VAR92;
        }
        else if (VAR7.VAR39 == VAR41)
        {
            VAR81 = FUN14(0, VAR93, VAR94, VAR90 | VAR95, -1, 0);
            if (VAR81 == -1)
            {
                FUN6("");
                FUN7(-1);
            }
            VAR12 = FUN15(VAR81 - VAR20->VAR96);
        }
        VAR81 = FUN14(FUN15(VAR12 + VAR20->VAR96), (VAR20->VAR61 + FUN16(VAR20->VAR96)), VAR79, (VAR92 | VAR90 | VAR91), VAR2->VAR53, (VAR20->VAR62 - FUN16(VAR20->VAR96)));
        if (VAR81 == -1)
        {
            FUN6("");
            FUN7(-1);
        }
        if (FUN15(VAR20->VAR96) < VAR35)
            VAR35 = FUN15(VAR20->VAR96);
        if (!VAR13)
        {
            VAR13 = 1;
            VAR11 = VAR20->VAR96 - VAR20->VAR62;
            if (VAR7.VAR39 == VAR41)
            {
                VAR12 += VAR81 - FUN15(VAR12 + VAR20->VAR96);
                VAR11 += VAR12;
                VAR34 = VAR12;
            }
        }
        VAR23 = VAR20->VAR96;
        if (VAR23 < VAR30)
            VAR30 = VAR23;
        if (VAR32 < VAR23)
            VAR32 = VAR23;
        VAR23 = VAR20->VAR96 + VAR20->VAR61;
        if (VAR23 > VAR22)
            VAR22 = VAR23;
        if ((VAR20->VAR83 & VAR88) && VAR31 < VAR23)
            VAR31 = VAR23;
        if (VAR33 < VAR23)
            VAR33 = VAR23;
        VAR23 = VAR20->VAR96 + VAR20->VAR97;
        if (VAR23 > VAR24)
            VAR24 = VAR23;
    }
    VAR27 += VAR12;
    VAR22 += VAR12;
    VAR24 += VAR12;
    VAR30 += VAR12;
    VAR31 += VAR12;
    VAR32 += VAR12;
    VAR33 += VAR12;
    if (VAR26)
    {
        if (VAR14 & 1)
        {
            VAR27 = FUN17(&VAR9, VAR10);
        }
        else if (VAR14 & 2)
        {
            VAR27 = FUN18(&VAR8, VAR10, &VAR28);
        }
        VAR34 = VAR28;
        close(VAR10);
        free(VAR26);
        if (VAR27 == ~((VAR57)0UL))
        {
            FUN9("");
            free(VAR21);
            FUN7(-1);
            return 0;
        }
    }
    free(VAR21);
    if (VAR98)
        FUN19(&VAR7, VAR2->VAR53);
    if (VAR14 != VAR66)
        close(VAR2->VAR53);
    VAR6->VAR99 = (VAR16 ? VAR100 : VAR101);
    VAR6->VAR78 = VAR2->VAR44 = VAR35 - 4;
    VAR2->VAR44 = FUN20(VAR2->VAR44, VAR2->argc, VAR2->VAR47, &VAR7, VAR11, VAR12, VAR28, (VAR14 == VAR66 ? 0 : 1), VAR6);
    VAR6->VAR11 = VAR34;
    VAR6->VAR102 = VAR6->VAR103 = VAR24;
    VAR6->VAR31 = VAR31;
    VAR6->VAR30 = VAR30;
    VAR6->VAR32 = VAR32;
    VAR6->VAR33 = VAR33;
    VAR6->VAR78 = VAR2->VAR44;
    FUN21(VAR22, VAR24);
    FUN22(VAR22, VAR24);
    FUN9("", VAR6->VAR102);
    FUN9("", VAR6->VAR31);
    FUN9("", VAR6->VAR30);
    FUN9("", VAR6->VAR33);
    FUN9("", VAR6->VAR78);
    FUN9("", VAR6->VAR103);
    if (VAR6->VAR99 == VAR100)
    {
        VAR18 = FUN14(0, VAR104, VAR85 | VAR89, VAR92 | VAR90, -1, 0);
    }
    VAR6->VAR105 = VAR27;
    return 0;