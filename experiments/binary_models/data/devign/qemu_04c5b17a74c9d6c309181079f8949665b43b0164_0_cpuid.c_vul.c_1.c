static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    unsigned int VAR4;
    VAR1 *VAR5;
    char *VAR6 = FUN2(VAR3);
    char *VAR7, *VAR8 = strtok(VAR6, "");
    uint32_t VAR9 = 0, VAR10 = 0;
    uint32_t VAR11 = 0, VAR12 = 0;
    uint32_t VAR13 = 0, VAR14 = 0;
    uint32_t VAR15 = 0, VAR16 = 0;
    uint32_t VAR17 = 0, VAR18 = 0;
    uint32_t VAR19 = 0, VAR20 = 0;
    uint32_t VAR21;
    for (VAR5 = VAR22; VAR5; VAR5 = VAR5->VAR23)
        if (!strcmp(VAR8, VAR5->VAR8))
            break;
    if (FUN3() && strcmp(VAR8, "") == 0)
    {
        FUN4(VAR2);
    }
    else if (!VAR5)
    {
        goto VAR24;
    }
    else
    {
        memcpy(VAR2, VAR5, sizeof(*VAR5));
    }
    VAR13 = ~0;
    FUN5("", &VAR9, &VAR10, &VAR11, &VAR12, &VAR13, &VAR14);
    VAR7 = strtok(NULL, "");
    while (VAR7)
    {
        char *VAR25;
        if (VAR7[0] == '')
        {
            FUN5(VAR7 + 1, &VAR9, &VAR10, &VAR11, &VAR12, &VAR13, &VAR14);
        }
        else if (VAR7[0] == '')
        {
            FUN5(VAR7 + 1, &VAR15, &VAR16, &VAR17, &VAR18, &VAR19, &VAR20);
        }
        else if ((VAR25 = strchr(VAR7, '')))
        {
            *VAR25 = 0;
            VAR25++;
            if (!strcmp(VAR7, ""))
            {
                char *VAR26;
                VAR21 = FUN6(VAR25, &VAR26, 0);
                if (!*VAR25 || *VAR26)
                {
                    fprintf(VAR27, "", VAR25);
                    goto VAR24;
                }
                VAR2->VAR28 = VAR21;
            }
            else if (!strcmp(VAR7, ""))
            {
                char *VAR26;
                VAR21 = FUN6(VAR25, &VAR26, 0);
                if (!*VAR25 || *VAR26 || VAR21 > 0xff)
                {
                    fprintf(VAR27, "", VAR25);
                    goto VAR24;
                }
                VAR2->VAR29 = VAR21;
            }
            else if (!strcmp(VAR7, ""))
            {
                char *VAR26;
                VAR21 = FUN6(VAR25, &VAR26, 0);
                if (!*VAR25 || *VAR26 || VAR21 > 0xf)
                {
                    fprintf(VAR27, "", VAR25);
                    goto VAR24;
                }
                VAR2->VAR30 = VAR21;
            }
            else if (!strcmp(VAR7, ""))
            {
                char *VAR26;
                VAR21 = FUN6(VAR25, &VAR26, 0);
                if (!*VAR25 || *VAR26)
                {
                    fprintf(VAR27, "", VAR25);
                    goto VAR24;
                }
                VAR2->VAR31 = VAR21;
            }
            else if (!strcmp(VAR7, ""))
            {
                char *VAR26;
                VAR21 = FUN6(VAR25, &VAR26, 0);
                if (!*VAR25 || *VAR26)
                {
                    fprintf(VAR27, "", VAR25);
                    goto VAR24;
                }
                if (VAR21 < 0x80000000)
                {
                    VAR21 += 0x80000000;
                }
                VAR2->VAR32 = VAR21;
            }
            else if (!strcmp(VAR7, ""))
            {
                if (strlen(VAR25) != 12)
                {
                    fprintf(VAR27, "");
                    goto VAR24;
                }
                VAR2->VAR33 = 0;
                VAR2->VAR34 = 0;
                VAR2->VAR35 = 0;
                for (VAR4 = 0; VAR4 < 4; VAR4++)
                {
                    VAR2->VAR33 |= ((VAR36)VAR25[VAR4]) << (8 * VAR4);
                    VAR2->VAR34 |= ((VAR36)VAR25[VAR4 + 4]) << (8 * VAR4);
                    VAR2->VAR35 |= ((VAR36)VAR25[VAR4 + 8]) << (8 * VAR4);
                }
                VAR2->VAR37 = 1;
            }
            else if (!strcmp(VAR7, ""))
            {
                FUN7(VAR2->VAR38, sizeof(VAR2->VAR38), VAR25);
            }
            else if (!strcmp(VAR7, ""))
            {
                int64_t VAR39;
                char *VAR26;
                VAR39 = FUN8(VAR25, &VAR26, VAR40, 1000);
                if (!*VAR25 || *VAR26)
                {
                    fprintf(VAR27, "", VAR25);
                    goto VAR24;
                }
                VAR2->VAR41 = VAR39 / 1000;
            }
            else
            {
                fprintf(VAR27, "", VAR7);
                goto VAR24;
            }
        }
        else if (!strcmp(VAR7, ""))
        {
            VAR42 = 1;
        }
        else if (!strcmp(VAR7, ""))
        {
            VAR42 = VAR43 = 1;
        }
        else
        {
            fprintf(VAR27, "", VAR7);
            goto VAR24;
        }
        VAR7 = strtok(NULL, "");
    }
    VAR2->VAR44 |= VAR9;
    VAR2->VAR45 |= VAR10;
    VAR2->VAR46 |= VAR11;
    VAR2->VAR47 |= VAR12;
    VAR2->VAR48 |= VAR13;
    VAR2->VAR49 |= VAR14;
    VAR2->VAR44 &= ~VAR15;
    VAR2->VAR45 &= ~VAR16;
    VAR2->VAR46 &= ~VAR17;
    VAR2->VAR47 &= ~VAR18;
    VAR2->VAR48 &= ~VAR19;
    VAR2->VAR49 &= ~VAR20;
    if (VAR42)
    {
        if (FUN9(VAR2) && VAR43)
            goto VAR24;
    }
    FUN10(VAR6);
    return 0;
VAR24:
    FUN10(VAR6);
    return -1;
}