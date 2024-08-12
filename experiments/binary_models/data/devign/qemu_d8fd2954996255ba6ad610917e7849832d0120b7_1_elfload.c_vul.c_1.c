static void FUN1(const char *VAR1, int VAR2, struct VAR3 *VAR4, char **VAR5, char VAR6[VAR7])
{
    struct VAR8 *VAR9 = (struct VAR8 *)VAR6;
    struct VAR10 *VAR11;
    abi_ulong VAR12, VAR13, VAR14, VAR15, VAR16;
    int VAR17, VAR18;
    const char *VAR19;
    VAR19 = "";
    if (!FUN2(VAR9))
    {
        goto VAR20;
    }
    FUN3(VAR9);
    if (!FUN4(VAR9))
    {
        goto VAR20;
    }
    VAR17 = VAR9->VAR21 * sizeof(struct VAR10);
    if (VAR9->VAR22 + VAR17 <= VAR7)
    {
        VAR11 = (struct VAR10 *)(VAR6 + VAR9->VAR22);
    }
    else
    {
        VAR11 = (struct VAR10 *)alloca(VAR17);
        VAR18 = pread(VAR2, VAR11, VAR17, VAR9->VAR22);
        if (VAR18 != VAR17)
        {
            goto VAR23;
        }
    }
    FUN5(VAR11, VAR9->VAR21);
    VAR4->VAR24 = 0;
    VAR4->VAR25 = 0;
    VAR14 = -1, VAR15 = 0;
    for (VAR17 = 0; VAR17 < VAR9->VAR21; ++VAR17)
    {
        if (VAR11[VAR17].VAR26 == VAR27)
        {
            abi_ulong VAR28 = VAR11[VAR17].VAR29;
            if (VAR28 < VAR14)
            {
                VAR14 = VAR28;
            }
            VAR28 += VAR11[VAR17].VAR30;
            if (VAR28 > VAR15)
            {
                VAR15 = VAR28;
            }
            ++VAR4->VAR24;
        }
    }
    VAR12 = VAR14;
    if (VAR9->VAR31 == VAR32)
    {
        VAR12 = FUN6(VAR14, VAR15 - VAR14, VAR33, VAR34 | VAR35 | VAR36, -1, 0);
        if (VAR12 == -1)
        {
            goto VAR37;
        }
    }
    else if (VAR5 != NULL)
    {
        FUN7(VAR1, VAR14, VAR15);
    }
    VAR13 = VAR12 - VAR14;
    {
        struct VAR38 *VAR39 = VAR4->VAR39 = FUN8(sizeof(*VAR39) * VAR4->VAR24);
        for (VAR17 = 0; VAR17 < VAR9->VAR21; ++VAR17)
        {
            switch (VAR11[VAR17].VAR26)
            {
            case VAR40:
                VAR4->VAR25 = VAR11[VAR17].VAR29 + VAR13;
                break;
            case VAR27:
                VAR39->VAR41 = VAR11[VAR17].VAR29 + VAR13;
                VAR39->VAR29 = VAR11[VAR17].VAR29;
                VAR39->VAR30 = VAR11[VAR17].VAR30;
                ++VAR39;
                break;
            }
        }
    }
    VAR4->VAR13 = VAR13;
    VAR4->VAR12 = VAR12;
    VAR4->VAR42 = VAR9->VAR43 + VAR13;
    VAR4->VAR44 = -1;
    VAR4->VAR45 = 0;
    VAR4->VAR46 = -1;
    VAR4->VAR47 = 0;
    VAR4->VAR48 = 0;
    for (VAR17 = 0; VAR17 < VAR9->VAR21; VAR17++)
    {
        struct VAR10 *VAR49 = VAR11 + VAR17;
        if (VAR49->VAR26 == VAR27)
        {
            abi_ulong VAR50, VAR51, VAR52, VAR53, VAR54;
            int VAR55 = 0;
            if (VAR49->VAR56 & VAR57)
                VAR55 = VAR58;
            if (VAR49->VAR56 & VAR59)
                VAR55 |= VAR60;
            if (VAR49->VAR56 & VAR61)
                VAR55 |= VAR62;
            VAR50 = VAR13 + VAR49->VAR29;
            VAR51 = FUN9(VAR50);
            VAR52 = FUN10(VAR50);
            VAR16 = FUN6(VAR52, VAR49->VAR63 + VAR51, VAR55, VAR34 | VAR64, VAR2, VAR49->VAR65 - VAR51);
            if (VAR16 == -1)
            {
                goto VAR37;
            }
            VAR53 = VAR50 + VAR49->VAR63;
            VAR54 = VAR50 + VAR49->VAR30;
            if (VAR53 < VAR54)
            {
                FUN11(VAR53, VAR54, VAR55);
            }
            if (VAR55 & VAR62)
            {
                if (VAR50 < VAR4->VAR44)
                {
                    VAR4->VAR44 = VAR50;
                }
                if (VAR53 > VAR4->VAR45)
                {
                    VAR4->VAR45 = VAR53;
                }
            }
            if (VAR55 & VAR60)
            {
                if (VAR50 < VAR4->VAR46)
                {
                    VAR4->VAR46 = VAR50;
                }
                if (VAR53 > VAR4->VAR47)
                {
                    VAR4->VAR47 = VAR53;
                }
                if (VAR54 > VAR4->VAR48)
                {
                    VAR4->VAR48 = VAR54;
                }
            }
        }
        else if (VAR49->VAR26 == VAR66 && VAR5)
        {
            char *VAR67;
            if (*VAR5)
            {
                VAR19 = "";
                goto VAR20;
            }
            VAR67 = malloc(VAR49->VAR63);
            if (!VAR67)
            {
                goto VAR37;
            }
            if (VAR49->VAR65 + VAR49->VAR63 <= VAR7)
            {
                memcpy(VAR67, VAR6 + VAR49->VAR65, VAR49->VAR63);
            }
            else
            {
                VAR18 = pread(VAR2, VAR67, VAR49->VAR63, VAR49->VAR65);
                if (VAR18 != VAR49->VAR63)
                {
                    goto VAR37;
                }
            }
            if (VAR67[VAR49->VAR63 - 1] != 0)
            {
                VAR19 = "";
                goto VAR20;
            }
            *VAR5 = VAR67;
        }
    }
    if (VAR4->VAR47 == 0)
    {
        VAR4->VAR46 = VAR4->VAR45;
        VAR4->VAR47 = VAR4->VAR45;
        VAR4->VAR48 = VAR4->VAR45;
    }
    if (FUN12())
    {
        FUN13(VAR9, VAR2, VAR13);
    }
    close(VAR2);
    return;
VAR23:
    if (VAR18 >= 0)
    {
        VAR19 = "";
        goto VAR20;
    }
VAR37:
    VAR19 = strerror(VAR68);
VAR20:
    fprintf(VAR69, "", VAR1, VAR19);
    FUN14(-1);