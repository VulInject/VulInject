int FUN1(const VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    VAR5 *VAR6 = NULL;
    char **VAR7 = NULL;
    char **VAR8;
    size_t VAR9, VAR10, VAR11;
    bool VAR12;
    int VAR13;
    int VAR14;
    struct acpi_table_header VAR15;
    char unsigned *VAR16;
    {
        VAR17 *VAR18;
        VAR18 = FUN2(VAR2);
        FUN3(FUN4(VAR18), &VAR4, NULL, &VAR6);
        FUN5(VAR18);
    }
    if (VAR6)
    {
        goto VAR19;
    }
    if (VAR4->VAR20 == VAR4->VAR21)
    {
        FUN6(&VAR6, "");
        goto VAR19;
    }
    VAR12 = VAR4->VAR20;
    VAR7 = FUN7(VAR4->VAR20 ? VAR4->VAR22 : VAR4->VAR23, "", 0);
    if (VAR7 == NULL || VAR7[0] == NULL)
    {
        FUN6(&VAR6, "");
        goto VAR19;
    }
    if (!VAR24)
    {
        VAR11 = sizeof(VAR25);
        VAR24 = FUN8(VAR11);
    }
    else
    {
        VAR11 = VAR26;
    }
    VAR10 = VAR11;
    VAR24 = FUN9(VAR24, VAR10 + VAR27);
    VAR11 += VAR12 ? VAR28 : VAR27;
    for (VAR8 = VAR7; *VAR8; ++VAR8)
    {
        int VAR29 = open(*VAR8, VAR30 | VAR31);
        if (VAR29 < 0)
        {
            FUN6(&VAR6, "", *VAR8, strerror(VAR32));
            goto VAR19;
        }
        for (;;)
        {
            char unsigned VAR23[8192];
            VAR14 = read(VAR29, VAR23, sizeof(VAR23));
            if (VAR14 == 0)
            {
                break;
            }
            else if (VAR14 > 0)
            {
                VAR24 = FUN9(VAR24, VAR11 + VAR14);
                memcpy(VAR24 + VAR11, VAR23, VAR14);
                VAR11 += VAR14;
            }
            else if (VAR32 != VAR33)
            {
                FUN6(&VAR6, "", *VAR8, strerror(VAR32));
                close(VAR29);
                goto VAR19;
            }
        }
        close(VAR29);
    }
    VAR16 = VAR24 + VAR10;
    VAR13 = 0;
    memcpy(&VAR15, VAR12 ? VAR16 : VAR34, VAR27);
    VAR9 = VAR11 - VAR10 - VAR28;
    VAR15.VAR35 = FUN10(VAR9);
    if (VAR4->VAR36)
    {
        strncpy(VAR15.VAR37, VAR4->VAR37, sizeof(VAR15.VAR37));
        ++VAR13;
    }
    if (VAR12)
    {
        unsigned long VAR38;
        VAR38 = FUN11(VAR15.VAR39);
        if (VAR38 != VAR9)
        {
            fprintf(VAR40, ""
                            "",
                    VAR38, VAR9);
            ++VAR13;
        }
    }
    VAR15.VAR39 = FUN12(VAR9);
    if (VAR4->VAR41)
    {
        VAR15.VAR42 = VAR4->VAR43;
        ++VAR13;
    }
    if (VAR4->VAR44)
    {
        strncpy(VAR15.VAR45, VAR4->VAR45, sizeof(VAR15.VAR45));
        ++VAR13;
    }
    if (VAR4->VAR46)
    {
        strncpy(VAR15.VAR47, VAR4->VAR47, sizeof(VAR15.VAR47));
        ++VAR13;
    }
    if (VAR4->VAR48)
    {
        VAR15.VAR49 = FUN12(VAR4->VAR50);
        ++VAR13;
    }
    if (VAR4->VAR51)
    {
        strncpy(VAR15.VAR52, VAR4->VAR52, sizeof(VAR15.VAR52));
        ++VAR13;
    }
    if (VAR4->VAR53)
    {
        VAR15.VAR54 = FUN12(VAR4->VAR55);
        ++VAR13;
    }
    if (!VAR12 && !VAR13)
    {
        fprintf(VAR40, "");
    }
    VAR15.VAR56 = 0;
    memcpy(VAR16, &VAR15, sizeof(VAR15));
    if (VAR13 || !VAR12 || 1)
    {
        ((struct VAR57 *)VAR16)->VAR56 = FUN13((VAR58 *)VAR16 + VAR28, VAR9);
    }
    (*(VAR25 *)VAR24) = FUN12(FUN11(*(VAR25 *)VAR24) + 1);
    VAR26 = VAR11;
VAR19:
    FUN14(VAR7);
    if (VAR4 != NULL)
    {
        VAR59 *VAR60;
        VAR60 = FUN15();
        FUN3(FUN16(VAR60), &VAR4, NULL, NULL);
        FUN17(VAR60);
    }
    if (VAR6)
    {
        fprintf(VAR40, "", FUN18(VAR6));
        FUN19(VAR6);
        return -1;
    }
    return 0;
}