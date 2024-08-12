int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2 ? (VAR4 *)VAR2->VAR6 : VAR7;
    const char *VAR8;
    int VAR9 = 0;
    int VAR10 = 0;
    int VAR11 = 0;
    int VAR12 = 0, VAR13 = 0;
    FUN2(VAR2);
    if (strcmp(VAR3, "") == 0)
        return 0;
    if (!(VAR5->VAR3 = strdup(VAR3)))
        return -1;
    VAR8 = VAR3;
    while ((VAR8 = strchr(VAR8, '')))
    {
        VAR8++;
        if (FUN3(VAR8, "", 8) == 0)
        {
            VAR9 = 1;
        }
        else if (FUN3(VAR8, "", 7) == 0)
        {
            VAR10 = 1;
        }
        else if (FUN3(VAR8, "", 3) == 0)
        {
            VAR11 = FUN4(VAR8 + 3) + 5900;
        }
        else if (FUN3(VAR8, "", 3) == 0)
        {
            VAR12 = 1;
        }
        else if (FUN3(VAR8, "", 4) == 0)
        {
            char *VAR14, *VAR15;
            VAR13 = 1;
            if (FUN3(VAR8, "", 10) == 0)
                VAR5->VAR16 = 1;
            VAR14 = strchr(VAR8, '');
            VAR15 = strchr(VAR8, '');
            if (VAR14 && (!VAR15 || (VAR14 < VAR15)))
            {
                int VAR17 = VAR15 ? VAR15 - (VAR14 + 1) : strlen(VAR14 + 1);
                char *VAR18 = FUN5(VAR14 + 1, VAR17);
                FUN6("", VAR18);
                if (FUN7(VAR5, VAR18) < 0)
                {
                    fprintf(VAR19, "", VAR18);
                    FUN8(VAR18);
                    FUN8(VAR5->VAR3);
                    VAR5->VAR3 = NULL;
                    return -1;
                }
                FUN8(VAR18);
            }
            else
            {
                fprintf(VAR19, "");
                FUN8(VAR5->VAR3);
                VAR5->VAR3 = NULL;
                return -1;
            }
        }
    }
    if (VAR9)
    {
        if (VAR12)
        {
            VAR5->VAR20 = VAR21;
            if (VAR13)
            {
                FUN6("");
                VAR5->VAR22 = VAR23;
            }
            else
            {
                FUN6("");
                VAR5->VAR22 = VAR24;
            }
        }
        else
        {
            FUN6("");
            VAR5->VAR20 = VAR25;
            VAR5->VAR22 = VAR26;
        }
    }
    else
    {
        if (VAR12)
        {
            VAR5->VAR20 = VAR21;
            if (VAR13)
            {
                FUN6("");
                VAR5->VAR22 = VAR27;
            }
            else
            {
                FUN6("");
                VAR5->VAR22 = VAR28;
            }
        }
        else
        {
            FUN6("");
            VAR5->VAR20 = VAR29;
            VAR5->VAR22 = VAR26;
        }
    }
    if (VAR10)
    {
        if (FUN3(VAR3, "", 5) == 0)
            VAR5->VAR30 = FUN9(VAR3 + 5);
        else
            VAR5->VAR30 = FUN10(VAR3, VAR31);
        if (-1 == VAR5->VAR30)
        {
            free(VAR5->VAR3);
            VAR5->VAR3 = NULL;
            return -1;
        }
        else
        {
            VAR5->VAR32 = VAR5->VAR30;
            VAR5->VAR30 = -1;
            FUN11(VAR5);
        }
        return 0;
    }
    else
    {
        char *VAR33;
        VAR33 = FUN12(256);
        if (FUN3(VAR3, "", 5) == 0)
        {
            strcpy(VAR33, "");
            VAR5->VAR30 = FUN13(VAR3, VAR33 + 5, 256 - 5);
        }
        else
        {
            VAR5->VAR30 = FUN14(VAR3, VAR33, 256, VAR31, 5900);
        }
        if (-1 == VAR5->VAR30)
        {
            free(VAR33);
        }
        else
        {
            free(VAR5->VAR3);
            VAR5->VAR3 = VAR33;
        }
    }
    return FUN15(VAR5->VAR30, VAR34, VAR35, NULL, VAR5);
}