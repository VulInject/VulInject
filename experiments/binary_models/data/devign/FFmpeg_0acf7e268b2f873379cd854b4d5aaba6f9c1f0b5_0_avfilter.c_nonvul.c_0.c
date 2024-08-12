int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = NULL;
    VAR6 *VAR7;
    int VAR8 = 0;
    if (VAR3 && *VAR3)
    {
        if (!VAR2->VAR2->VAR9)
        {
            FUN2(VAR2, VAR10, ""
                                         "",
                   VAR3);
            return FUN3(VAR11);
        }
        if (!strcmp(VAR2->VAR2->VAR12, "") || !strcmp(VAR2->VAR2->VAR12, "") || !strcmp(VAR2->VAR2->VAR12, "") || !strcmp(VAR2->VAR2->VAR12, "") || !strcmp(VAR2->VAR2->VAR12, "") || !strcmp(VAR2->VAR2->VAR12, "") || !strcmp(VAR2->VAR2->VAR12, "") || !strcmp(VAR2->VAR2->VAR12, ""))
        {
            char *copy = FUN4(VAR3);
            char *VAR13 = copy;
            int VAR14 = 0;
            int VAR15 = 0;
            if (!copy)
            {
                VAR8 = FUN3(VAR16);
                goto VAR17;
            }
            if (!strcmp(VAR2->VAR2->VAR12, "") || !strcmp(VAR2->VAR2->VAR12, ""))
                VAR14 = 1;
            else if (!strcmp(VAR2->VAR2->VAR12, ""))
                VAR14 = 3;
            while (VAR14--)
            {
                VAR13 = strchr(VAR13, '');
                if (!VAR13)
                {
                    VAR13 = copy + strlen(copy);
                    break;
                }
                VAR13++;
            }
            VAR15 = strchr(VAR13, '') != NULL;
            if (!strcmp(VAR2->VAR2->VAR12, ""))
            {
                VAR15 = 0;
                while ((VAR13 = strchr(VAR13, '')) && VAR13[1] != '')
                {
                    const char *VAR18 = strchr(VAR13 + 1, '');
                    const char *VAR19 = strchr(VAR13 + 1, '');
                    const int VAR20 = VAR18 && (!VAR19 || VAR18 < VAR19);
                    if (VAR20)
                    {
                        VAR13++;
                        break;
                    }
                    VAR15 = 1;
                    *VAR13++ = '';
                }
                if (VAR13 && *VAR13 == '')
                {
                    VAR15 = 1;
                    memmove(VAR13, VAR13 + 1, strlen(VAR13));
                }
            }
            else
                while ((VAR13 = strchr(VAR13, '')))
                    *VAR13++ = '';
            if (VAR15)
                FUN2(VAR2, VAR21, ""
                                               "");
            FUN2(VAR2, VAR22, "", copy);
            VAR8 = FUN5(VAR2, &VAR5, copy);
            FUN6(&copy);
            if (VAR8 < 0)
                goto VAR17;
        }
        else
        {
            if (!strcmp(VAR2->VAR2->VAR12, ""))
            {
                char *VAR23;
                if (!FUN7(VAR3, "", 7))
                    VAR3 += 7;
                VAR8 = FUN8(&VAR23, VAR3, "", VAR24, 0);
                if (VAR8 < 0)
                {
                    FUN2(VAR2, VAR10, "", VAR3);
                    goto VAR17;
                }
                VAR8 = FUN5(VAR2, &VAR5, VAR23);
                FUN9(VAR23);
            }
            else
                VAR8 = FUN5(VAR2, &VAR5, VAR3);
            if (VAR8 < 0)
                goto VAR17;
        }
    }
    if (VAR2->VAR2->VAR9)
    {
        VAR8 = FUN10(VAR2->VAR25, &VAR5);
        if (VAR8 < 0)
        {
            FUN2(VAR2, VAR10, "");
            goto VAR17;
        }
    }
    if (VAR2->VAR2->VAR26)
        VAR8 = VAR2->VAR2->FUN11(VAR2, NULL);
    else if (VAR2->VAR2->VAR27)
        VAR8 = VAR2->VAR2->FUN12(VAR2);
    else if (VAR2->VAR2->VAR28)
        VAR8 = VAR2->VAR2->FUN13(VAR2, &VAR5);
    if (VAR8 < 0)
        goto VAR17;
    if ((VAR7 = FUN14(VAR5, "", NULL, VAR29)))
    {
        FUN2(VAR2, VAR10, "", VAR7->VAR30);
        VAR8 = VAR31;
        goto VAR17;
    }
VAR17:
    FUN15(&VAR5);
    return VAR8;
}