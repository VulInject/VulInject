static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6)
{
    struct elfhdr VAR7;
    struct elfhdr VAR8;
    struct exec VAR9;
    int VAR10 = -1;
    unsigned long VAR11, VAR12;
    int VAR13 = 0;
    unsigned int VAR14 = VAR15;
    unsigned char VAR16;
    int VAR17;
    unsigned long VAR18;
    struct VAR19 *VAR20;
    struct VAR19 *VAR21;
    unsigned long VAR22, VAR23, VAR24;
    int VAR25;
    char *VAR26;
    unsigned long VAR27, VAR28 = 0;
    int VAR29;
    unsigned long VAR30, VAR31, VAR32;
    unsigned long VAR33;
    char VAR34[6];
    VAR16 = 0;
    VAR29 = 0;
    VAR11 = 0;
    VAR12 = 0;
    VAR7 = *((struct VAR35 *)VAR2->VAR36);
    FUN2(&VAR7);
    if (VAR7.VAR37[0] != 0x7f || FUN3(&VAR7.VAR37[1], "", 3) != 0)
    {
        return -VAR38;
    }
    if ((VAR7.VAR39 != VAR40 && VAR7.VAR39 != VAR41) || (!FUN4(VAR7.VAR42)))
    {
        return -VAR38;
    }
    VAR21 = (struct VAR19 *)malloc(VAR7.VAR43 * VAR7.VAR44);
    if (VAR21 == NULL)
    {
        return -VAR45;
    }
    VAR25 = FUN5(VAR2->VAR46, VAR7.VAR47, VAR48);
    if (VAR25 > 0)
    {
        VAR25 = read(VAR2->VAR46, (char *)VAR21, VAR7.VAR43 * VAR7.VAR44);
    }
    if (VAR25 < 0)
    {
        FUN6("");
        FUN7(-1);
        free(VAR21);
        return -VAR49;
    }
    VAR20 = VAR21;
    for (VAR17 = 0; VAR17 < VAR7.VAR44; VAR17++, VAR20++)
    {
        FUN8(VAR20);
    }
    VAR20 = VAR21;
    VAR22 = 0;
    VAR24 = 0;
    VAR33 = ~0UL;
    VAR26 = NULL;
    VAR30 = ~0UL;
    VAR31 = 0;
    VAR32 = 0;
    for (VAR17 = 0; VAR17 < VAR7.VAR44; VAR17++)
    {
        if (VAR20->VAR50 == VAR51)
        {
            if (VAR26 != NULL)
            {
                free(VAR21);
                free(VAR26);
                close(VAR2->VAR46);
                return -VAR52;
            }
            VAR26 = (char *)malloc(VAR20->VAR53);
            if (VAR26 == NULL)
            {
                free(VAR21);
                close(VAR2->VAR46);
                return -VAR45;
            }
            VAR25 = FUN5(VAR2->VAR46, VAR20->VAR54, VAR48);
            if (VAR25 >= 0)
            {
                VAR25 = read(VAR2->VAR46, VAR26, VAR20->VAR53);
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
                VAR25 = open(FUN10(VAR26), VAR55);
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
                VAR25 = FUN5(VAR10, 0, VAR48);
                if (VAR25 >= 0)
                {
                    VAR25 = read(VAR10, VAR2->VAR36, 128);
                }
            }
            if (VAR25 >= 0)
            {
                VAR9 = *((struct VAR56 *)VAR2->VAR36);
                VAR8 = *((struct VAR35 *)VAR2->VAR36);
            }
            if (VAR25 < 0)
            {
                FUN6("");
                FUN7(-1);
                free(VAR21);
                free(VAR26);
                close(VAR2->VAR46);
                return VAR25;
            }
        }
        VAR20++;
    }
    if (VAR26)
    {
        VAR14 = VAR57 | VAR58;
        if ((FUN11(VAR9) != VAR59) && (FUN11(VAR9) != VAR60) && (FUN11(VAR9) != VAR61))
        {
            VAR14 = VAR57;
        }
        if (VAR8.VAR37[0] != 0x7f || FUN3(&VAR8.VAR37[1], "", 3) != 0)
        {
            VAR14 &= ~VAR57;
        }
        if (!VAR14)
        {
            free(VAR26);
            free(VAR21);
            close(VAR2->VAR46);
            return -VAR62;
        }
    }
    if (!VAR2->VAR63)
    {
        char *VAR64;
        if (VAR14 == VAR58)
        {
            sprintf(VAR34, "", VAR2->VAR46);
            VAR64 = VAR34;
            if (VAR26)
            {
                VAR2->VAR65 = FUN12(1, &VAR64, VAR2->VAR66, VAR2->VAR65);
                VAR2->argc++;
            }
        }
        if (!VAR2->VAR65)
        {
            if (VAR26)
            {
                free(VAR26);
            }
            free(VAR21);
            close(VAR2->VAR46);
            return -VAR67;
        }
    }
    VAR6->VAR32 = 0;
    VAR6->VAR31 = 0;
    VAR6->VAR68 = (unsigned long)VAR69;
    VAR6->VAR70 = 0;
    VAR27 = (unsigned long)VAR7.VAR71;
    VAR6->VAR72 = 0;
    VAR2->VAR65 = FUN13(VAR2->VAR65, VAR2, VAR6);
    VAR6->VAR73 = VAR2->VAR65;
    for (VAR17 = 0, VAR20 = VAR21; VAR17 < VAR7.VAR44; VAR17++, VAR20++)
    {
        int VAR74 = 0;
        int VAR75 = 0;
        unsigned long VAR76;
        if (VAR20->VAR50 != VAR77)
            continue;
        if (VAR20->VAR78 & VAR79)
            VAR74 |= VAR80;
        if (VAR20->VAR78 & VAR81)
            VAR74 |= VAR82;
        if (VAR20->VAR78 & VAR83)
            VAR74 |= VAR84;
        VAR75 = VAR85 | VAR86;
        if (VAR7.VAR39 == VAR40 || VAR13)
        {
            VAR75 |= VAR87;
        }
        else if (VAR7.VAR39 == VAR41)
        {
            VAR76 = FUN14(0, VAR88, VAR89, VAR85 | VAR90, -1, 0);
            if (VAR76 == -1)
            {
                FUN6("");
                FUN7(-1);
            }
            VAR12 = FUN15(VAR76 - VAR20->VAR91);
        }
        VAR76 = FUN14(FUN15(VAR12 + VAR20->VAR91), (VAR20->VAR53 + FUN16(VAR20->VAR91)), VAR74, (VAR87 | VAR85 | VAR86), VAR2->VAR46, (VAR20->VAR54 - FUN16(VAR20->VAR91)));
        if (VAR76 == -1)
        {
            FUN6("");
            FUN7(-1);
        }
        if (FUN15(VAR20->VAR91) < VAR33)
            VAR33 = FUN15(VAR20->VAR91);
        if (!VAR13)
        {
            VAR13 = 1;
            VAR11 = VAR20->VAR91 - VAR20->VAR54;
            if (VAR7.VAR39 == VAR41)
            {
                VAR12 += VAR76 - FUN15(VAR12 + VAR20->VAR91);
                VAR11 += VAR12;
            }
        }
        VAR23 = VAR20->VAR91;
        if (VAR23 < VAR30)
            VAR30 = VAR23;
        VAR23 = VAR20->VAR91 + VAR20->VAR53;
        if (VAR23 > VAR22)
            VAR22 = VAR23;
        if ((VAR20->VAR78 & VAR83) && VAR31 < VAR23)
            VAR31 = VAR23;
        if (VAR32 < VAR23)
            VAR32 = VAR23;
        VAR23 = VAR20->VAR91 + VAR20->VAR92;
        if (VAR23 > VAR24)
            VAR24 = VAR23;
    }
    VAR27 += VAR12;
    VAR22 += VAR12;
    VAR24 += VAR12;
    VAR30 += VAR12;
    VAR31 += VAR12;
    VAR32 += VAR12;
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
        close(VAR10);
        free(VAR26);
        if (VAR27 == ~0UL)
        {
            FUN9("");
            free(VAR21);
            FUN7(-1);
            return 0;
        }
    }
    free(VAR21);
    if (VAR93)
        FUN19(&VAR7, VAR2->VAR46);
    if (VAR14 != VAR58)
        close(VAR2->VAR46);
    VAR6->VAR94 = (VAR16 ? VAR95 : VAR96);
    VAR6->VAR73 = VAR2->VAR65 = VAR33 - 4;
    VAR2->VAR65 = (unsigned long)FUN20((char *)VAR2->VAR65, VAR2->argc, VAR2->VAR97, &VAR7, VAR11, VAR12, VAR28, (VAR14 == VAR58 ? 0 : 1), VAR6);
    if (VAR14 == VAR58)
        VAR6->VAR98 += strlen(VAR34) + 1;
    VAR6->VAR99 = VAR6->VAR100 = VAR24;
    VAR6->VAR31 = VAR31;
    VAR6->VAR30 = VAR30;
    VAR6->VAR32 = VAR32;
    VAR6->VAR73 = VAR2->VAR65;
    FUN21(VAR22, VAR24);
    FUN22(VAR22);
    FUN9("", VAR6->VAR99);
    FUN9("", VAR6->VAR31);
    FUN9("", VAR6->VAR30);
    FUN9("", VAR6->VAR32);
    FUN9("", VAR6->VAR73);
    FUN9("", VAR6->VAR100);
    if (VAR6->VAR94 == VAR95)
    {
        VAR18 = FUN14(0, VAR101, VAR80 | VAR84, VAR87 | VAR85, -1, 0);
    }
    FUN23(VAR4);
    VAR6->VAR102 = VAR27;
    return 0;
}