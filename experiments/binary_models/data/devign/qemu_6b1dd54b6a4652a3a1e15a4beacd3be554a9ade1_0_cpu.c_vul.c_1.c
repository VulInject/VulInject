static void FUN1(VAR1 *VAR2, char *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    char *VAR8;
    FeatureWordArray VAR9 = {0};
    FeatureWordArray VAR10 = {0};
    uint32_t VAR11;
    VAR12 *VAR13 = &VAR7->VAR13;
    VAR4 *VAR14 = NULL;
    VAR8 = VAR3 ? strtok(VAR3, "") : NULL;
    while (VAR8)
    {
        char *VAR15;
        if (VAR8[0] == '')
        {
            FUN3(VAR8 + 1, VAR9);
        }
        else if (VAR8[0] == '')
        {
            FUN3(VAR8 + 1, VAR10);
        }
        else if ((VAR15 = strchr(VAR8, '')))
        {
            *VAR15 = 0;
            VAR15++;
            FUN4(VAR8);
            if (!strcmp(VAR8, ""))
            {
                char *VAR16;
                char VAR17[32];
                VAR11 = FUN5(VAR15, &VAR16, 0);
                if (!*VAR15 || *VAR16)
                {
                    FUN6(&VAR14, "", VAR15);
                    goto VAR18;
                }
                if (VAR11 < 0x80000000)
                {
                    FUN7(""
                                 "");
                    VAR11 += 0x80000000;
                }
                snprintf(VAR17, sizeof(VAR17), "" VAR19, VAR11);
                FUN8(FUN9(VAR7), VAR17, VAR8, &VAR14);
            }
            else if (!strcmp(VAR8, ""))
            {
                int64_t VAR20;
                char *VAR16;
                char VAR17[32];
                VAR20 = FUN10(VAR15, &VAR16, VAR21, 1000);
                if (VAR20 < 0 || *VAR16)
                {
                    FUN6(&VAR14, "", VAR15);
                    goto VAR18;
                }
                snprintf(VAR17, sizeof(VAR17), "" VAR22, VAR20);
                FUN8(FUN9(VAR7), VAR17, "", &VAR14);
            }
            else if (!strcmp(VAR8, ""))
            {
                char *VAR16;
                const int VAR23 = 0xFFF;
                char VAR17[32];
                VAR11 = FUN5(VAR15, &VAR16, 0);
                if (!*VAR15 || *VAR16)
                {
                    FUN6(&VAR14, "", VAR15);
                    goto VAR18;
                }
                if (VAR11 < VAR23)
                {
                    FUN7(""
                                 "",
                                 VAR23);
                    VAR11 = VAR23;
                }
                snprintf(VAR17, sizeof(VAR17), "" VAR24, VAR11);
                FUN8(FUN9(VAR7), VAR17, VAR8, &VAR14);
            }
            else
            {
                FUN8(FUN9(VAR7), VAR15, VAR8, &VAR14);
            }
        }
        else
        {
            FUN4(VAR8);
            FUN8(FUN9(VAR7), "", VAR8, &VAR14);
        }
        if (VAR14)
        {
            FUN11(VAR5, VAR14);
            goto VAR18;
        }
        VAR8 = strtok(NULL, "");
    }
    VAR13->VAR3[VAR25] |= VAR9[VAR25];
    VAR13->VAR3[VAR26] |= VAR9[VAR26];
    VAR13->VAR3[VAR27] |= VAR9[VAR27];
    VAR13->VAR3[VAR28] |= VAR9[VAR28];
    VAR13->VAR3[VAR29] |= VAR9[VAR29];
    VAR13->VAR3[VAR30] |= VAR9[VAR30];
    VAR13->VAR3[VAR31] |= VAR9[VAR31];
    VAR13->VAR3[VAR32] |= VAR9[VAR32];
    VAR13->VAR3[VAR25] &= ~VAR10[VAR25];
    VAR13->VAR3[VAR26] &= ~VAR10[VAR26];
    VAR13->VAR3[VAR27] &= ~VAR10[VAR27];
    VAR13->VAR3[VAR28] &= ~VAR10[VAR28];
    VAR13->VAR3[VAR29] &= ~VAR10[VAR29];
    VAR13->VAR3[VAR30] &= ~VAR10[VAR30];
    VAR13->VAR3[VAR31] &= ~VAR10[VAR31];
    VAR13->VAR3[VAR32] &= ~VAR10[VAR32];
VAR18:
    return;
}