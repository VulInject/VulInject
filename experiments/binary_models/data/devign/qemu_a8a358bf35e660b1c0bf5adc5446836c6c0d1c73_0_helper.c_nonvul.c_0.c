static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    unsigned int VAR4;
    VAR1 *VAR5;
    char *VAR6 = strdup(VAR3);
    char *VAR7, *VAR8 = strtok(VAR6, "");
    uint32_t VAR9 = 0, VAR10 = 0, VAR11 = 0, VAR12 = 0;
    uint32_t VAR13 = 0, VAR14 = 0, VAR15 = 0, VAR16 = 0;
    uint32_t VAR17;
    VAR5 = NULL;
    for (VAR4 = 0; VAR4 < FUN2(VAR18); VAR4++)
    {
        if (strcmp(VAR8, VAR18[VAR4].VAR8) == 0)
        {
            VAR5 = &VAR18[VAR4];
            break;
        }
    }
    if (FUN3() && strcmp(VAR8, "") == 0)
    {
        FUN4(VAR2);
    }
    else if (!VAR5)
    {
        goto VAR19;
    }
    else
    {
        memcpy(VAR2, VAR5, sizeof(*VAR5));
    }
    FUN5("", &VAR9, &VAR10, &VAR11, &VAR12);
    VAR7 = strtok(NULL, "");
    while (VAR7)
    {
        char *VAR20;
        if (VAR7[0] == '')
        {
            FUN5(VAR7 + 1, &VAR9, &VAR10, &VAR11, &VAR12);
        }
        else if (VAR7[0] == '')
        {
            FUN5(VAR7 + 1, &VAR13, &VAR14, &VAR15, &VAR16);
        }
        else if ((VAR20 = strchr(VAR7, '')))
        {
            *VAR20 = 0;
            VAR20++;
            if (!strcmp(VAR7, ""))
            {
                char *VAR21;
                VAR17 = FUN6(VAR20, &VAR21, 0);
                if (!*VAR20 || *VAR21)
                {
                    fprintf(VAR22, "", VAR20);
                    goto VAR19;
                }
                VAR2->VAR23 = VAR17;
            }
            else if (!strcmp(VAR7, ""))
            {
                char *VAR21;
                VAR17 = FUN6(VAR20, &VAR21, 0);
                if (!*VAR20 || *VAR21 || VAR17 > 0xff)
                {
                    fprintf(VAR22, "", VAR20);
                    goto VAR19;
                }
                VAR2->VAR24 = VAR17;
            }
            else if (!strcmp(VAR7, ""))
            {
                char *VAR21;
                VAR17 = FUN6(VAR20, &VAR21, 0);
                if (!*VAR20 || *VAR21 || VAR17 > 0xf)
                {
                    fprintf(VAR22, "", VAR20);
                    goto VAR19;
                }
                VAR2->VAR25 = VAR17;
            }
            else if (!strcmp(VAR7, ""))
            {
                char *VAR21;
                VAR17 = FUN6(VAR20, &VAR21, 0);
                if (!*VAR20 || *VAR21)
                {
                    fprintf(VAR22, "", VAR20);
                    goto VAR19;
                }
                VAR2->VAR26 = VAR17;
            }
            else if (!strcmp(VAR7, ""))
            {
                char *VAR21;
                VAR17 = FUN6(VAR20, &VAR21, 0);
                if (!*VAR20 || *VAR21)
                {
                    fprintf(VAR22, "", VAR20);
                    goto VAR19;
                }
                if (VAR17 < 0x80000000)
                {
                    VAR17 += 0x80000000;
                }
                VAR2->VAR27 = VAR17;
            }
            else if (!strcmp(VAR7, ""))
            {
                if (strlen(VAR20) != 12)
                {
                    fprintf(VAR22, "");
                    goto VAR19;
                }
                VAR2->VAR28 = 0;
                VAR2->VAR29 = 0;
                VAR2->VAR30 = 0;
                for (VAR4 = 0; VAR4 < 4; VAR4++)
                {
                    VAR2->VAR28 |= ((VAR31)VAR20[VAR4]) << (8 * VAR4);
                    VAR2->VAR29 |= ((VAR31)VAR20[VAR4 + 4]) << (8 * VAR4);
                    VAR2->VAR30 |= ((VAR31)VAR20[VAR4 + 8]) << (8 * VAR4);
                }
                VAR2->VAR32 = 1;
            }
            else if (!strcmp(VAR7, ""))
            {
                FUN7(VAR2->VAR33, sizeof(VAR2->VAR33), VAR20);
            }
            else
            {
                fprintf(VAR22, "", VAR7);
                goto VAR19;
            }
        }
        else
        {
            fprintf(VAR22, "", VAR7);
            goto VAR19;
        }
        VAR7 = strtok(NULL, "");
    }
    VAR2->VAR34 |= VAR9;
    VAR2->VAR35 |= VAR10;
    VAR2->VAR36 |= VAR11;
    VAR2->VAR37 |= VAR12;
    VAR2->VAR34 &= ~VAR13;
    VAR2->VAR35 &= ~VAR14;
    VAR2->VAR36 &= ~VAR15;
    VAR2->VAR37 &= ~VAR16;
    free(VAR6);
    return 0;
VAR19:
    free(VAR6);
    return -1;
}