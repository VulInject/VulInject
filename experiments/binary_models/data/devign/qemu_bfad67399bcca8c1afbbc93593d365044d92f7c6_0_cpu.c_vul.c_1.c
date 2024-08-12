static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    unsigned int VAR4;
    const VAR1 *VAR5 = NULL;
    char *VAR6 = strdup(VAR3);
    char *VAR7, *VAR8 = strtok(VAR6, "");
    uint32_t VAR9 = 0;
    uint32_t VAR10 = 0;
    uint64_t VAR11;
    uint32_t VAR12, VAR13, VAR14;
    for (VAR4 = 0; VAR4 < FUN2(VAR15); VAR4++)
    {
        if (FUN3(VAR8, VAR15[VAR4].VAR8) == 0)
        {
            VAR5 = &VAR15[VAR4];
        }
    }
    if (!VAR5)
    {
        goto VAR16;
    }
    memcpy(VAR2, VAR5, sizeof(*VAR5));
    VAR7 = strtok(NULL, "");
    while (VAR7)
    {
        char *VAR17;
        if (VAR7[0] == '')
        {
            FUN4(VAR7 + 1, &VAR9);
        }
        else if (VAR7[0] == '')
        {
            FUN4(VAR7 + 1, &VAR10);
        }
        else if ((VAR17 = strchr(VAR7, '')))
        {
            *VAR17 = 0;
            VAR17++;
            if (!strcmp(VAR7, ""))
            {
                char *VAR18;
                VAR11 = FUN5(VAR17, &VAR18, 0);
                if (!*VAR17 || *VAR18)
                {
                    fprintf(VAR19, "", VAR17);
                    goto VAR16;
                }
                VAR2->VAR11 = VAR11;
                fprintf(VAR19, "" VAR20 "", VAR11);
            }
            else if (!strcmp(VAR7, ""))
            {
                char *VAR18;
                VAR12 = FUN6(VAR17, &VAR18, 0);
                if (!*VAR17 || *VAR18)
                {
                    fprintf(VAR19, "", VAR17);
                    goto VAR16;
                }
                VAR2->VAR12 = VAR12;
                fprintf(VAR19, "", VAR12);
            }
            else if (!strcmp(VAR7, ""))
            {
                char *VAR18;
                VAR13 = FUN6(VAR17, &VAR18, 0);
                if (!*VAR17 || *VAR18)
                {
                    fprintf(VAR19, "", VAR17);
                    goto VAR16;
                }
                VAR2->VAR13 = VAR13;
                fprintf(VAR19, "", VAR13);
            }
            else if (!strcmp(VAR7, ""))
            {
                char *VAR18;
                VAR14 = FUN6(VAR17, &VAR18, 0);
                if (!*VAR17 || *VAR18 || VAR14 > VAR21 || VAR14 < VAR22)
                {
                    fprintf(VAR19, "", VAR17);
                    goto VAR16;
                }
                VAR2->VAR14 = VAR14;
                fprintf(VAR19, "", VAR14);
            }
            else
            {
                fprintf(VAR19, "", VAR7);
                goto VAR16;
            }
        }
        else
        {
            fprintf(VAR19, ""
                            "",
                    VAR7);
            goto VAR16;
        }
        VAR7 = strtok(NULL, "");
    }
    VAR2->VAR23 |= VAR9;
    VAR2->VAR23 &= ~VAR10;
    FUN7(VAR19, fprintf, VAR2->VAR23, NULL);
    free(VAR6);
    return 0;
VAR16:
    free(VAR6);
    return -1;
}