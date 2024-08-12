int FUN1(const char *VAR1)
{
    char VAR2[1024], *VAR3, *VAR4;
    unsigned long VAR5;
    size_t VAR6, VAR7, VAR8;
    bool VAR9;
    int VAR10;
    int VAR11;
    struct acpi_table_header VAR12;
    VAR11 = 0;
    VAR11 |= FUN2(VAR2, sizeof(VAR2), "", VAR1) ? 1 : 0;
    VAR11 |= FUN2(VAR2, sizeof(VAR2), "", VAR1) ? 2 : 0;
    switch (VAR11)
    {
    case 0:
        VAR2[0] = '';
    case 1:
        VAR9 = false;
        break;
    case 2:
        VAR9 = true;
        break;
    default:
        fprintf(VAR13, "");
        return -1;
    }
    if (!VAR14)
    {
        VAR8 = sizeof(VAR15);
        VAR14 = FUN3(VAR8);
    }
    else
    {
        VAR8 = VAR16;
    }
    VAR7 = VAR8;
    VAR14 = FUN4(VAR14, VAR7 + VAR17);
    VAR8 += VAR9 ? VAR18 : VAR17;
    for (VAR4 = strtok(VAR2, ""); VAR4; VAR4 = strtok(NULL, ""))
    {
        int VAR19 = open(VAR4, VAR20);
        if (VAR19 < 0)
        {
            fprintf(VAR13, "", VAR4, strerror(VAR21));
            return -1;
        }
        for (;;)
        {
            char VAR22[8192];
            VAR11 = read(VAR19, VAR22, sizeof(VAR22));
            if (VAR11 == 0)
            {
                break;
            }
            else if (VAR11 > 0)
            {
                VAR14 = FUN4(VAR14, VAR8 + VAR11);
                memcpy(VAR14 + VAR8, VAR22, VAR11);
                VAR8 += VAR11;
            }
            else if (VAR21 != VAR23)
            {
                fprintf(VAR13, "", VAR4, strerror(VAR21));
                close(VAR19);
                return -1;
            }
        }
        close(VAR19);
    }
    VAR4 = VAR14 + VAR7;
    VAR10 = 0;
    memcpy(&VAR12, VAR9 ? VAR4 : VAR24, VAR17);
    VAR6 = VAR8 - VAR7 - VAR18;
    VAR12.VAR25 = FUN5(VAR6);
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
    {
        FUN6(VAR12.VAR26, VAR2, sizeof(VAR12.VAR26));
        ++VAR10;
    }
    if (VAR9)
    {
        VAR5 = FUN7(VAR12.VAR27);
        if (VAR5 != VAR6)
        {
            fprintf(VAR13, ""
                            "",
                    VAR5, VAR6);
            ++VAR10;
        }
    }
    VAR12.VAR27 = FUN8(VAR6);
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
    {
        VAR5 = FUN9(VAR2, &VAR3, 0);
        if (VAR5 > 255 || *VAR3)
        {
            fprintf(VAR13, ""VAR28=%VAR29\"", VAR2);
            return -1;
        }
        VAR12.VAR30 = (VAR31)VAR5;
        ++VAR10;
    }
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
    {
        FUN6(VAR12.VAR32, VAR2, sizeof(VAR12.VAR32));
        ++VAR10;
    }
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
    {
        FUN6(VAR12.VAR33, VAR2, sizeof(VAR12.VAR33));
        ++VAR10;
    }
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
    {
        VAR5 = FUN10(VAR2, &VAR3, 0);
        if (*VAR3)
        {
            fprintf(VAR13, ""VAR34=%VAR29\"", VAR2);
            return -1;
        }
        VAR12.VAR35 = FUN8(VAR5);
        ++VAR10;
    }
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
    {
        FUN6(VAR12.VAR36, VAR2, sizeof(VAR12.VAR36));
        ++VAR10;
    }
    if (FUN2(VAR2, sizeof(VAR2), "", VAR1))
    {
        VAR5 = FUN10(VAR2, &VAR3, 0);
        if (*VAR3)
        {
            fprintf(VAR13, ""%VAR29=%VAR29\"", "", VAR2);
            return -1;
        }
        VAR12.VAR37 = FUN8(VAR5);
        ++VAR10;
    }
    if (!VAR9 && !VAR10)
    {
        fprintf(VAR13, "");
    }
    VAR12.VAR38 = 0;
    memcpy(VAR4, &VAR12, sizeof(VAR12));
    if (VAR10 || !VAR9 || 1)
    {
        ((struct VAR39 *)VAR4)->VAR38 = FUN11((VAR31 *)VAR4 + VAR18, VAR6);
    }
    (*(VAR15 *)VAR14) = FUN8(FUN7(*(VAR15 *)VAR14) + 1);
    VAR16 = VAR8;
    return 0;
}